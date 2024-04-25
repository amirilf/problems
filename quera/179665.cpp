#include <iostream>

using namespace std;

int getLayerCapacity(int &n, bool &isEvenSquare)
{
    if (n == 1 && !isEvenSquare)
        return 1;

    int first = 0;
    if (isEvenSquare)
        first = 4;

    return (8 * (n - 1)) + first;
}

int findLayer(bool &isEven, int &layers, int &position, int &firstIndex)
{
    int firstLayerIndex = 1;
    firstIndex = firstLayerIndex;

    int secondLayerIndex;
    int checkingLayer = layers;

    for (int currentLayer = 1; currentLayer < layers; currentLayer++)
    {
        secondLayerIndex = getLayerCapacity(checkingLayer, isEven) + firstLayerIndex;

        if (firstLayerIndex <= position && position < secondLayerIndex)
        {
            // layer found
            firstIndex = firstLayerIndex;
            return currentLayer;
        }

        firstLayerIndex = secondLayerIndex;
        checkingLayer--;
    }

    // it's in the middle layer
    return layers;
};

void findExactPosition(int &n, int position[])
{
    int row = n - ((2 * position[1]) - 2) - 1;
    int part = 1;

    while (part < 5)
    {
        if (position[2] + (row * (part - 1)) <= position[0] && position[0] < position[2] + (row * part))
            break;
        part++;
    }

    /*
            3
          -----
        4 |   | 2
          -----
            1
    */
    switch (part)
    {
    case 1:
        position[3] = position[1] + (position[0] - position[2]);
        position[4] = position[1];
        break;
    case 2:
        position[3] = position[1] + row;
        position[4] = position[1] + (position[0] - (position[2] + (row * 1)));
        break;
    case 3:
        position[3] = position[1] + row + ((position[2] + (row * 2)) - position[0]);
        position[4] = position[1] + row;
        break;
    case 4:
        position[3] = position[1];
        position[4] = position[1] + row + ((position[2] + (row * 3)) - position[0]);
        break;

    // only for the middlest one in odd square
    case 5:
        position[3] = position[1];
        position[4] = position[1];
    }
}

void printResult(int position1[], int position2[])
{
    int xDiff = position1[3] - position2[3];
    int yDiff = position1[4] - position2[4];

    if (xDiff > 0)
        cout << xDiff << " L" << endl;
    else if (xDiff < 0)
        cout << -xDiff << " R" << endl;

    if (yDiff > 0)
        cout << yDiff << " D" << endl;
    else if (yDiff < 0)
        cout << -yDiff << " U" << endl;
}

int main()
{

    // positions [ 0:number, 1:layer, 2:{first index in layer}, 3:x, 4:y ]
    int position1[5] = {0, 0, 0, 0, 0};
    int position2[5] = {0, 0, 0, 0, 0};

    // side of square
    int n;
    cin >> n;

    // get positions
    cin >> position1[0];
    cin >> position2[0];

    // layers in square
    bool isEven = (n % 2) ? false : true;
    int layers = (isEven) ? n / 2 : n / 2 + 1;

    // find layers
    position1[1] = findLayer(isEven, layers, position1[0], position1[2]);
    position2[1] = findLayer(isEven, layers, position2[0], position2[2]);

    findExactPosition(n, position1);
    findExactPosition(n, position2);

    printResult(position1, position2);

    return 0;
}
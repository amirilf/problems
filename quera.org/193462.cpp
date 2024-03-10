#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// void sort(float array[], int length)
// {
//     for (int i = 1; i < length; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (array[i] > array[j])
//             {
//                 float tmp = array[i];
//                 array[i] = array[j];
//                 array[j] = tmp;
//             }
//         }
//     }
// }

int main()
{
    int n;
    cin >> n;

    float slices[n];
    for (int i = 0; i < n; i++)
        cin >> slices[i];

    sort(slices, slices + n);

    float maxDiff = 0;

    for (int i = 0; i < n - 1; i++)
        if (slices[i + 1] - slices[i] > maxDiff)
            maxDiff = slices[i + 1] - slices[i];

    if (360 - (slices[n - 1] - slices[0]) > maxDiff)
        maxDiff = 360 - (slices[n - 1] - slices[0]);

    cout << maxDiff * 100 / 360 << endl;

    return 0;
}
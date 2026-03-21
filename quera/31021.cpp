#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++) cin >> names[i];
    
    for (int i = 1; i < n; i++)
        for (int j = i - 1; j >= 0; j--)
            cout << names[i] << ": salam " << names[j] << "!"  << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << ": khodafez bacheha!" << endl;
        for (int j = i + 1; j < n; j++)
            cout << names[j] << ": khodafez " << names[i] << "!"  << endl;
    }
    

    return 0;
}
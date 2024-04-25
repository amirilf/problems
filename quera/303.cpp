#include <iostream>

using namespace std;

void ShowFibNth(long int n, long int n_plus)
{
    cout << n << endl;

    if (n_plus != 1)
        ShowFibNth(n_plus - n, n);
}

int main()
{
    long int n, n_plus;
    cin >> n >> n_plus;
    ShowFibNth(n, n_plus);
    return 0;
}
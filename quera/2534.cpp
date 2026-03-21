#include <iostream>

using namespace std;

int main()
{
    int a, s = 0, res = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
        s += arr[i];
    }
    s /= a;
    for (int i = 0; i < a; i++) {
        res += (arr[i] > s) ? (arr[i] - s) : 0;
    }
    cout << res << endl;
    return 0;
}
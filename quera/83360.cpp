#include <iostream>

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    cout << (b.find(a) == string::npos ? 0 : 1)  << endl;
    return 0;
}
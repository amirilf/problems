#include <iostream>

using namespace std;

int main()
{
    string a,b;
    getline(cin, a);
    getline(cin, b);
    cout << (b.find(a) == string::npos ? 0 : 1)  << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << 
        (((a - b) < (c - d) ) ? "Namakestan"
        : ((a - b) > (c - d)) ? "Shekarestan"
        : "Equal") << endl;
    return 0;
}
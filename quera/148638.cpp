#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,c,d,n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;
        if (a + c > b + d) cout << "perspolis" << endl;
        else if (a + c < b + d) cout << "esteghlal" << endl;
        else {
            if (b > c) cout << "esteghlal" << endl;
            else if (b < c) cout << "perspolis" << endl;
            else cout << "penalty" << endl;
        }
    }
}
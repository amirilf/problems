#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int m,n;
    cin >> n >> m;
    unordered_map<string, string> k;
    string lis[m],a,b;
    for (int i = 0; i < n; i++) { cin >> a >> b; k[a] = b; }
    for (int i = 0; i < m; i++) { cin >> lis[i]; }
    for (string s: lis) cout << (k.count(s) ? k[s] + " " : "") << "kachal! ";
    return 0;
}
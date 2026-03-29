#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    long P,R,S,p,r,s,res = 0;
    cin >> P >> R >> S >> p >> r >> s;
    if (s > P) { s -= P; res += P; P = 0; } else { P -= s; res += s; s = 0; }
    if (p > R) { p -= R; res += R; R = 0; } else { R -= p; res += p; p = 0; }
    if (r > S) { r -= S; res += S; S = 0; } else { S -= r; res += r; r = 0; }
    if (p > 0 && P > 0) { P -= (p > P ? P : p); }
    if (r > 0 && R > 0) { R -= (r > R ? R : r); }
    if (s > 0 && S > 0) { S -= (s > S ? S : s); }
    res -= (P + S + R);
    cout << res << endl;
    return 0;
}
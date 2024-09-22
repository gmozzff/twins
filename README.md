#include<bits/stdc++.h>
#define endl "\n"
#define all(v) v.begin(), v.end()
#define int long long
#define getbit(x,y) (((x)>>(y))&1)
#define getoff(x,y) ((x)^(1<<(y)))
#define bp __builtin_popcount
#pragma GCC optimize ("Ofast","unroll-loops")
#pragma GCC target ("avx2")
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define mize(a, b) a = min(a, b)
#define FOR(i, a, b) for (int i = a, _n = b; i <= _n; i++)
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;

const int MAXN = 1e6;
bool nt[MAXN+1];
int sum[MAXN+1];
int dem[MAXN+1];

int kt(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

void sieve() {
    fill(nt, nt + MAXN + 1, true);
    nt[0] = nt[1] = false;  
    for (int i = 2; i <= sqrt(MAXN); i++) {
        if (nt[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                nt[j] = false;
            }
        }
    }
}

void preprocess() {
    for (int i = 1; i <= MAXN; i++) {
        sum[i] = sum[i - 1];
        dem[i] = dem[i - 1];
        if (nt[i]) {
            sum[i] += i;
            int rv = kt(i);
            if (i != rv && nt[rv]) {
                dem[i]++;
            }
        }
    }
}

 main() {fast

    sieve();     
    preprocess(); 

    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;
        int s = sum[b] - sum[a - 1];
        int s1 = dem[b] - dem[a - 1];
        cout << s << " " << s1 << endl;
    }


    return 0;
}
    

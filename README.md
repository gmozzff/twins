#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define inf32 ((int)1e9 + 7)
#define inf64 ((long long)1e18 + 7)
#define MASK32(x) (1 << (x))
#define MASK64(x) (1LL << (x))
#define BIT(mask, i) (((mask) >> (i)) & 1)
#define all(a) begin(a), end(a)
#define isz(a) ((int)a.size())

const int N = 1e5 + 1;

pair<int, int> a[N * 2];

int main() {
//freopen("MAP.inp","r",stdin);
  //freopen("MAP.out","w",stdout);

    int n, m, k;
    cin >> n >> m >> k;
    for(int i = 1, x; i <= m; ++i) {
        cin >> x;
        a[i * 2 - 1] = {max(0, x - k), 1};
        a[i * 2] = {min(n, x + k), -1};
    }
    int cnt = 0, res = 0;
    for(int i = 1; i <= m * 2; ++i) {
        if(cnt == 0) {
            int d = a[i].first - a[i - 1].first;
            res += d / (k * 2) + (d % (k * 2) > 0);
        }
        cnt += a[i].second;
    }
    cout << res;

    return 0;
}
    

#include <bits/stdc++.h>
#define int long long
using namespace std;

 main() {//freopen("DHH.inp","r",stdin);
  //freopen("DHH.out","w",stdout);
    int N;
    cin >> N;
int  a[N+1];

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
sort(a,a+N);

    int m1 = a[N-1] * a[N-2] * a[N-3];
    int m2 = a[0] * a[1] * a[N-1];
    cout << max(m1, m2);

    return 0;
}
    

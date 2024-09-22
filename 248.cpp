#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast","unroll-loops")
#pragma GCC target ("avx2")
#define fast ios_base::sync_with_stdio(0); cin.tie(0);


using namespace std;

int main() {fast
//freopen("248.inp","r",stdin);
  //freopen("248.out","w",stdout);
    int N;
    cin >> N;
    
    vector<int> A(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    
    for (int i = 1; i <= N; ++i) {
        dp[i][i] = A[i];
    }

    for (int len = 2; len <= N; ++len) { 
        for (int l = 1; l <= N - len + 1; ++l) {  
            int r = l + len - 1;  
            for (int k = l; k < r; ++k) {  
                if (dp[l][k] == dp[k + 1][r]) {  
                    dp[l][r] = max(dp[l][r], dp[l][k] + 1);
                }
            }
        }
    }

    int result = 0;
    for (int l = 1; l <= N; ++l) {
        for (int r = l; r <= N; ++r) {
            result = max(result, dp[l][r]);
        }
    }

    cout << result;

    return 0;
}
    
#include <bits/stdc++.h>
using namespace std;
bool ham(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

vector<int> ham1(int N) {
    vector<int> dem;
    for (int i = 2; i <= N; i++) {
        if (ham(i))
            dem.push_back(i);
    }
    return dem;
}
vector<int> dem2(int N) {
    vector<int> dem = ham1(N);
    vector<int> fac(dem.size(), 0);

    for (int i = 2; i <= N; i++) {
        int num = i;
        for (int j = 0; j < dem.size(); j++) {
            while (num % dem[j] == 0) {
                fac[j]++;
                num /= dem[j];
            }
        }
    }

    return fac;
}

int main() {
    //freopen("analyse.inp","r",stdin);
  //freopen("analyse.out","w",stdout);
ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N;
    while (cin >> N) {
        vector<int> fac= dem2(N);

        for (int i = 0; i < fac.size(); i++) {
            cout << fac[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
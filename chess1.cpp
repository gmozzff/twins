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
typedef long long ll;
const int N=4e5+5;
vector<int> e[N];
int dfn[N],tot,id[N],sz[N],n;long long sum=0;
void solve(int u,int fath){
	dfn[u]=++tot,id[tot]=u;sz[u]=1;
	for(int v:e[u])
		if(v!=fath) solve(v,u),sz[u]+=sz[v],sum+=2ll*min(sz[v],n-sz[v]);
}
signed main(){fast
//freopen("chess1.inp","r",stdin);
  //freopen("chess1.out","w",stdout);
	cin>>n;
	for(int i=1;i<n;++i){
		int u,v;
		cin>>u>>v;
		e[u].push_back(v),e[v].push_back(u);
	}
	solve(1,0);
	cout<<sum<<"\n";
	return 0;
}
    

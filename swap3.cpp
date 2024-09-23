#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast","unroll-loops")
#pragma GCC target ("avx2")
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
const int N=1e5+5;
int s[65]={2, 3 ,5 ,7, 11 ,13, 17, 19, 23, 29, 31 ,37, 41, 43 ,47 ,53 ,59 ,61, 67, 71, 73 ,79, 83 ,89, 97, 101, 103, 107 ,109, 113 ,127 ,131 ,137 ,139, 149, 151 ,157 ,163 ,167 ,173 ,179 ,181 ,191 ,193 ,197, 199 ,211 ,223, 227, 229, 233 ,239 ,241 ,251, 257, 263, 269, 271, 277, 281 ,283 ,293 ,307, 311, 313};
int n,a[N],cnt=0,pos[N];
bool check[N];
vector<pair<int,int>> v;
void sang()
{
    memset(check, true, sizeof(check));
    check[1]=false;
    for(int i=2;1LL*i*i<=100000;i++)
        if(check[i])
    {
        for(int j=i*i;j<=100000;j+=i)
            check[j]=false;
    }
}
int main()
{fast
//freopen("swap3.inp","r",stdin);
  //freopen("swap3.out","w",stdout);

    cin>>n;
    sang();
    for(int i=1;i<=n;i++)
        {cin>>a[i]; pos[a[i]]=i;}
    for(int i=1;i<=n;i++)
            {
            for(int j=pos[i];j>i;)
            {
                int k=i;
                while(!check[j-k+1]) k++;
                    pos[a[k]]=j;
                    pos[a[j]]=k;
                    v.push_back({k, j});
                    swap(a[j],a[k]);
                    j=k;
            }
            }
    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<< " "<<v[i].second<<'\n';

    return 0;
}
    
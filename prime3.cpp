#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
     for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
     return n>1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    //freopen("prime3.inp","r",stdin);
  //freopen("prime3.out","w",stdout);
    int n,ok=0;
    cin>>n;
    for(int i=3;i*i<=n;i++)
    {
            if(prime(i) and prime(i*i+4) and i*i+4<=n)
            {
                cout<<2<<" "<<i<<" "<<i*i+4<<endl;
                ok=1;
            }
    }
    if(ok==0) cout<<-1;
}
    
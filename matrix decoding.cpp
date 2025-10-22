#define TASK "text"
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
/*
                  ▒▒▒▒▒▒▒▒▒▒▒▒                                            
                ▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒                                          
              ▓▓▒▒▒▒░░░░░░░░░░▓▓▓▓                                        
            ░░▒▒▒▒░░▓▓░░░░░░░░░░▓▓                                        
            ░░▒▒▒▒░░▒▒░░░░░░  ░░▓▓▒▒                                      
        ░░▓▓░░▒▒▒▒▒▒░░░░░░░░░░░░▒▒▓▓                                      
  ░░░░░░░░░░░░▒▒▒▒▒▒▒▒░░░░▒▒▒▒░░░░▓▓                                      
                    ▒▒▓▓▓▓▒▒▒▒░░▒▒▓▓                                      
                        ▓▓▒▒░░░░▒▒▓▓                                      
                        ▓▓▒▒░░░░▒▒                                        
                      ▓▓▒▒░░  ░░▒▒                                        
                  ▓▓▓▓▒▒░░░░░░▓▓                                          
              ▓▓▒▒▒▒▒▒▒▒▒▒░░▒▒                                            
            ▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓                                              
          ▓▓██▓▓▓▓        ▓▓▒▒▒▒▒▒▒▒                                      
        ██▓▓▒▒▓▓▓▓▓▓▓▓██▓▓██░░░░░░▒▒▒▒▒▒▒▒                                
      ▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓████░░░░░░░░░░░░░░▓▓▓▓▓▓                            
      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▒▒▒▒▒▒▒▒░░░░░░  ▓▓▓▓                        
    ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒░░▓▓▓▓▓▓▓▓▒▒▒▒▒▒░░░░░░  ▓▓▓▓                    
    ██▒▒▓▓▓▓▓▓▓▓██▒▒▒▒▒▒▒▒▒▒░░░░████▓▓▓▓▒▒▒▒▒▒▒▒░░░░  ▓▓▓▓                
    ██▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░████▓▓▓▓▒▒▒▒▒▒░░░░    ▓▓              
    ██▓▓▓▓▓▓██▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░██████████▓▓▓▓░░░░  ▓▓▓▓          
    ██▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░████████████▒▒▓▓░░░░▓▓        
    ██▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░  ████████░░░░▓▓▓▓    ▓▓    
    ████▓▓██▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░    ██░░██████▓▓██    ██  
      ██████▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░  ▓▓████████▓▓▓▓▓▓    
      ░░████▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒░░            ░░  ░░░░░░
          ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░██████░░░░░░░░░░░░  
            ▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░████▓▓▓▓          
              ▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒                  
                  ▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒                              
                            ▓▓▓▓▓▓▓▓▓▓                                    
                            ▒▒▓▓▒▒▓▓▒▒                                    
                              ▒▒  ▒▒                                      
                              ▒▒  ▒▒                                      
                              ▒▒  ▒▒                                      
                              ▒▒  ▒▒                                      
                    ▒▒▒▒▒▒▒▒  ▒▒  ▒▒                                      
                ░░░░▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒   
*/
int M(int a, int b) { a %= b; if (a < 0) a += b; return a; }
int E(int a, int b, int &x, int &y) {
    if (b == 0) { x = 1; y = 0; return a; }
    int x1, y1; int g = E(b, a % b, x1, y1);
    x = y1; y = x1 - (a / b) * y1; return g;
}
int I(int a, int m) { int x, y; int g = E(a, m, x, y); if (g != 1) return -1; return M(x, m); }
void G(const vector<vector<int>> &a, vector<vector<int>> &t, int p, int q, int n) {
    int ii=0,jj=0; for(int r=0;r<n;r++){ if(r==p)continue; jj=0; for(int c=0;c<n;c++){ if(c==q)continue; t[ii][jj++]=a[r][c]; } ii++; }
}
int D(const vector<vector<int>> &a, int n, int m) {
    if (n==1) return M(a[0][0], m);
    int d=0,s=1; vector<vector<int>> t(n-1,vector<int>(n-1));
    for(int f=0;f<n;f++){ G(a,t,0,f,n); int sub=D(t,n-1,m); d=M(d+s*a[0][f]*sub,m); s=-s; }
    return M(d,m);
}
void A(const vector<vector<int>> &a, vector<vector<int>> &adj, int n, int m) {
    if(n==1){ adj[0][0]=1; return; }
    vector<vector<int>> t(n-1,vector<int>(n-1));
    for(int i=0;i<n;i++){ for(int j=0;j<n;j++){ G(a,t,i,j,n); int td=D(t,n-1,m); int sig=((i+j)%2==0)?1:-1; adj[j][i]=M(sig*td,m); } }
}
bool V(const vector<vector<int>> &a, vector<vector<int>> &inv, int n, int m) {
    int det=D(a,n,m); int di=I(det,m); if(di==-1) return false;
    vector<vector<int>> adj(n,vector<int>(n)); A(a,adj,n,m);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) inv[i][j]=M(adj[i][j]*di,m);
    return true;
}
void P(const vector<vector<int>> &a,const vector<int> &v,vector<int> &o,int n,int m){
    for(int i=0;i<n;i++){ int s=0; for(int j=0;j<n;j++) s+=a[i][j]*v[j]; o[i]=M(s,m); }
}
void C(string &s){ string t; t.reserve(s.size()); for(char ch:s){ if(islower((unsigned char)ch)) ch=toupper((unsigned char)ch); if('A'<=ch&&ch<='Z') t.push_back(ch);} s.swap(t); }

int main(){
    fast;
    const int M26=26;
    string S;
    while(true){
        cout<<"\n=== Rainy75 is da bezt (mod 26) ===\n1. Mã hóa\n2. Giải mã\n3. Thoát\nChọn (1/2/3): ";
        if(!getline(cin,S)) break;
        int o=0; try{o=stoi(S);}catch(...){o=0;}
        if(o==3){ cout<<"bai bai gay ~ <3\n"; break; }
        if(o!=1&&o!=2){ cout<<"chọn sai, chọn lại nha nigga~\n"; continue; }
        string t;
        if(o==1) cout<<"Nhập văn bản gốc: ";
        else cout<<"Nhập văn bản mã hóa: ";
        if(!getline(cin,t)) break;
        C(t); if(t.empty()){ cout<<"Không có ký tự hợp lệ\n"; continue; }
        cout<<"Nhập kích thước ma trận khoá: ";
        if(!getline(cin,S)) break;
        int n=0; try{n=stoi(S);}catch(...){n=0;}
        if(n<=0){ cout<<"Kích thước không hợp lệ.\n"; continue; }
        vector<vector<int>> k(n,vector<int>(n,0));
        cout<<"Nhập ma trận khoá "<<n<<"x"<<n<<":\n";
        for(int r=0;r<n;r++){ cout<<"Hàng "<<r+1<<": "; string row; getline(cin,row); stringstream ss(row); for(int c=0;c<n;c++){ int val=0; if(!(ss>>val)) val=0; k[r][c]=M(val,M26); } }

        if(o==1){
            int len=t.size(),pad=(n-(len%n))%n; t.append(pad,'X');
            int bl=t.size()/n; string out; out.reserve(t.size());
            vector<int> v(n),r(n);
            for(int b=0;b<bl;b++){ for(int i=0;i<n;i++) v[i]=t[b*n+i]-'A'; P(k,v,r,n,M26); for(int i=0;i<n;i++) out.push_back(char(r[i]+'A')); }
            cout<<"Văn bản mã hóa: "<<out<<"\n";
        } else {
            vector<vector<int>> inv(n,vector<int>(n));
            if(!V(k,inv,n,M26)){ cout<<"Ma trận khoá không khả nghịch\n"; continue; }
            if(t.size()%n!=0){ cout<<"Ciphertext không hợp lệ\n"; continue; }
            int bl=t.size()/n; string out; out.reserve(t.size());
            vector<int> v(n),r(n);
            for(int b=0;b<bl;b++){ for(int i=0;i<n;i++) v[i]=t[b*n+i]-'A'; P(inv,v,r,n,M26); for(int i=0;i<n;i++) out.push_back(char(r[i]+'A')); }
            cout<<"Văn bản gốc: "<<out<<"\n";
        }
    }
    return 0;
}

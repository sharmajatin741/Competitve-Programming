// 72 72 72 72 72 72 72 72 72 72 72
#include <bits/stdc++.h> 
 
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
using namespace std;
 
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef double ld;
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e17;                                                                                                  
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
////freopen("input.txt", "r", stdin);
ll n,m;
cin>>n>>m;
ll b[n][m],a[n][m];
forn(i,n) forn(j,m) a[i][j]=2;
forn(i,n) forn(j,m) cin>>b[i][j];
forn(i,n)
{
    forn(j,m)
    {
        if(b[i][j]==0)
        {
            forn(k,m){
                if(a[i][k]==1){
                  cout<<"NO"; return 0;
                }
                else a[i][k]=0;
            }
            forn(k,n){
                if(a[k][j]==1){
                  cout<<"NO"; return 0;
                }
                else a[k][j]=0;
            }
        }
    }
}
forn(i,n)
{
    forn(j,m)
    {
        if(b[i][j]==1)
        {
            ll f=0;
            forn(k,m)
            {
               //cout<<a[i][k]<<" ";
              if(a[i][k]==2||a[i][k]==1)
              {
                //cout<<"8";
                f=1;
                break;
              }  
            }
            if(f==0)
            {
                 forn(k,n)
                 {
                    if(a[k][j]==2||a[k][j]==1)
                    {
                        f=1;
                        break;
                    }
                 }
                 if(f==0)
                 {
                    cout<<"NO";
                    return 0;
                 }
                 else forn(k,n)
                 {
                    if(a[k][j]==2)
                    {
                        a[k][j]=1;
                        break;
                    }
                 }
            }
            else{
                forn(k,m)
                {
                    if(a[i][k]==2)
                    {
                        a[i][k]=1;break;
                    }
                }
            }
        }
    }
}
cout<<"YES\n";
forn(i,n) {
    forn(j,m)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;    
}

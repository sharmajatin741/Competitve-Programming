/* nothing is impossible */
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
const ll MOD = 1e6 + 3 ;
const ll INF=1e14;                                                                                                  
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll n,m;
cin>>n>>m;
ll c[n+1];
forn(i,n+1) c[i]=-1;
forn(i,m)
{
   ll x,y,z;
   cin>>x>>y>>z;
   if(i==0||(c[x]==-1)&&(c[y]==-1)&&(c[z]==-1))
   {
      c[x]=1; c[y]=2; c[z]=3;
   }
   else {
    if(c[x]!=-1)
    {
       if(c[x]==2) c[y]=1,c[z]=3;
       if(c[x]==1) c[y]=2,c[z]=3;
       if(c[x]==3) c[y]=1,c[z]=2;       
    }
    else if(c[y]!=-1)
    {
       if(c[y]==2) c[x]=1,c[z]=3;
       if(c[y]==1) c[x]=2,c[z]=3;
       if(c[y]==3) c[x]=1,c[z]=2;  
    }
    else if(c[z]!=-1)
    {
       if(c[z]==2) c[y]=1,c[x]=3;
       if(c[z]==1) c[y]=2,c[x]=3;
       if(c[z]==3) c[y]=1,c[x]=2;  
    }
   }
}
for1(i,n) cout<<c[i]<<" ";
return 0;
}

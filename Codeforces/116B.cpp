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
ll n,m;
char a[12][12];
bool check(ll i,ll j)
{
    ///cout<<n<<" "<<m<<"\n";
   // cout<<i<<" "<<j<<"\n";
    if(i>=0&&i<n&&j>=0&&j<m)
    {
        return true;
    }
    return false;
}
pii getp(ll i,ll j)
{
    ///cout<<i<<" "<<j<<"\n";
   if(check(i+1,j))
   {
       if(a[i+1][j]=='P') return {i+1,j};
   }
   if(check(i-1,j))
   {
       if(a[i-1][j]=='P') return {i-1,j};
   }
   if(check(i,j+1))
   { 
       if(a[i][j+1]=='P') return {i,j+1};
   }
   if(check(i,j-1))
   {
       if(a[i][j-1]=='P') return {i,j-1};
   }
   return {-1,-1};
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
cin>>n>>m;
forn(i,n) forn(j,m) cin>>a[i][j];
ll ans=0; 
forn(i,n)
{
    forn(j,m)
    {
        if(a[i][j]=='W')
        {
           pii t=getp(i,j);
          // cout<<t.fi<<" "<<t.se;
           if(t.fi!=-1&&t.se!=-1)
            ans++;
        }
    }
}
cout<<ans;
return 0;    
}

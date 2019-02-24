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
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll n;
cin>>n;
map<ll,vi> m;
ll a[n];
forn(i,n)
{
    cin>>a[i];
    m[a[i]].pb(i);
}
for(auto x:m)
sort(all(x.se));
vector<pii> ans;
for(auto x:m)
{
    //cout<<x.fi<<"\n";
   vi o=x.se;
   ll prev;
   ll d=0;
   ll k=1;
   ll f=1;
   for(auto c:o)
   {
     if(k==1)
     {
        prev=c;
     } 
     else if(k==2)
     {
       d=c-prev;
       prev=c;
     }
     else {
       if(c-prev!=d) {
        //cout<<c<<"\\";
        f=0;
        break;
       }
       else prev=c;
     }
     k++;
   }
   if(f==1) ans.pb({x.fi,d});
}
cout<<ans.size()<<"\n";
for(auto c:ans) cout<<c.fi<<" "<<c.se<<"\n";
return 0;    
}

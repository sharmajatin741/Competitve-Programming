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
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;                                                                                                  
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll n;
cin>>n;
bool f=true;
ll pw,ph,w,h;
ll ch=-1;
forn(i,n)
{
   if(i==0)
   {
     cin>>pw>>ph;
   }
   else if(i==1)
   {
     cin>>w>>h;
     ll maxi=-1e4;
     if(w<=pw||w<=ph)
     {
        maxi=max(maxi,w);
     }
     if(h<=pw||h<=ph)
     {
        maxi=max(maxi,h);
     }
     ch=maxi;
     if(maxi==-1e4)
     {
        f=false;
        break;
     }
   }
   else{
    cin>>w>>h;
    ll maxi=-1e4;
    if(w<=ch)
    {
       maxi=max(maxi,w);
    }
    if(h<=ch)
    {
        maxi=max(maxi,h);
    }
    if(maxi==-1e4)
    {
        f=false;
        break;
    }
    ch=maxi;
   }
}
if(f)
{
    cout<<"YES";
}
else cout<<"NO";
return 0;
}

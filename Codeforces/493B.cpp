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
///freopen("input.txt", "r", stdin);
ll n;
cin>>n;
vi a,b;
ll s1=0,s2=0;
ll t;
while(n--)
{
    ll x;
    cin>>x;
    t=x;
    if(x>0) a.pb(x),s1+=x;
    else b.pb(abs(x)),s2+=abs(x);
}
if(s1>s2)
{
    cout<<"first";
}
else if(s2>s1) cout<<"second";
else {
    if(a<b)
    {  
        cout<<"second";
    }
    else if(a>b) {
       cout<<"first";
    }
    else {
        if(t>0) 
            cout<<"first";
        else cout<<"second";
    }
}
return 0;    
}
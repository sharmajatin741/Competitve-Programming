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
ll expm(ll a,ll b,ll m)
{
   a%=m;
   ll ans=1;
   while(b>0)
   {
    if(b&1) ans=(ans*a)%m;
    b=b>>1;
    a=(a*a)%m;
   }
   return ans;
}
int main()
{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
//cout<<expm(2,414144141415,1000000007);
ll n,k;
ll m=10000007;
while(1)
{
    cin>>n>>k;
    if(n==0&&k==0)
        break;
    ll ans=((2*(expm(n-1,k,m))%m)+(2*(expm(n-1,n-1,m))%m)+(expm(n,k,m)%m)+(expm(n,n,m)%m))%m;
    cout<<ans<<"\n";
}
return 0;
}       
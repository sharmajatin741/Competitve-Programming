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
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e17;
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}
ll a[101];
ll dp[101][3];
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll n;
cin>>n;
for1(i,n)
{
	cin>>a[i];
}
forn(i,101)
 forn(j,3)
  dp[i][j]=INF;
  dp[0][0]=0;
for1(i,n)
{
	dp[i][0]=1+min(min(dp[i-1][1],dp[i-1][2]),dp[i-1][0]);
   if(a[i]==0)
   {
     continue;
   }
   else if(a[i]==1)
   {
     dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
   }
   else if(a[i]==2)
   {
      dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
   }
   else {
        dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
        }
}
cout<<min(min(dp[n][0],dp[n][1]),dp[n][2]);
return 0;
}

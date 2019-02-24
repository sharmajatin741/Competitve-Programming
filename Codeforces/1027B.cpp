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
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//  freopen("input.txt", "r", stdin);
  ll n,q;
  cin>>n>>q;
  ll o=n;
  o=o*o;
  ll u;
  if(o%2==0)
  {
    u=o/2;
  }
  else u=o/2+1;
  while(q--)
  {
    ll x,y;
    cin>>x>>y;
    if((x+y)%2==0)
    {
      ll r=(x-1)/2;
      ll k;
      if((x-1)&1)
      {
        if(n&1)
        {
           k=r*(n/2);
           k+=(x-1-r)*(n/2+1);
        }
        else{
           k=(x-1)*(n/2);
        }
      }
      else{
        if(n&1)
        {
           k=r*(n/2)+r*(n/2+1);
        }
        else{
           k=(x-1)*(n/2);
        }
      }
      if(n&1)
      {
        if(x&1)
        {
           k+=(y+1)/2;
        }
        else{
          k+=(y+1)/2;
        }
      }
      else{
        k+=(y+1)/2;
      }
      cout<<k<<"\n";
    }
    else{
      ll r=(x-1)/2;
      ll k;
      if((x-1)&1)
      {
        if(n&1)
        {
           k=r*(n/2+1);
           k+=(x-1-r)*(n/2);
        }
        else{
           k=(x-1)*(n/2);
        }
      }
      else{
        if(n&1)
        {
           k=r*(n/2)+r*(n/2+1);
        }
        else{
           k=(x-1)*(n/2);
        }
      }
      if(n&1)
      {
        if(x&1)
        {
           k+=(y+1)/2;
        }
        else{
          k+=(y+1)/2;
        }
      }
      else{
        k+=(y+1)/2;
      }
      cout<<k+u<<"\n";
    }
  }
  return 0;
}

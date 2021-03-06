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
typedef long double ld;
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;                                                                                           
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
const ll N=100005;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //freopen("input.txt", "r", stdin);
  ll n;
  cin>>n;
  ll a[n],b[n];
  forn(i,n) cin>>a[i];
  forn(i,n) cin>>b[i];
  sort(a,a+n);
  sort(b,b+n);
  ll ptr1=n-1,ptr2=n-1;
  ll cnt=0;
  ll ans1=0;
  ll ans2=0;
  while(ptr1>=0||ptr2>=0)
  {
    if(ptr1==-1&&ptr2>=0)
    {
      if(cnt&1)
      {
        ans2+=b[ptr2];
        ptr2--; 
      }
      else{
        ptr2--;
      }
    }
    else
    if(ptr2==-1&&ptr1>=0)
    {
       if(cnt&1)
       {
          ptr1--;
       }
       else{
         ans1+=a[ptr1];
         ptr1--;
       }
    }
    else
    if(cnt&1)
    {
       if(a[ptr1]>=b[ptr2])
       {
         ptr1--;
       }
       else{
        ans2+=b[ptr2];
        ptr2--;
       }
    }
    else{
      if(a[ptr1]<=b[ptr2])
      {
         ptr2--;
      }
      else{
         ans1+=a[ptr1];
         ptr1--;
      }
    }
    cnt++;
  }
  cout<<ans1-ans2;
  return 0;
}

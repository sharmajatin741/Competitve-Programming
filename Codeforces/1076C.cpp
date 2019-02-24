#include <bits/stdc++.h> 
 
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define fi first
#define se second
#define ff first
#define ss second
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
const ll N=5*100002;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  cout<<fixed<<setprecision(9);
  ll t;
  cin>>t;
  while(t--)
  {
    ll d;
    cin>>d;
    if(d*d-4*d<0)
    {
      cout<<"N\n";
    }
    else{
      long double r=d*d-4*d;
      r=sqrt(r);
      long double a1=d+r;
      a1/=2.000000000;
      long double a2=d-r;
      a2/=2.000000000;
      long double b1=d-a1;
      long double b2=d-a2;
      if(a1>=0&&b1>=0)
      {
        cout<<"Y "<<a1<<" "<<b1<<"\n";
      }
      else if(a2>=0&&b2>=0)
      {
        cout<<"Y "<<a2<<" "<<b2<<"\n";
      }
      else cout<<"N\n";
    }
  }
}
//nothing is impossible

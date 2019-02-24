/* nothing is impossible */
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
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll q;
  cin>>q;
  map<ll,ll>ma;
  map<ll,char> mac;
  ll dl[q+1]={0},dr[q+1]={0};
  ll cntl=0,cntr=0;
  ll o=0;
  for1(j,q)
  {
    char c;
    ll v;
    cin>>c;
    cin>>v;
    if(c=='L')
    {
      o++;
      ma[v]=o;
      mac[v]='L';
      cntl++;
      dl[o]=cntl;
      dr[o]=cntr;
    }
    else if(c=='R'){
      o++;
      ma[v]=o;
      mac[v]='R';
      cntr++;
      dr[o]=cntr;
      dl[o]=cntl;
    }
   else{
    if(mac[v]=='L')
    {
      //cout<<dl[o]-dl[ma[v]]<<" "<<ma[v]-1+dr[o]-dr[ma[v]]<<"\n";
      cout<<min(dl[o]-dl[ma[v]],ma[v]-1+dr[o]-dr[ma[v]])<<"\n";
    }
    else{
    //  cout<<v<<"\n";
      //cout<<dl[o]-dl[ma[v]]+ma[v]-1<<" "<<dr[o]-dr[ma[v]]<<"\n";
      cout<<min(dl[o]-dl[ma[v]]+ma[v]-1,dr[o]-dr[ma[v]])<<"\n";
    }
   }
  }
  return 0;   
}

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
const ll N=500005;
vector<ll> prefix_function(string s) {
    ll n = (ll)s.length();
    vector<ll> pi(n);
    for (ll i = 1; i < n; i++) {
        ll j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  st s;
  cin>>s;
  ll n=s.length();
  vi p=prefix_function(s);
  if(p[n-1]==0)
  {
    cout<<"Just a legend";
  }
  else{
    bool f=false;
    for(ll i=1;i<n-1;i++)
    {
      if(p[i]==p[n-1])
      {
        f=true;
        break;
      }
    }
    if(f)
     {
        forn(i,p[n-1])
        {
          cout<<s[i];
        } 
     }
     else{
       if(p[p[n-1]-1]==0)
       {
        cout<<"Just a legend";
       }
       else{
        forn(i,p[p[n-1]-1])
        {
          cout<<s[i];
        }
       }
     }
  }
} 
//nothing is impossible

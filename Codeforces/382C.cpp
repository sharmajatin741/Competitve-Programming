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
 // freopen("input.txt", "r", stdin);
  ll n;
  cin>>n;
  ll a[n];
  forn(i,n) cin>>a[i];
  sort(a,a+n);
  if(n==1){
    cout<<"-1";
    return 0;
  }
  else if(n==2)
  {
    ll d=a[1]-a[0];
    if(d==0)
    {
      cout<<"1\n"<<a[1];
      return 0;
    }
    if(d%2==0)
    {
       cout<<"3\n";
       cout<<a[0]-d<<" "<<a[0]+d/2<<" "<<a[1]+d;
    }
    else{
     cout<<"2\n";
     cout<<a[0]-d<<" "<<a[1]+d;
    }
  }
  else{ 
       ll d=a[1]-a[0];
       ll cnt=0,pos;
       ll cnt1=0,pos1;
       ll d1=a[n-1]-a[n-2];
       for(ll i=0;i<n-1;i++)
       {
        if(a[i+1]-a[i]!=d)
        {
          cnt++;
          pos=i;
        }
        if(a[i+1]-a[i]!=d1)
          cnt1++,pos1=i;
       }      
       if(cnt>1&&cnt1>1)
        {
          cout<<0;
          return 0;
        }
        if(cnt==1||cnt1==1)
        {
        if(cnt==1)
        {
          if(a[pos+1]-a[pos]==2*d)
          {
            cout<<"1\n"<<a[pos]+d;
           return 0;
          }
        }
        if(cnt1==1)
        {
          if(a[pos1+1]-a[pos1]==2*d1)
          {
            cout<<"1\n"<<a[pos1]+d1;
            return 0;
          }
        }
        cout<<"0";
        return 0;
       }
       if(d==0)
       {
        cout<<"1\n"<<a[1];
        return 0;
       }
       cout<<"2\n";
       cout<<a[0]-d<<" "<<a[n-1]+d; 
      }
  return 0;
}

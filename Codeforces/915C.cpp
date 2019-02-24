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
st ans;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  st a,b;
  cin>>a>>b;
  if(b.length()>a.length())
  {
    sort(rall(a));
    cout<<a;
  }  
  else{
        st cur="";
        ll ch[26]={0};
        for(auto x:a) ch[x-'0']++;
        forn(i,b.length())
        {
          for(ll j=(b[i]-'0'-1);j>=0;j--)
          {
            if(ch[j])
            {
              st temp=cur+char('0'+j);
              ch[j]--;
              ford(o,10)
              {
                forn(p,ch[o]) temp+=char('0'+o);
              }      
              ans=max(ans,temp);
              ch[j]++;
            }
          }
          if(ch[b[i]-'0'])
          {
            cur+=b[i];
            ch[b[i]-'0']--;
            if(cur.length()==b.length()&&cur<=b)
            {
              ans=max(ans,cur);
            }
          }
          else break;
        }
        cout<<ans;
  }
}
//ALL LOSSES IN THIS WORLD ARE DUE TO A LACK OF ABILITY. IF YOU WANT TO CURSE SOMETHING, CURSE YOUR OWN WEAKNESS
//nothing is impossible

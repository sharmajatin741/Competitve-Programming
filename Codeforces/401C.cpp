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
const ll MOD = 1e6 + 3 ;
const ll INF=1e14;                                                                                                  
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll a,b;
cin>>a>>b;
string ans;
ll o=b-a;
if(o<0)
{
    if(o==-1)
    {
      ans.pb('0');
      forn(i,b) {
        ans.pb('1');
        ans.pb('0');
      }
      cout<<ans;
      return 0;
    }
    else{
     cout<<"-1";
     return 0;
    }
}
for(ll i=0;i<a;i++)
{
   if(o>0){
    o--;
    ans.pb('1');
   }
   ans.pb('1');
   ans.pb('0');
}
if(o==1)
{
   ans.pb('1');
}
else if(o==2)
{
   ans.pb('1');
   ans.pb('1'); 
}
else if(o>2)
{
    cout<<"-1";
    return 0;
}
cout<<ans;
return 0;
}

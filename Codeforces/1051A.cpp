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
const ll N=1000006;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll t;
  cin>>t;
  while(t--)
  {
    st s;
    cin>>s;
    ll cnt1=0,cnt2=0,cnt3=0;
    forn(i,s.length())
    {
      if(isalpha(s[i])&&islower(s[i])) cnt1++;
      else if(isalpha(s[i])&&isupper(s[i])) cnt2++;
      else cnt3++;
    }
    if(cnt1>0&&cnt2>0&&cnt3>0)
    {
      cout<<s<<"\n";
    }
    else{
      if(cnt1==0&&cnt2>0&&cnt3>0)
      {
        if(cnt2>1)
        forn(i,s.length())
        {
          if(isalpha(s[i])&&isupper(s[i]))
          {
            s[i]=tolower(s[i]);
            break;
          }
        }
        else{
        forn(i,s.length())
        {
          if(s[i]>='0'&&s[i]<='9')
          {
            s[i]='a';
            break;
          }
        } 
        }
      }
      else 
      if(cnt2==0&&cnt1>0&&cnt3>0)
      {
        if(cnt1>1)
        forn(i,s.length())
        {
          if(isalpha(s[i])&&islower(s[i]))
          {
            s[i]=toupper(s[i]);
            break;
          }
        }
        else{
        forn(i,s.length())
        {
          if(s[i]>='0'&&s[i]<='9')
          {
            s[i]='A';
            break;
          }
        } 
        }  
      }
      else
      if(cnt3==0&&cnt1>0&&cnt2>0)
      {
        if(cnt2>1)
        forn(i,s.length())
        {
          if(isalpha(s[i])&&isupper(s[i]))
          {
            s[i]='1';
            break;
          }
        }
        else{
        forn(i,s.length())
        {
          if(isalpha(s[i])&&islower(s[i]))
          {
            s[i]='1';
            break;
          }
        } 
        }
      }
      else 
      if(cnt1==0&&cnt2==0&&cnt3>0)
      {
        s[0]='a';
        s[1]='A';
      }
      else  
      if(cnt1==0&&cnt2>0&&cnt3==0)
      {
        s[0]='a';
        s[1]='1';
      }
      else
      if(cnt1>0&&cnt2==0&&cnt3==0)
      {
        s[0]='A';
        s[1]='1';
      }
     cout<<s<<"\n"; 
    }
  }
  return 0;
}

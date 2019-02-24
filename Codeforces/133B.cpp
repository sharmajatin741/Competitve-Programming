// 72 72 72 72 72 72 72 72 72 72 72
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
const ll INF=1e17;                                                                                                  
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
st s;
cin>>s;
st ans;
ans='0';
forn(i,s.length())
{
    if(s[i]=='>') ans=ans+"1000";
    if(s[i]=='<') ans=ans+"1001";
    if(s[i]=='+') ans=ans+"1010";
    if(s[i]=='-') ans=ans+"1011";
    if(s[i]=='.') ans=ans+"1100";
    if(s[i]==',') ans=ans+"1101";
    if(s[i]=='[') ans=ans+"1110";
    if(s[i]==']') ans=ans+"1111";
}
ll res=0;
ll k=0;
for(ll i=ans.size()-1;i>=0;i--)
{
    ///cout<<"*";
    res+=mpow(2,k)*(ans[i]-'0');
    res=res%MOD;
    k++;
}
cout<<res%MOD;
return 0;    
}

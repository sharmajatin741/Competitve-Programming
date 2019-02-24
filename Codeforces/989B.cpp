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
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll f=0;
for(ll i=0;i<n-k;i++)
{
    if(s[i]!=s[i+k]||(s[i]=='.'&&s[i+k]=='.'))
    {
       f=1; 
    }
}
if(f==0)
{
    cout<<"No";
    return 0;
}
for(ll i=0;i<n-k;i++)
{
    if(s[i]=='1')
    {
        if(s[i+k]=='.')
        {
            s[i+k]='0';
        }
    }
    else if(s[i]=='0')
    {
        if(s[i+k]=='.')
            s[i+k]='1';
    }
   else if(s[i]=='.')
   {
    if(s[i+k]=='1')
    {
        s[i]='0';
    }
    else if(s[i+k]=='0')
        s[i]='1';
    else {
        s[i]='1';
        s[i+k]='0';
    }
   }
}
for(ll i=0;i<n;i++)
{
    if(s[i]=='.')
    {
        s[i]='1';
    }
}
cout<<s;
return 0;
}

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
ll n;
cin>>n;
if(n>0)
{
    cout<<n;
}
else {
    //ll a,b;
    n=-1*n;
    string s=to_string(n);
    ll len=s.length();
    //cout<<s;
    ll a=0,b=0;
    for(ll i=0;i<=len-3;i++)
    {
        a=a*10+s[i]-'0';
        b=b*10+s[i]-'0';
    }
    a=a*10+s[len-2]-'0';
    b=b*10+s[len-1]-'0';
    a*=-1;
    b*=-1;
    cout<<max(a,b);
}
return 0;
}

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
string s;
cin>>s;
ll l=0,u=0;
for(ll i=0;s[i];i++)
{
    if(islower(s[i])) l++;
    else u++;
}
if(u<=l)
{
    for(ll i=0;s[i];i++)
    {
        s[i]=tolower(s[i]);
    }
}
else {
    for(ll i=0;s[i];i++)
    {
        s[i]=toupper(s[i]);
    }
}
cout<<s;
return 0;
}

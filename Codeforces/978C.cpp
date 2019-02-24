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
ll n,m;
cin>>n>>m;
ll a[n];
vi s(n);
forn(i,n)
{
    cin>>a[i];
    s[i]=(i==0)?a[i]:a[i]+s[i-1];
}
//forn(i,n) cout<<s[i]<<" ";
while(m--)
{
    ll x;
    cin>>x;
    ll k=lower_bound(s.begin(),s.end(),x)-s.begin();
    cout<<k+1<<" "<<x-(k==0?0:s[k-1])<<"\n";
}
return 0;
}

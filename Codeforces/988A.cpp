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
ll n,k;
cin>>n>>k;
vector<pair<ll,ll>> a;
ll b[1000]={0};
ll count=0;
forn(i,n) {
    
    ll x;
    cin>>x;
    if(b[x]==0)
    {count++;
     a.pb(mp(x,i));
     b[x]=1;
    }
}
if(count>=k)
{
    cout<<"YES\n";
    ll counti=0;
    for(auto x:a)
    {
        if(counti==k)
        break;
        cout<<x.second+1<<" ";
        counti++;
    }
}
else {
    cout<<"NO";
}
return 0;
}

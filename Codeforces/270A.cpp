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
//ll pos[10000]={0};
ll angle[181]={0};
ll j=1;
forn(i,10000)
{
    if(i>=3)
    {
        if((j*180)%i==0)
       angle[(j*180)/i]=1;
    j++;
    }
}
ll t;
cin>>t;
while(t--)
{
    ll a;
    cin>>a;
    //for(ll i=3;i<)
    cout<<(angle[a]?"YES\n":"NO\n");
}
return 0;
}

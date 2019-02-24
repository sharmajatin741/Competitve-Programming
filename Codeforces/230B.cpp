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
#define max 10000001
ll prime[max];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
forn(i,max)
{
    prime[i]=1;
}
prime[1]=0;
for(ll i=2;i*i<max;i++)
{
    if(prime[i]==1)
    {
        for(ll j=2;j*i<max;j++)
        prime[i*j]=0;
    }
}
ll n;
cin>>n;
while(n--)
{
    ll x;
    cin>>x;
    long double s=sqrt((long double)x);
    if(s-floor(s)==0)
    {
        if(prime[(ll)s]==1)
        {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    else {
        cout<<"NO\n";
    }
}
return 0;
}

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
ll r1[n-1];
forn(i,n-1)
{
    ll x;
    cin>>x;
    if(i==0)
    r1[i]=x;
    else {
        r1[i]=x+r1[i-1];
    }
}
//forn(i,n-1)
//cout<<r1[i];
ll a[n-1];
ll r2[n-1];
for(ll i=0;i<n-1;i++)
{
    cin>>a[i];
}
for(ll i=n-2;i>=0;i--)
{
    if(i==n-2)
    r2[i]=a[i];
    else {
        r2[i]=r2[i+1]+a[i];
    }
}
//forn(i,n-1)
//cout<<r2[i]<<" ";
ll s[n];
for(ll i=0;i<n;i++)
{
    ll x;
    cin>>x;
    if(i==0)
    {
        s[i]=x+r2[0];
       // cout<<s[i];
    }
    else
    if(i==n-1)
    {
        s[i]=x+r1[n-2];
       // cout<<s[i];
    }
    else {
        s[i]=x+r1[i-1]+r2[i];
    }
   // cout<<s[i]<<" ";
}
sort(s,s+n);
cout<<s[0]+s[1];
return 0;
}

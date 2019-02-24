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
ll a[n];
ll o=0,e=0;
forn(i,n) {
    cin>>a[i];
    if(a[i]&1) o++;
    else e++;
}
if(o<e)
{
    forn(i,n)
    {
        if(a[i]&1){
            cout<<i+1;
            exit(0);
        }
    }
}
else {
    forn(i,n)
    {
        if(a[i]%2==0)
        {
            cout<<i+1;
            exit(0);
        }
    }
}
return 0;
}

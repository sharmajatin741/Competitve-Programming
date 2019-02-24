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
ll n;
cin>>n;
ll a[n];
forn(i,n) cin>>a[i];
ll found=0;
ll count=0;
ll con=0;
ll gap=0;
forn(i,n){
    if(a[i]==1)
    {
        found=1;
        count++;
        if(gap==1)
        {
           count++; 
        }
        gap=0;
    }
    else 
    if(a[i]==0&&found==0)
    {
        continue;
    }
    else {
           gap++; 
    }
    
}
cout<<count;
cin.tie(NULL);
return 0;
}

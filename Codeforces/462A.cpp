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
char a[n][n];
forn(i,n) forn(j,n) cin>>a[i][j];
ll found=1;
forn(i,n)
{
    forn(j,n)
    {
        ll count=0;
        if(a[i-1][j]=='o'&&(i-1)>=0&&(i-1)<n)
        {
           count++; 
        }
        if(a[i+1][j]=='o'&&(i+1)>=0&&(i+1)<n)
        {
           count++; 
        }
        if(a[i][j-1]=='o'&&(j-1)>=0&&(j-1)<n)
        {
           count++; 
        }
        if(a[i][j+1]=='o'&&(j+1)>=0&&(j+1)<n)
        {
           count++; 
        }
        if(count%2!=0)
        {
            found=0;
            break;
        }
        
    }
    if(found==0)
    break;
}
if(found==1)
{
    cout<<"YES\n";
}
else cout<<"NO";
return 0;
}

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
char a[n][m];
forn(i,n) forn(j,m) a[i][j]='.'; 
ll freq=0;
forn(i,n)
{
    if(i&1)
    {
        //cout<<"&";
        if(freq==0)
        {
            a[i][m-1]='#';
            freq=1;
        }
        else {
            a[i][0]='#';
            freq=0;
        }
    }
    
    for(ll j=0;j<m;j++)
    {
        if(i%2==0)
        {
            a[i][j]='#';
        }
    }
}
forn(i,n)
{
    for(ll j=0;j<m;j++)
    cout<<a[i][j];
    cout<<"\n";
}
return 0;
}

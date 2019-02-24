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
forn(i,n) forn(j,m) cin>>a[i][j];
ll row=0,col=0;
forn(i,n)
{
    ll found=1;
    forn(j,m)
    {
        if(a[i][j]=='S')
        {
            found=0;
            break;
        }
    }
    if(found) row++;
}
forn(i,m)
{
    ll found=1;
    forn(j,n)
    {
        if(a[j][i]=='S')
        {
            found=0;
            break;
        }
    }
    if(found) col++;
}
//cout<<row<<col;
/*if(row==n||col==m)
{
    
}*/
cout<<row*m+col*n-row*col;
return 0;
}

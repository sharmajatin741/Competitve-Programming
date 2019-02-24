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
//vector<vector<char>> ans(50,vector<char>(50));
char ans[50][50];
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll a,b,c,d;
cin>>a>>b>>c>>d;
//ans[0][0]='A';
//char ans[50][50];
forn(i,25) forn(j,25) ans[i][j]='A';
forn(i,25){
    for(ll j=25;j<50;j++)
        ans[i][j]='B';
}
for(ll i=25;i<50;i++)
{
    for(ll j=0;j<25;j++)
        ans[i][j]='C';
}
for(ll i=25;i<50;i++)
{
    for(ll j=25;j<50;j++)
    {
        ans[i][j]='D';
    }
}
a--;
b--;
c--;
d--;
for(ll i=0;d&&(i<25);i+=2)
{
    for(ll j=0;(j<25)&&d;j+=2)
    {
        ans[i][j]='D';
        d--;
    }
}
for(ll i=0;c&&(i<25);i+=2)
{
    for(ll j=25;(j<50)&&c;j+=2)
    {
        ans[i][j]='C';
        c--;
    }
}
for(ll i=25;b&&(i<50);i+=2)
{
    for(ll j=0;(j<25)&&b;j+=2)
    {
        ans[i][j]='B';
        b--;
    }
}
for(ll i=25;a&&(i<50);i+=2)
{
    for(ll j=25;(j<50)&&a;j+=2)
    {
        ans[i][j]='A';
        a--;
    }
}
cout<<"50 50\n";
forn(i,50){
    forn(j,50)
    {
        cout<<ans[i][j];
    }
    cout<<"\n";
}
//char r=ans[0][0];
//cout<<r;
return 0;
}

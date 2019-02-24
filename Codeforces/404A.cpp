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
vector<vi> a(100002);
ll vis[100002];
ll d;
void dfs(ll node)
{
	if(vis[node])
		return;
	vis[node]=1;
	for(auto c:a[node])
	{
		//d++;
		//cout<<"*";
		if(vis[c]==0)
			d++;
		dfs(c);
	}
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll n;
cin>>n;
char a[n][n];
forn(i,n) forn(j,n) cin>>a[i][j];
char s=a[0][0];
forn(i,n)
{
	forn(j,n)
	{
		if(i==j)
		{
		if(a[i][j]!=s)
		{
			cout<<"NO";
			exit(0);
		}
	    }
	}
}
forn(i,n)
{
	forn(j,n)
	{
		if((i+j)==(n-1))
		{
			if(a[i][j]!=s)
			{
				cout<<"NO";
				exit(0);
			}
		}
	}
}
char s1=a[0][1];
if(s==s1)
{
	cout<<"NO";
	exit(0);
}
forn(i,n)
{
	forn(j,n)
	{
		if((i!=j)&&((i+j)!=(n-1)))
		{
			if(a[i][j]!=s1)
			{
				cout<<"NO";
				exit(0);
			}
		}
	}
}
cout<<"YES";
return 0;
}

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
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll white=0;
ll black=0;
map<char,ll> w;
w['q']=9;
w['r']=5;
w['b']=3;
w['n']=3;
w['p']=1;
w['k']=0;
char a[8][8];
forn(i,8) forn(j,8) cin>>a[i][j];
forn(i,8)
{
	forn(j,8)
	{
		if(isupper(a[i][j]))
		{
			white+=w[tolower(a[i][j])];
		}
		else if(islower(a[i][j]))
		{
			black+=w[a[i][j]];
		}
	}
}
if(white>black) cout<<"White\n";
else if(black>white) cout<<"Black\n";
else cout<<"Draw";
return 0;
}

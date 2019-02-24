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
ll a,b,c;
cin>>a>>b>>c;
if(b<a&&c>0)
{
	cout<<"NO";
	return 0;
}
if(b>a&&c<0)
{
   cout<<"NO";
   return 0;
}
if(c==0)
{
	if(b==a)
		cout<<"YES";
	else cout<<"NO";
}
else 
cout<<((b-a)%c==0?("YES"):("NO"));
return 0;
}

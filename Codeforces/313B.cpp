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
string s;
cin>>s;
ll q;
cin>>q;
ll n=s.length();
ll ans[n];
ll d=0;
forn(i,n)
{
     //ans[i]=d;
     if(s[i]==s[i-1]&&i>0)
     	d++;
     ans[i]=d;
}
while(q--)
{
	ll l,r;
	cin>>l>>r;
	l--;
	r--;
	cout<<ans[r]-ans[l]<<"\n";
}
return 0;
}

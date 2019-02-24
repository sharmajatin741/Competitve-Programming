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
ll n,k;
vector<pair<ll,pair<ll,ll>>> a;
cin>>n>>k;
ll p[n];
ll co[n];
forn(i,n)
{
	ll x;
	cin>>x;
	p[i]=x;
}
forn(i,n)
{
	ll x;
	cin>>x;
	co[i]=x;
}
forn(i,n)
{
	a.pb({p[i],{co[i],i}});
}
//cout<<p[0];
sort(all(a));
vector<ll> m;
vector<pair<ll,ll>> ans;
for(auto c: a)
{
	//cout<<c.fi<<" ";
	ll count=c.se.fi;
	for(auto c: m)
     	{
     		count+=c;
     	}
     	if(m.size()==k)
     {
     	
      ll min=INT_MAX;
      ll pos;
      for(ll j=0;j<m.size();j++)
      {
      	if(m[j]<min)
      	{
          pos=j;
          min=m[j];
      	}
      }
      if(c.se.fi>min)
      {
      	m[pos]=c.se.fi;
      }
      
    }
    else
     {
     	
     	m.pb(c.se.fi);
     }
    ans.pb({c.se.se,count});
    
}
sort(all(ans));
for(auto c: ans)
cout<<c.se<<" ";
return 0;
}

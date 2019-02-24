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
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e17;																									
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
ll h,w;
char a[51][51];
bool vis[51][51];
ll dis[51][51];
ll direc[8][2]={0,-1,-1,0,0,1,1,0,-1,-1,1,1,-1,1,1,-1};
bool check(ll i,ll j)
{
	if(i>=0&&i<h&&j>=0&&j<w)
	{
		return true;
	}
	return false;
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
ll test=0;
while(cin>>h>>w)
{
	if(h==0&&w==0)
	{
		return 0;
	}
	test++;
	forn(i,51) forn(j,51) vis[i][j]=false,dis[i][j]=0;
    forn(i,h) forn(j,w) cin>>a[i][j];
    vector<pair<ll,ll>> y;
    forn(i,h) forn(j,w) if(a[i][j]=='A') y.pb({i,j});
    ll ans=-1e8;
    //ll m=0;
    for(auto c:y)
    {
    	//cout<<c.fi<<" "<<c.se;
     forn(i,51) forn(j,51) vis[i][j]=false,dis[i][j]=0;
     pii t=c;
     queue<pair<pair<ll,ll>,char>>q;
     q.push({t,'A'});
     dis[t.fi][t.se]=0;
     while(q.size())
      { pii curr=q.front().fi;
        char color=q.front().se;
        q.pop();
        if(vis[curr.fi][curr.se]==true)
        	continue;
        vis[curr.fi][curr.se]=true; 
        ll curri=curr.fi;
        ll currj=curr.se;
        char target=color+1;
        //cout<<target<<" ";
        forn(k,8)
        {
        	/*if(k==0&&check(curri+direc[k][0],currj+direc[k][1])&&target=='D')
        	{
        		cout<<a[curri+direc[k][0]][currj+direc[k][1]]<<" ";
        	}*/

        	if(check(curri+direc[k][0],currj+direc[k][1])&&a[curri+direc[k][0]][currj+direc[k][1]]==target&&(vis[curri+direc[k][0]][currj+direc[k][1]]==false))
        	{
        		   //cout<<curri+direc[k][0]<<" "<<currj+direc[k][1]<<target<<"\n";

        		dis[curri+direc[k][0]][currj+direc[k][1]]=dis[curri][currj]+1;
        		q.push({{curri+direc[k][0],currj+direc[k][1]},target});
        	}
        }
        //m++;
      }
      ll maxi=-1e8;
      //cout<<dis[0][1];
      forn(i,51) forn(j,51) maxi=max(maxi,dis[i][j]);
      ans=max(maxi,ans);
    }
    cout<<"Case "<<test<<": "<<(ans==-1e8?0:(ans+1))<<"\n";
}

return 0;
}       

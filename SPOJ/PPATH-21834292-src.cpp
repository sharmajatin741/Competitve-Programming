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
ll prime[10005];
bool vis[10005];
ll dis[10005];
int main()
{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
forn(i,10005) prime[i]=1;
for(ll i=2;i*i<10005;i++)
{
    if(prime[i])
    {
        for(ll j=2;j*i<10005;j++)
            prime[j*i]=0;
    }
}
ll t;
cin>>t;
while(t--)
{
   // vis.clear();
 //   dis.clear();
 for(ll i=0;i<10005;i++)
 {
     vis[i]=0;
     dis[i]=0;
 }
    ll s,e;
    cin>>s>>e;
    string s1,s2;
    s1=to_string(s);
    s2=to_string(e);
    queue<string> qu;
    qu.push(s1);
    dis[s]=0;
    //cout<<dis[1033];
    vis[s]=1;
    //cout<<s1;
    while(qu.size())
    {
        string curr=qu.front();
        qu.pop();
       /*if(vis.count(curr))
            continue;*/
        ll curri;
        curri=atoi(curr.c_str());
        //cout<<curri<<" ";
        //vis[curri]=1;
        for(ll i=0;i<4;i++)
        {
            if(i==0)
            {
                for(ll j=1;j<=9;j++)
                {
                    //if(j!=(curr[i]-'0'))
                //   {
                       string x=curr;
                       x[i]=j+'0';
                        ll k=atoi(x.c_str());
                        if(prime[k])
                        {
                            if(!vis[k])
                            {
                         //       cout<<k<<" ";
                            dis[k]=1+dis[curri];
                            vis[k]=1;
                           qu.push(x);
                            }
                        }
                   //} 
                }
            }
            else {
                for(ll j=0;j<=9;j++)
                {
                   //if(j!=(curr[i]-'0'))
                   //{
                       string x=curr;
                       x[i]=j+'0';
                        ll k=atoi(x.c_str());
                        if(prime[k])
                        {
                            if(!vis[k])
                            {
                           //     cout<<k<<" ";
                            dis[k]=1+dis[curri];
                            vis[k]=1;
                           qu.push(x);
                            }
                        }
                   //}
                }
            }
        }
    }
    if(prime[s]==0||prime[e]==0)
    {
        cout<<"impossible\n";
        continue;
    }
    
    cout<<dis[e]<<"\n";
}
return 0;
}       
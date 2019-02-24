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
ll x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x1>>y1>>x2>>y2;
if(abs(y2-y1)==0)
{
    x3=x1;
    x4=x2;
    ll dis=abs(x2-x1);
    y3=dis+y1;
    y4=dis+y2;
    if(y3<-1000||y3>1000||y4<-1000||y4>1000)
    {
        y3=y1-dis;
        y4=y2-dis;
    }
}
else if(abs(x2-x1)==0)
{
    y3=y1;
    y4=y2;
    ll dis=abs(y2-y1);
    x3=dis+x1;
    x4=dis+x2;
    if(x3<-1000||x3>1000||x4<-1000||x4>1000)
    {
        x3=x1-dis;
        x4=x2-dis;
    }
}
else{
    if(abs(y2-y1)%abs(x2-x1)==0)
    {
        ll m=(y2-y1)/(x2-x1);
        if(abs(m)==1)
        {
            x3=x1;
            y3=y2;
            x4=x2;
            y4=y1;
        }
        else {
            cout<<"-1";
            return 0;
        }
    }
    else {
        cout<<"-1";
        return 0;
    }
}
if(x3>=-1000&&x3<=1000&&y3>=-1000&&y3<=1000&&x4>=-1000&&x4<=1000&&y4>=-1000&&y4<=1000)
    {
       cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else cout<<"-1";
return 0;
}

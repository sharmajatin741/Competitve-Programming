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
ll e=3;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll x,y;
cin>>x>>y;
if(x==y)
 {cout<<"="; exit(0);}
if(x==1)
{cout<<"<"; exit(0);}
if(y==1)
{
    cout<<">"; exit(0);
}
if(((x==2)&&(y==4))||((y==2)&&(x==4)))
{
    
    cout<<"="; exit(0);
}
if((x<e)&&(y<e))
{
    if(x<y)
    {
        cout<<"<";
    }
    else {
        cout<<">";
    }
}
else if((x>=e)&&(y>=e))
{
    if(x<y)
    cout<<">";
    else {
        cout<<"<";
    }
}
else if((x<e)&&(y>=e))
{  
    //cout<<"*";
    ll d=abs(x-e);
    ll d1=abs(y-e);
    //cout<<d<<" "<<d1;
    if(d>d1)
    {
        cout<<"<";
    }
    else if(d<d1){
        cout<<">";
    }
    
}
else if((y<e)&&(x>=e))
{
    ll d=abs(x-e);
    ll d1=abs(y-e);
    if(d>d1)
    {
        cout<<"<";
    }
    else if(d<d1){
        cout<<">";
    }
}
return 0;
}

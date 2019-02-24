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
ll n;
cin>>n;
if(n<=5)
{
    if(n==1)
    cout<<"Sheldon";
    else if(n==2)
    cout<<"Leonard";
    else if(n==3)
    cout<<"Penny";
    else if(n==4)
    cout<<"Rajesh";
    else cout<<"Howard";
    return 0;
}
ll k=n;
ll i;
ll j=0;
for( i=0;;i++)
{
    j+=(5*(1<<i));
    if(j>n)
    break;
}
//s++;
ll d=n-(j-(5*(1<<(i))));
ll s=(1<<(i));
if(d<=s)
{
    cout<<"Sheldon";
}
else if(d>s&&(d<=(2*s)))
{
    cout<<"Leonard";
}
else if(d>2*s&&d<=3*s)
{
    cout<<"Penny";
}
else if(d>3*s&&d<=4*s){
    cout<<"Rajesh";
}
else cout<<"Howard";
return 0;
}

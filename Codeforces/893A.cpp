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
ll n;
cin>>n;
ll a,b,c;
a=1,b=1,c=0;
forn(i,n)
{
    ll x;
    cin>>x;
    if(x==1)
    {
        if(a!=1)
        {
            cout<<"NO";
            return 0;
        }
        if(b==1)
        {
            c=1;
            b=0;
        }
        else if(c==1)
        {
            c=0;
            b=1;
        }
    }
    if(x==2)
    {
        if(b!=1)
        {
            cout<<"NO";
            return 0;
        }
        if(a==1)
        {
            c=1;
            a=0;
        }
        else if(c==1)
        {
            c=0;
            a=1;
        }
    }
    if(x==3)
    {
        if(c!=1)
        {
            cout<<"NO";
            return 0;
        }
        if(b==1)
        {
            a=1;
            b=0;
        }
        else if(a==1)
        {
            a=0;
            b=1;
        }
    }
}
cout<<"YES";
return 0;
}

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
char a[n][2];
ll count=0;
ll cnt=0;
forn(i,n)
{
    if(i==0)
    {
       cin>>a[i];
       cnt++;
    }
    else {
        cin>>a[i];
        if(a[i][0]!=a[i-1][1])
        {
            cnt++;
        }
        else {
            count++;
            cnt=0;
        }
        
    }
}
cout<<count+1;
return 0;
}

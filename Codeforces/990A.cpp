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
ll n,m,a,b;
cin>>n>>m>>a>>b;
ll q=n/m;
ll n1=m*q;
ll n2=m*(q+1);
//cout<<(n-n1)*b<<" "<<n2-n;
cout<<min((n-n1)*b,(n2-n)*a);
//cout<<n2;
/*if(abs(n-n1)<abs(n-n2))
{
    if(n1<n)
    { 
        cout<<n1;
        cout<<(n-n1)*b;
    }
    else {
        cout<<(n1-n)*a;
    }
}
else {
 if(n2<n)
    {
        cout<<(n-n2)*b;
    }
    else {
        cout<<(n2-n)*a;
    }   
}*/
return 0;
}

// 72 72 72 72 72 72 72 72 72 72 72
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
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
ll r1,r2,c1,c2,d1,d2;
cin>>r1>>r2>>c1>>c2>>d1>>d2;
ll A,B,C,D;
A=(r1-d2+c1);
B=(r1-d1+c2);
C=(c1-r1+d2);
D=(r2-c1+d1);
if(A==B||A==C||A==D||B==C||B==D||C==D)
{
    cout<<-1;
    return 0;
}
if((A/2)<=0||(A/2)>9||(B/2)<=0||(B/2)>9||(C/2)<=0||(C/2)>9||(D/2)<=0||(D/2)>9)
{
    cout<<-1;
    return 0;
}
if(A%2||B%2||C%2||D%2)
{
    cout<<"-1";
    return 0;
}
cout<<A/2<<" "<<B/2<<"\n"<<C/2<<" "<<D/2;
return 0;    
}

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
////freopen("input.txt", "r", stdin);
string s;
cin>>s;
ll hh=(s[0]-'0')*10+(s[1]-'0');
ll mm=(s[3]-'0')*10+(s[4]-'0');
ll uu=hh;
ll yy=mm;
ll rr=hh;
if(s[1]==s[3]&&s[0]==s[4])
{
    hh++;///cout<<hh;
    while(hh<=23)
    {
        ll o=hh%10;
        ll p=hh/10;
        if(o*10+p<=59)
        {
            ll w[2];
            w[0]=o;
            w[1]=p;
            ll q[2];
            q[0]=p;
            q[1]=o;
            cout<<q[0]<<q[1]<<":"<<w[0]<<w[1];
            return 0;
        }
        hh++;
    }
    cout<<"00:00";
}
else{
   do{ 
        
        ll o=uu%10;
        ll p=uu/10;
        if(o*10+p<=59)
        {
            if((uu==rr))
            {
               if((o*10+p)>mm)
               {
            ll w[2];
            w[0]=o;
            w[1]=p;
            ll q[2];
            q[0]=p;
            q[1]=o;
            cout<<q[0]<<q[1]<<":"<<w[0]<<w[1];
            return 0;
               }
            }
            else{
            ll w[2];
            w[0]=o;
            w[1]=p;
            ll q[2];
            q[0]=p;
            q[1]=o;
            cout<<q[0]<<q[1]<<":"<<w[0]<<w[1];
            return 0;
            }
        }
        uu++;
    }while(uu<=23);
    cout<<"00:00";
}
return 0;    
}

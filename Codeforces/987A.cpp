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
vector<pair<string,string>> d(6);
d[0]=(mp("purple","Power"));
d[1]=(mp("green","Time"));
d[2]=(mp("blue","Space"));
d[3]=(mp("orange","Soul"));
d[4]=(mp("red","Reality"));
d[5]=(mp("yellow","Mind"));
ll n;
cin>>n;
vector<string> s;
forn(i,n) {
    string a;
    cin>>a;
    s.pb(a);
}
//forn(i,6)
//cout<<d[i].first<<"\n";
cout<<6-n<<"\n";
for(ll i=0;i<6;i++)
{
    string g=d[i].first;
    //cout<<g<<"\n";
    if(find(s.begin(),s.end(),g)!=s.end())
    { 
        continue;
    }
    else {
        cout<<d[i].second<<"\n";
    }
}
return 0;
}

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
vector<pair<ll,string>> a(n);
forn(i,n)
{
    string s;
    cin>>s;
    a[i]=(mp(s.length(),s));
    
}
sort(all(a));
ll found=1;
forn(i,n-1)
{
   string q=a[i].se;
   string w=a[i+1].se;
   if(w.find(q)==-1)
   {
       found=0;
       break;
   }
}
if(found==1)
{
    cout<<"YES\n";
    for(auto x :a)
    {
        cout<<x.second<<"\n";
    }
}
else {
    cout<<"NO";
}
return 0;
}

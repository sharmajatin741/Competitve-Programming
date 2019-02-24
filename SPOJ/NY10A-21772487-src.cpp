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
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    cout<<n<<" ";
    string s;
    cin>>s;
    ll a[8]={0};
    vector<string> c(8);
    c={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
    forn(i,8)
    {
    auto k=s.find(c[i],0);
    while(k!=-1)
    {
        a[i]++;
        k=s.find(c[i],k+1);
    }
    cout<<a[i]<<" ";
    }
    cout<<"\n";
}

return 0;

}

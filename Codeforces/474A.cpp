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
char al[30]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
char a;
cin>>a;
string s;
cin>>s;
if(a=='R')
{
    forn(i,s.length())
    {
        ll pos;
        forn(j,30)
        {
            if(al[j]==s[i])
            {
                pos=j;
                break;
            }
        }
        cout<<al[pos-1];
    }
}
else {
    forn(i,s.length())
    {
        ll pos;
        forn(j,30)
        {
            if(al[j]==s[i])
            {
                pos=j;
                break;
            }
        }
        cout<<al[pos+1];
    }
}
return 0;
}

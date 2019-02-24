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
string s;
cin>>s;
char a[201];
ll j=0;
ll found=0;
ll first=0;
for(ll i=0;s[i];i++)
{
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    {
        found=1;
        i+=2;
        continue;
    }
    else {
        if(found==1)
        {
           // if(first)
            a[j++]=' ';
            found=0;
        }
        else {
        found=0;
        }
        a[j++]=s[i];
        //found=1;
    }
}
a[j]='\0';
cout<<a;
return 0;
}

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
ll k2,k3,k5,k6;
cin>>k2>>k3>>k5>>k6;
ll ans1=0;
ll ans2=0;
ll k=min(min(k2,k5),k6);
ans1+=k*256;
ans1+=min(k3,k2-k)*32;
k=min(k3,k2);
ans2+=k*32;
ans2+=min(min(k5,k6),k2-k)*256;
cout<<max(ans2,ans1);
return 0;
}

/*
Oh, can you tell me, can you tell me the way the story ends?
A monster in my heart
A ghost inside my chest
I'm broken down, the world around us
Surround my suffering
You smile and laugh at me
But you don't see a thing
Damaged and broken as I am
I'm trying not to breathe
Unraveled, I'm not unraveled by
The truth I finally see, freeze
I'm breakable, unbreakable
I'm shakeable, unshakeable
Unraveling since I found you
And now I'm turning to dust in a world that's twisted
Don't come searching when I go missing
Close your eyes or just try to look away
Don't want to hurt you
We live in a world someone else imagined
The ghost of what's left of me all but vanished
Remember my heart, how bright I used to shine
Entangled in the loneliness
The memory of innocence
It's stinging me, it's breaking me
The pain is spreading endlessly
I cannot move, I close my eyes
I try to breathe, I realize -
I'm paralyzed, I'm paralyzed
UNRAVEL THE WORLD
I'm not what I was then
Don't touch the infection
Entwined we will both die
So stay away, and stay alive
I'm breakable, unbreakable
I'm shakeable, unshakeable
Unraveling, I won't infect you!
Now I'm turning to dust in a world that's twisted
Don't come searching when I go missing
Close your eyes or just try to look away
Don't want to hurt you
We live in a world someone else imagined
The ghost of what's left of me all but vanished
Remember my heart, how bright I used to shine
Please, just don't forget me...
Just don't forget me
Just don't forget me
Just don't forget me
Don't forget me
We live in a world someone else imagined
The ghost of what's left of me all but vanished
Remember my heart, how bright I used to shine
Oh, can you tell me?
Oh, can you tell me?
A monster in my heart
And now there's nothing left
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define PI 3.14159265358979323846
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef long double ld;
typedef string st;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=500020;
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      ll n;
      cin>>n;
      ll a[n],b[n];
      forn(i,n) cin>>a[i];
      forn(i,n) cin>>b[i];
      vi c;
      for1(i,n-1) c.pb(a[i]-a[i-1]);
      vi d;
      for1(i,n-1) d.pb(b[i]-b[i-1]);
      sort(all(c));
      sort(all(d));
      if(a[0]!=b[0]||a[n-1]!=b[n-1]||c!=d)
      {
        cout<<"NO\n";
      }
      else cout<<"YES\n";
}

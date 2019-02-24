#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 100005;
#define mdfd ffafdda
typedef long long ll;
typedef pair<int, int> pii;
int a[MAX];
int b[MAX];
ll dp1 [5005][55];
ll dp2 [5005][55]; 
const ll INF = 1000000000000000000;
// index, # of processors, wiggle room
map<int, vector<int> > m;
main() {
	// freopen("a.in", "r", stdin);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for (int i=0; i<n; i++) {
		cin >> b[i];
	}
	for (int i=0; i<n; i++) {
		m[a[i]].push_back(b[i]); 
	}
	vector<int>xd;
	for (auto i=m.begin(); i!=m.end(); i++) {
		xd.push_back(i->first); 
		sort(m[i->first].rbegin(), m[i->first].rend());
	}
	for (int i=0; i<5005; i++) {
		for (int j=0; j<55; j++) {
			dp1[i][j] = dp2[i][j] = INF;
		}
	}
	dp1[0][0] = dp2[0][0] = 0;
	for (int i=xd.size()-1; ~i; i--) {
		int power = xd[i]; 
		vector <int> processors = m[power];
		vector <ll> pref; 
		pref.push_back(0); 
		for (int j=0; j<processors.size(); j++){
			if (pref.size()==0) pref.push_back(processors[j]); 
			else pref.push_back(pref.back()+processors[j]); 
		}
		for (int j=0; j<5005; j++) {
			for (int z=0; z<55; z++) {
				dp2[j][z] = dp1[j][z];
				dp1[j][z] = INF;
			}
		}
		for (int j=0; j<5005; j++) {
			for (int z=0; z<55; z++) {
				for (int k=0; k<=processors.size(); k++) {
					// using k 
					int frees = processors.size() - k;
					ll newsum = dp2[j][z] + power * k; // new power sum
					ll newden = j + pref[k]; // new # of procs
					if (frees > z) { continue; }
					if (newden > 5000) { continue; }
					dp1[newden][z+k-frees] = min(dp1[newden][z+k-frees], newsum);
				}
			}
		}
	}
	double ans = INF; 
	for (int i=1; i<5005; i++){
		for (int j=0; j<55; j++) {
			
			ans = min(ans, dp1[i][j]/(double)i);
		}
	}
	cout << fixed << setprecision(0) << ceil(1000*ans) << '\n'; 
	return 0; 
}

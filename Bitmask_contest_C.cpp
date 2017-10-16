	#include <functional>
	#include <algorithm>
	#include <iostream>
	#include <cstring>
	#include <cstdlib>
	#include <cassert>
	#include <sstream>
	#include <numeric>
	#include <string>
	#include <vector>
	#include <cstdio>
	#include <bitset>
	#include <cmath>
	#include <ctime>
	#include <queue>
	#include <stack>
	#include <map>
	#include <set>


	using namespace std;
	#define sz(a) (int)a.size()
	#define vi vector <int>
	#define pb push_back
	#define mp make_pair
	#define ll long long        
	#define sc scanf
	#define pf printf    
	#define f first
	#define s second
	const int inf = (int)1e9;
	const int mod = inf + 7;
	const double eps = 1e-9;
	const double pi = acos(-1.0);
	ll dp[(1 << 18)][22];
	ll a[22];
	ll c[22][22];
	int main(){
		int n, m , k;
		cin >> n >> m >> k;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i < k ; ++i) {
			ll x, y;
			cin >> x >> y >> c[x -1][y -1];
		}
		for (int i = 0; i < n; ++i) {
			dp[1 << i][i] = a[i];

		}	
		for (int mask = 1; mask < (1 << n); ++mask) {
			for (int x = 0; x < n; ++x) {
				if ((mask & (1 << x)) > 0){
					for (int y = 0; y < n; ++y) {
						if ((mask & (1 << y)) == 0){
							dp[mask + (1 << y)][y] = max(dp[mask + (1 << y)][y], dp[mask][x] + a[y] + c[x][y]);
						}
					}
				} 
			}
		}
		ll  _max = -1111;
		for(int mask = 0; mask < (1<<n) ; mask++)
		{
			if(__builtin_popcount(mask)==m)
			{
			 
			for(int i = 0; i < n;i++)
			{
				
				
					_max = max(dp[mask][i], _max);
				
			}
			}
		}
		cout <<_max << endl;
		return 0;
			
	}   \
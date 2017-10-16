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
	ll dp[11][11];
	void solve (int ind){
		int n, m;
		cin>> m >> n;
		bool q[10];
		for (int i = 0; i < 10; ++i) {
			q[i]= false;
		}
		for (int i = 0; i < m ; ++i) {
			int  x;
			cin >> x;
			q[x] = true;
		}
		for  (int i = 1; i <= n; ++i) {
			for (int j  = 0; j < 10; ++j) 
				dp[i][j] =0;
		}
		for (int j = 0; j < 10; ++j) {
			if (q[j] ) 
				dp[1][j] = 1;
		}
		for (int i = 2; i <= n; ++i) {
			for (int j = 0; j < 10; ++j) {
				if(!q[j]) continue;

				int a = j +  1;
				int b = j - 1 ;
				int c = j - 2;
				int d = j + 2;
				if (q[a])
					dp[i][j] += dp[i- 1][a];
				if (q[b])
					dp[i][j] += dp[i- 1][b];
				if (q[c])
					dp[i][j] += dp[i- 1][c];
				if (q[d])
					dp[i][j] += dp[i- 1][d];
				if (q[j])
					dp[i][j] += dp[i- 1][j];
			}
		}
		ll ans = 0;
		for (int i = 0; i < 10; ++i){
			ans+= dp[n][i];
		}
		
		cout << "Case " << ind << ": " << ans  << endl; 
	}
	int main(){
		int t, m , n;
		cin >> t ;

		for (int i = 0; i < t; ++i) {
			solve(i + 1);
		}
		return 0;
			
	}   
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
	long long binpow ( int a , ll n) {
  if (n == 0) return 1; 
  if (n % 2 == 1) return binpow (a, n-1) * a; 
   else {
     long long  b = binpow (a, n/2);
     return b * b;
  	}
	}
	stack <int>f (ll x) {
		stack <int> res;
		while  (x > 0) {
		res.push(x%10);
		x/=10;
		//cout << res.top() << endl;
		}
		return res;
		
	}
	ll  h (stack<int> x) {
		bool ok = true;
		ll sum = 0;
		ll u = 0;
		while (!x.empty()){
		if (x.top() == 0 && ok) {
			x.pop();
			continue;
		}
		else 
			ok = false;
		sum += (1ll *  (long long )(x.top()* binpow(10, u)));
			x.pop();
			u++;
		}
		return sum;
	}
	int main(){
		
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i) {
			ll x, y;
			cin >> x >> y;
			stack <int> s = f (x);
			ll x2 = h(s);
			stack <int>  t = f (y);
			ll y2 = h(t);
			//cout << x2 << " " << y2 << endl;
			ll sum = x2 + y2;
			//cout << sum << endl;
			stack<int> ans = f(sum);
			
			cout << h(ans) << endl;
		
		
		}
		return 0;
			
	}   
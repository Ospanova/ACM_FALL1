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
//vector <int> v;
long long binpow ( int a , ll n) {
  if (n == 0) return 1; 
  if (n % 2 == 1) return binpow (a, n-1) * a; 
   else {
     long long  b = binpow (a, n/2);
     return b * b;
  }
}
string f (ll x) {
	string j = "";
	while (x > 0) {
		j += char((x % 2) + '0');
		x/=2;
	}
	return j;
}
int main(){
	ll l, r;
	cin >> l  >> r;
	string s = f(l);
	string t = f(r);
	ll pos = -1;
	if (s == t) {
		cout << 0 << endl;
		return 0;
	}
	if (s.size () < t.size()) {
		for (int i = s.size() - 1; i < s.size() - 1 +  (t.size() - s.size()); ++i) {
			s+=char ('0');
		}
	}
	
	reverse (s.begin(), s.end());

	reverse (t.begin(), t.end());
	//cout << s << " " << t << endl;
	pos = t.size ();
	for (ll i = 0; i < s.size(); ++i) {

		if (s[i] != t[i]) {
			//cout << s[i] << " " << t[i] << endl;
			break;
		}
		else 
			pos--;

	}
	//cout << pos << endl;
	cout << binpow ( 2, pos)  -  1 << endl;
	return 0;
		
}   
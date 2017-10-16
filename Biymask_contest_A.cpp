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
#define f first
#define s second
  
const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);
  
const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// /////////////////////////////////////////////////////////////////////

map <ll, int>v;
long long binpow (int a , ll n) {
  if (n == 0) return 1; 
  if (n % 2 == 1) return binpow (a, n-1) * a; 
   else {
     long long  b = binpow (a, n/2);
     return b * b;
  }
}

int main(){

        ll n;
        cin >> n;
        int cnt = 0;
        for (int x = 1;  x <= 10; ++x) {
        	for (int i = 0; i < (1 << x); ++i) {
        		ll sum = 0;
        		for (int j = 0; j  < x ; ++j) {
        			if ((i & (1 << j)) > 0) {
        				sum += (1ll *  (long)(7 * binpow(10, j)));
        						
        			}
        			else 
        				sum += (1ll *  (long)( 4 * binpow(10,j)));
        				//cout << sum << " " << j << " &&" << endl;

        		}
        		cnt++;
        		//cout << sum << " " << cnt <<  endl;
        		v[sum] = cnt;	

        	}	
        }                 
                
                        	cout << v[n] << endl;
                        	return 0;                                                               	
}
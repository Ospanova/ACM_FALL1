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
ll binpow (int a , ll n) {
  if (n == 0) return 1; 
  if (n % 2 == 1) return binpow (a, n-1) * a; 
   else {
     ll b = binpow (a, n/2);
     return b * b;
  }
}
ll f(string s){
	ll res = 0;
	ll i = s.size() - 1;
	ll y = 1;
	while (i >= 0){
		res += (s[i] - '0') * y;
		y *=10;
		i--;
	}
	return res;
}
int main(){
	string s;

        cin >> s;   
        ll n = f(s);
        //cout << n << endl;                   
                           
           
        	ll x = sz(s);
        	for (ll i = 0; i < (1 << s.size()); ++i) {
        		ll sum = 0;
        		ll c = 0, c2 = 0;
        		for (ll j = 0; j  < x ; ++j) {
        			if ((i & (1 << j)) > 0) {
        				sum += (  (ll)(7* binpow(10, j )));
        				c++;
        						
        			}
        			else {
        				sum += ( (ll)( 4 * binpow(10,j )));
        				c2++;}
        				//
        				//cout << sum << " " << j << " &&" << endl;

        		}
        		//if (sum > 0) 
        		//cout << sum << " "  << c  << " " << c2 << endl;
        		if (c == c2) {
        			if (sum  >= n) {
        				cout << sum << endl;
        				return 0;
        			}
        		}	

        		
        	}
        int t = s.size()+1;
        if (t%2 == 1)t++; 
       for (int i = 0; i  < (t)/ 2; ++i) {
       		cout << 4;

      	}
      	for (int i = 0; i  < (t)/ 2; ++i) {
       		cout << 7;

      	}
      	return 0;	 
                                                                                                        	
}
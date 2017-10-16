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
	string s;
	int main(){
    char v[100000];
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (i == s.size() - 1)
           v[i] = s[i];
         else 
           v[i] = min(v[i + 1], s[i]);
    }
    string t;
    stack <char> res;
    for (int i = 0; i < s.size(); i++) {
        while (res.size() > 0 && (res.top()) <= (v[i])) {
              t += res.top();
              res.pop();        
        }
        res.push(s[i]);
    }
    while (res.size() > 0) {
          t += res.top();
          res.pop();        
    }
      cout << t;


    return 0;
			
	}   
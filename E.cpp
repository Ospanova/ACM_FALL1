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
    vector<char> v;
	int main(){
    cin >> s;
    
    for(int i = 0; i < s.length(); i++)
    {
        v.push_back(s[i]);
        
        if(v.size() > 1)
            if(v[v.size() - 1] == v[v.size() - 2])
            {
                v.pop_back();
                v.pop_back();
            }
    }
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i];
   	
    return 0;
			
	}   
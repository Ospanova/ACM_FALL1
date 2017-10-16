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

  queue<int>q;
  int n;

 int main (){
	  while (cin >> n && n != 0){
	  bool ok =true;
	  	for(ll i =0;i<n;i++){
	   		int w;
	    	cin>>w;
	    	q.push(w);
	    }
	  	stack<int> s;
	    int x=1;
	   while(x!=n){
	   if(s.size() && x==s.top()){
	   		s.pop();
	   		x++;
	   	    continue;
	   }
	     else if(q.front()!=x){
	        s.push(q.front());
	       }
	       else x++;
	       if(!q.size()&& x!=n){
	        ok=false;
	        break;
	       }
	       q.pop();
	  }
	  if(ok==true) 
	  		cout<<"yes"<<endl;
	  else 
	  		cout<<"no"<<endl;

	 }
return 0;
}
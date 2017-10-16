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
    int main(){
        stack<char> st; 
        string s;
        cin >> s;
        
        for (int i = 0; i < s.size(); i++) { 
            if(s.empty() || ((s[i] == '+' || s[i] == '-') && st.top() != s[i])){
                    st.push(s[i]); 
                    continue; 
            }
            if(!st.empty() && (st.top() == s[i])){
                st.pop();
            }
        } 
        if(st.empty()) cout<<"Yes";
        else cout<<"No";
        return 0;
            
    }   
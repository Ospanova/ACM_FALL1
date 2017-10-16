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
// https://ideone.com/Yv4pND
   
const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);
   
const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// ///////////////////////////////////////////////////////////////////// 
struct Node {
	char value;
	Node* prev;
	Node(int _a){
		 value= _a;
		prev = NULL;
	}
};
Node* top = NULL;

int cnt = 0;
inline void Insert(int value) {
	cnt++;

	Node* newnode = new Node (value);
	if(top == NULL){
		top = newnode;
		return;
	}
	newnode ->  prev = top;
	top = newnode;
}
inline void pop(){
	if (top == NULL) 
		return ;

	cnt--;
	Node* cur = top;
	top = cur -> prev;
	free (cur);
}
int Size () {
	return cnt;
}
bool isEmpty () {
	if (cnt > 0) 
	return false;
	return true;
}
int main(){
	string s;
	cin >> s;
	Insert (s[0]);
	ll cnt = 0;
	 for (int i = 1; i < s.size () ; ++i ) {
	 	//cout << "de" <<endl;
	 	if ( top!= NULL && ((top -> value == '('  && s[i] == ')')  || ((top -> value == '{'  && s[i] == '}')) || (top -> value == '['  && s[i] == ']'))){
	 		pop ();
	 		cnt++;
	 		//cout << "de" <<endl;
	 	}
	 	else 
	 		Insert (s[i]);
	 }
	cout << cnt * 2 << endl;
	return 0;

}  

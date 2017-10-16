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
	int value;
	Node* l;
	Node* r;
	Node (int _value) {
		l = NULL;
		r = NULL;
		value = _value;
	}
};

Node* root = NULL;
void add (int a) {
	Node* newnode = new Node (a);
	if (root == NULL) {
		root = newnode;
		return ;
	}
	Node* cur = root;
	while (true) {
		if  (cur -> value >= a ) {
			if (cur -> l != NULL) 
				cur = cur -> l;
			else{
				Node* temp = new Node(a);
				cur -> l  = temp;
				break;
			}
		}
		else{
			if (cur -> r != NULL) 
					cur = cur -> r;
			else{
				Node* temp = new Node(a);
				cur -> r  = temp;
				break;
			}
			
		}

	}
}

bool check (int value) {

	if (root == NULL) {
		return false;
	}
	Node* cur = root;
	while (true) {
		if (cur -> value == a) {
			return true;
		}
		if (cur -> value < a && cur ->  r == NULL) {
			return false;
		}
		if (cur -> value > a && cur ->  l == NULL) {
			return false;
		}
		if (cur -> value < a && cur ->  r != NULL) {
			Node*  newnode = new Node (a);
			cur -> r = newnode;
		}
		if (cur -> value > a && cur ->  l == NULL) {
			Node*  newnode = new Node (a);
			cur -> l = newnode;
		}
		

	}
}
int main () {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {

	}

	return 0;
}
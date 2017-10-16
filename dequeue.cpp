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
   
const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// ///////////////////////////////////////////////////////////////////// 

struct Node {
    int value;
    Node* next;
    Node* prev;
    Node(int _a){
        value = _a;
        next = NULL;
        prev = NULL;
    }

};
Node* front = NULL;
Node* top  = NULL;
int cnt = 0;

bool isEmpty () {
    return cnt == 0;
}

inline void push_back(int value) {
        Node* newnode = new Node(value);
        if ( isEmpty() ) {
            front = top = newnode;
        }
        else {
            top->next = newnode;
            newnode->prev = top;
            top = newnode;
        }
        cnt++;
}
inline void pop_front(){
        if ( isEmpty() ) return;
        Node* newnode  = front;
        if ( front->next != NULL )
        {
            front = front->next;
            front->prev = NULL;
        }
        else
        {
            front = NULL;
            top = NULL;
        }
        cnt--;
        free(newnode);
}
inline void push_front(int value){
        Node* newnode = new Node(value);
        if ( isEmpty() ) {
            front = top = newnode;
        }
        else{
            newnode->next = front;
            front->prev = newnode;
            front = newnode;
        }
        cnt++;
}
inline void pop_back(){
        if ( isEmpty() ) return;
        Node* newnode = top;
        if ( top->prev != NULL )
        {
            top = top->prev;
            top->next = NULL;
        }
        else
        {
            top = NULL;
            front = NULL;
        }
        cnt--;
        free(newnode);
}
int Size () {
    return cnt;
}
int main(){
    for (; ;) {
        string s;
        cin>> s;
        if (s == "pop_front"){
            if (!isEmpty()){
               cout << front -> value << endl;
               pop_front();
            }
        }
        else if (s == "pop_back") {
            if (!isEmpty()){
                cout << top-> value << endl;
                pop_back();
            }

        }
        else if (s == "size")
            cout << Size() << endl;
        else if (s == "exit") {
            cout << "bye" << endl;
            return 0;
        }
        else if (s == "clear"){
            while (!isEmpty ()) {
                pop_back();
            }
            cout << "ok" << endl;
        }
        else if (s == "front") 
            cout << front -> value << endl;
        else if (s == "back")
            cout << top -> value << endl;
        else if (s == "push_front") {
            int sum;
            cin >> sum;
            push_front(sum);
            cout << "ok" << endl;
        }
        else if (s == "push_back")
        {

            int sum;
            cin >> sum ;
            push_back(sum);
            cout << "ok" << endl;
        }
    }
   
    return 0;

}
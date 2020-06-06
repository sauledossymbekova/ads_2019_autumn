#include <bits/stdc++.h>
  
using namespace std;
 
struct Node{
	Node * prev;
	Node * next;
	string val;
	Node(string _val){
		prev = NULL;
		next = NULL;
		val = _val;
	}	
};
 
Node * head = NULL;
Node * tail = NULL;
int cnt = 0;
void add_back(string s){
    Node * cur = new Node(s);
    if (cnt == 0) {
        head = cur;
    }
    else {
        cur -> prev = tail;
        tail -> next = cur;
    }
    tail = cur;
    cnt++;
}
void add_front(string s){
    Node * cur = new Node(s);
    if (cnt == 0) {
        tail = cur;
    }
    else {
      head -> prev = cur;
      cur -> next = head;
    }
    head = cur;
    cnt++;
}
bool empty(){
    return cnt == 0;
}
void erase_front(){
    head = head -> next;
    if (head == NULL) tail = NULL;
    cnt--;
}
void erase_back(){
    tail = tail -> prev;
    if (tail == NULL) head = NULL;
    cnt--;
}
string front(){
    return head -> val;
}
string back(){
    return tail -> val;
}
void clear(){
    head = NULL;
    tail = NULL;
    cnt = 0;
}
  
int main()
{
	string s;
   	while(cin >> s){
   		if(s == "add_front"){
   			string t;
   			cin >> t;
   			add_front(t);
   			cout << "ok" << endl;
   		}
   		if(s == "add_back"){
   			string t;
   			cin >> t;
   			add_back(t);
   			cout << "ok" << endl;
   		}
   		if(s == "erase_front"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else
   			{
   				cout << front() << endl;
   				erase_front();
   			}
   		}
   		if(s == "erase_back"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else{
   				cout << back() << endl;
   				erase_back();
   			}
   		}
   		if(s == "front"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else{
   				cout << front() << endl;
   			}
   		}
   		if(s == "back"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else{
   				cout << back() << endl;
   			}
   		}
   		if(s == "clear"){
   			clear();
   			cout << "ok" << endl;
   		}
   		if(s == "exit"){
   			cout << "goodbye" << endl;
   			break;
   		}
   		// cout << "hi" << endl;
   	}
    return 0;
}

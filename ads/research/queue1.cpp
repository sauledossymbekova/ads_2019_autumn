#include <iostream>
using namespace std;

struct Dauren{
	int val;
    Dauren * prev;
    Dauren(int _val) {
    val = _val;
    prev = NULL;
  }
};

 static struct Queue{
  Dauren * head = NULL;
  Dauren * tail = NULL;
  int cnt = 0;
  void push(int x) {
    Dauren * cur = new Dauren(x);
    if (cnt == 0) head = cur;
    else {
        tail -> prev = tail;
    }
    tail = cur;
    cnt++;
  }
  int front(){
      return head->val;
  }
  void pop(){
      head = head -> prev;
      cnt--;
  }
  void clear() {
      head = nullptr;
      tail = nullptr;
      cnt = 0;
  }
  int size() {
      return cnt;
  }
  bool isEmpty(){
      return cnt == 0;
  }
};

int main(){
    Queue q;
    string s;
    while(cin >> s) {
        if (s == "push") {
            int x;
            cin >> x;
            q.push(x);
            cout << "ok";
        }
        else if (s == "pop"){
            cout << q.front();
            q.pop();
        }
        else if (s == "front") {
            cout << q.front();
        }
        else if (s == "size") {
            cout << q.size();
        }
        else if (s == "clear") {
            q.clear();
            cout << "ok";
        }
        else {
            cout << "bye";
            break;
        }
        cout << endl;
    }
}
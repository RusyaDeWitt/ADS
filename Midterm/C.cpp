#include <bits/stdc++.h>
using namespace std;
 
struct Node {
  int value;
  int ans;
  Node *prev;
  Node(int x) {
    value = x;
    prev = nullptr;
    ans = -1;
  }
};
 
struct Stack {
  private:
    Node *head = nullptr;
    int sz = 0;
  public:
 
    int top() { 
      return head->value; 
    }
   
    void pop() {
      head = head->prev;
      sz--;
    }
 
    int size() { 
      return sz;
    }
 
    bool empty() { 
      return sz == 0; 
    }
 
    int push(int x) {
      Node * node = new Node(x);
      // write your code here 
      if(head == NULL)
      {
          head = node;
          sz++;

      } else {
          
          if(node->value >= head->value)
          {
              node->ans = head->value;
              node->prev = head;
              head = node;
              sz++;
          }
          else {
              while(!empty() != 0)
              {
                  if(head->value <= node->value)
                  {
                      node->ans = head->value;
                      break;
                  } else {
                      pop();
                  }
              }
              
              head = node;
              sz++;
          }
      }

      return node->ans;
    }
 
}st;
 
int main() {
  int n;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    cout << st.push(x) << " ";
  }
}
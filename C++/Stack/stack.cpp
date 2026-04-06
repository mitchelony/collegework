#include <cstddef>
#include <iostream>
using namespace std;

class Stack {
private:
  struct stacknode {
    int item;
    stacknode *next;
  };
  stacknode *topPtr;

public:
  Stack();
  Stack(const Stack &astack);
  ~Stack();
  bool isEmpty() const;
  void push(int newitem);
  void pop();
  void pop(int &stacktop);
  void gettop(int &stacktop);
};

Stack::Stack() { topPtr = NULL; }
Stack::~Stack() {
  while (!isEmpty())
    pop();
}
bool Stack::isEmpty() const { return topPtr == NULL; }

void Stack::push(int newitem) {
  stacknode *newPtr = new stacknode;
  newPtr->item = newitem;
  newPtr->next = topPtr;
  topPtr = newPtr;
}
void Stack::pop() {
  if (isEmpty()) {
    ;
  } else {
    stacknode *temp = topPtr;
    topPtr = topPtr->next;
    temp->next = NULL;
    delete temp;
  }
}
void Stack::pop(int &stacktop) {
  if (isEmpty()) {
    ;
  } else {
    stacktop = topPtr->item;
    stacknode *temp = topPtr;
    topPtr = topPtr->next;
    temp->next = NULL;
    delete temp;
  }
}
void Stack::gettop(int &stacktop) {
  if (isEmpty()) {
    ;
  } else {
    stacktop = topPtr->item;
  }
}

Stack::Stack(const Stack &astack) {
  if (astack.topPtr == NULL) {
    topPtr = NULL;
  } else {
    stacknode *newPtr_prev = NULL;
    for (stacknode *origptr = astack.topPtr; origptr != NULL;
         origptr = origptr->next) {
      stacknode *newPtr = new stacknode;
      newPtr->item = origptr->item;
      newPtr->next = NULL;
      if (newPtr_prev == NULL) {
        topPtr = newPtr;
      } else {
        newPtr_prev->next = newPtr;
      }
      newPtr_prev = newPtr;
    }
  }
}

int main() {
  Stack s;
  int x;
  // make a stack
  s.push(10);
  s.push(30);
  s.push(20);
  s.push(50);
  s.push(40);
  while (!s.isEmpty()) {
    s.gettop(x);
    cout << x << endl;
    s.pop();
  }
  cout << s.isEmpty() << endl;
  return 0;
}

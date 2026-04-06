#include <iostream>
using namespace std;
class Queue {
private:
  struct QueueNode {
    int item;
    QueueNode *next;
  };
  QueueNode *backPtr;
  QueueNode *frontPtr;

public:
  Queue();               // default constructor
  Queue(const Queue &Q); // Copy constructor
  ~Queue();              // destructor
  bool isEmpty() const;
  void enqueue(int newItem); // inserts an item at the back of a queue
  void dequeue();            // delete the front of a queue
  void dequeue(int &queuefront);
  void
  getfront(int &queuefront) const; // retrieves and deletes the front of a queue
};
Queue::Queue() // default constructor
{
  backPtr = NULL;
  frontPtr = NULL;
}
Queue::Queue(const Queue &Q) // copy constructor
{
  // Got Errors so went ahead to implement this function to fix them
  frontPtr = NULL;
  backPtr = NULL;

  for (QueueNode *origPtr = Q.frontPtr; origPtr != NULL;
       origPtr = origPtr->next) {
    enqueue(origPtr->item);
  }
}
Queue::~Queue() // destructor
{
  while (!isEmpty())
    dequeue();
}
bool Queue::isEmpty() const { return bool(backPtr == NULL); }
void Queue::enqueue(int newitem) // inserts an item at the back of a queue
{
  // create a new node
  QueueNode *newPtr = new QueueNode;
  newPtr->item = newitem;
  newPtr->next = NULL;

  if (isEmpty()) {
    frontPtr = newPtr;
    backPtr = newPtr;
  } else {
    backPtr->next = newPtr;
    backPtr = newPtr;
  }
}
void Queue::dequeue() // delete the front of a queue
{
  if (isEmpty()) {
    exit(1);
  } else {
    QueueNode *tempPtr = frontPtr;
    if (frontPtr == backPtr) {
      frontPtr = NULL;
      backPtr = NULL;
    } else {
      frontPtr = frontPtr->next;
    }
    tempPtr->next = NULL;
    delete tempPtr;
  }
}
void Queue::dequeue(int &queuefront) {
  if (isEmpty()) {
    exit(1);
  }

  queuefront = frontPtr->item;
  QueueNode *tempPtr = frontPtr;
  if (frontPtr == backPtr) {
    frontPtr = NULL;
    backPtr = NULL;
  } else {
    frontPtr = frontPtr->next;
  }

  tempPtr->next = NULL;
  delete tempPtr;
}
void Queue::getfront(int &queuefront) const
// retrieves and deletes the front of a queue
{
  if (isEmpty()) {
    exit(1);
  }
  queuefront = frontPtr->item;
}
int main() {
  Queue Q1; // default constructor
  int x;
  for (int i = 0; i <= 5; i++)
    Q1.enqueue(i);
  Queue Q2(Q1); // copy constructor
  Q1.dequeue();
  Q1.dequeue(x);
  cout << x << endl;
  for (int i = 0; i <= 5; i++) {
    Q2.getfront(x);
    cout << x << " " << endl;
    Q2.dequeue();
  }
  return 0;
}
#include <iostream>
using namespace std;

class Queue {
private:
  struct queuenode {
    int item;
    queuenode *next;
  };
  queuenode *frontPtr;
  queuenode *backPtr;

public:
  Queue();               // Default Constructor
  Queue(const Queue &Q); // Copy Constructor: copy content of queue into Q
  ~Queue();              // Destructor

  bool isEmpty() const;
  void enqueue(int newitem);            // Insert An Item
  void dequeue();                       // Delete Front Of Queue
  void dequeue(int &queuefront);        // Retrieve & Deletes The Front Of Queue
  void getfront(int &queuefront) const; // Retrieve Front Of Queue
};

Queue::Queue() {
  frontPtr = NULL;
  backPtr = NULL;
}

Queue::Queue(const Queue &Q) {}

Queue::~Queue() {
  while (!isEmpty())
    dequeue();
}

bool Queue::isEmpty() const { return backPtr == NULL; }

void Queue::enqueue(int newitem) {
  queuenode *newPtr = new queuenode;
  newPtr->item = newitem;
  newPtr->next = frontPtr;
  if (isEmpty()) {
    frontPtr = newPtr;
  } else {
    backPtr->next = newPtr;
  }
  backPtr = newPtr;
}

void Queue::dequeue() {
  if (isEmpty()) {
    exit(1);
  } else {
    queuenode *tempPtr = frontPtr;
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
  } else {
    queuenode *tempPtr = frontPtr;
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

void Queue::getfront(int &queuefront) const {
  if (isEmpty()) {
    exit(1);
  } else {
    queuefront = frontPtr->item;
  }
}
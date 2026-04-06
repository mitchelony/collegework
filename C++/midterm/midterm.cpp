// Name: Mitchel Onyebuchi
// Class: Data Structures
// Date: 03/09/2026

#include <iostream>
using namespace std;

struct node {
  int data;
  node *next;
};

int main() {
  node *p1 = new node;
  node *p2 = new node;
  node *p3 = new node;
  node *p4 = new node;

  node *head = p1;
  node *cur = NULL;

  p1->data = 90;
  p1->next = p2;

  p2->data = 80;
  p2->next = p3;

  p3->data = 70;
  p3->next = p4;

  p4->data = 60;
  p4->next = NULL;

  node *p5 = new node;
  p5->data = 85;
  p5->next = NULL;

  p3->next = p5;
  p5->next = p4;

  for (cur = head; cur != NULL; cur = cur->next) {
    cout << cur->data << endl;
  }
}

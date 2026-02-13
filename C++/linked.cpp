#include <cstddef>
#include <iostream>
using namespace std;

struct node
{
    int data;
    node*next;
};

int main () 
{
    node*p1 = new node;
    node*p2 = new node;
    node*p3 = new node;
    node*p4 = new node;
    
    node*head = p1;

    node*cur=NULL;

    p1->data =50;
    p1->next =p2;
    
    p2->data =60;
    p2->next =p3;
    
    p3->data =70;
    p3->next =p4;
    
    p4->data =80;
    p4->next =NULL;

    for (cur = head; cur != NULL; cur=cur->next)
    {
        cout << cur->data << endl;
    }

    //Insert Node
    node*p5= new node;
    p5->data = 90;

    p2->next = NULL;
    p2->next = p5;

    p5->next = p3;

    for (cur = head; cur != NULL; cur=cur->next)
    {
        cout << cur->data << endl;
    }

    return 0;
};
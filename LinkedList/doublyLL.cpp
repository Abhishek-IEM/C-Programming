#include <iostream>
using namespace std;

class Node
{ // DLL Node
public:
    int val;
    Node *next;
    Node *prev; // extra for DLL
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void display(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void displayRec(Node *Tail)
{
    while (Tail)
    {
        cout << Tail->val << " ";
        Tail = Tail->prev;
    }
    cout << endl;
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    display(a);
    displayRec(e);
}
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

class Deque
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;
    Deque()
    {
        head = tail = NULL;
        size = 0;
    }

    void pushBack(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        size++;
    }

    void pushFront(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp; // extra
            head = temp;
        }
        size++;
    }

    void popFront()
    {
        if (size == 0)
        {
            cout << "List is Empty:" << endl;
            return;
        }
        head = head->next;
        if (head)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
    }

    void popBack()
    {
        if (size == 0)
        {
            cout << "List is Empty:" << endl;
            return;
        }
        else if (size == 1)
        {
            popFront();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    int front()
    {
        if (size == 0)
        {
            cout << "Queue is Empty:" << endl;
            return -1;
        }
        return head->val;
    }

    int back()
    {
        if (size == 0)
        {
            cout << "Queue is Empty:" << endl;
            return -1;
        }
        return tail->val;
    }

    int length()
    {
        return size;
    }

    bool empty()
    {
        if (size == 0)
            return true;
        else
            return false;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.popFront();
    dq.display();
}
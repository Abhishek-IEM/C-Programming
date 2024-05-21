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

class DoublyLinkedList
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;
    DoublyLinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void InsertAtTail(int val)
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
    void InsertAtHead(int val)
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
    void InsertAtIndex(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            InsertAtHead(val);
        else if (idx == size)
            InsertAtTail(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;    // extra
            t->next->prev = t; // extra
            size++;
        }
    }
    int getAtIndex(int idx)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid Index" << endl;
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            return temp->next->val;
        }
    }
    void deleteAtHead()
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
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "List is Empty:" << endl;
            return;
        }
        else if (size == 1)
        {
            deleteAtHead();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIndex(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid Index" << endl;
            return;
        }
        else if (idx == 0)
            return deleteAtHead();
        else if (idx == size - 1)
            return deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
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
    DoublyLinkedList list;
    list.InsertAtTail(10);
    list.InsertAtTail(20);
    list.InsertAtTail(30);
    list.display();
    list.InsertAtTail(40);
    list.display();
    list.InsertAtHead(50);
    list.display();
    list.InsertAtIndex(2, 60);
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtHead();
    list.display();
}
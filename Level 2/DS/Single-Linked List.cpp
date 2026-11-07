#include <iostream>

using namespace std;

class Node
{
public:
    int info;
    Node* next;

    Node()  // Constructor
    {
        info = 0;
        next = NULL;
    }

    Node(int i)
    {
        info = i;
        next = NULL;
    }
};

class List
{
    Node* head;

public:

    List()
    {
        head = NULL;
    }

    void addToHead(int i)
    {
        Node* newNode = new Node(i);
        if(isEmpty())
            head = newNode;
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void addToTail(int i)
    {
        Node* newNode = new Node(i);
        if(isEmpty())
            head = newNode;
        else
        {
            Node* p = head;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = newNode;
        }
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void printList()
    {
        Node* p = head;
        while(p != NULL)
        {
            cout << p->info << "\t";
            p = p->next;
        }
        cout << endl;
    }

    int deleteFromHead()
    {
        int x = -1;
        if(isEmpty())
            cout << "List is empty\n";
        else if(head->next==NULL)
        {
            x = head->info;
            delete head;
            head = NULL;
        }
        else
        {
            Node* p = head;
            x = p->info;
            head = head->next;
            delete p;
        }
        return x;
    }

    int findNode(int key)
    {
        int c = 1;
        Node* p = head;
        while(p!=NULL)
        {
            if(p->info==key)
                return c;
            else
            {
                p = p->next;
                c++;
            }
        }
       return -1;
    }

};

int main()
{
    List L1;        // Create
    L1.addToHead(3);
    L1.addToHead(2);
    L1.addToHead(1);
    L1.printList();
    cout << "The value \'2\' is found in Node No. " << L1.findNode(2) << endl;
    cout << "The deleted value = " << L1.deleteFromHead() << endl;
    L1.addToTail(4);
    L1.printList();
    cout << "The value \'2\' is found in Node No. " << L1.findNode(2) << endl;
    /*int x = 10;
    int* ptr;
    ptr = &x;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 20;
    cout << x << endl;

    void* vptr;
    vptr = &x;
    float y = 3.14;
    vptr = &y;*/
    return 0;
}

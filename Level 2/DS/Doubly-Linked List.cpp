#include <iostream>

using namespace std;

class Node
{
public:
    int info;
    Node* next,* prev;

    Node()
    {
        info = 0;
        next = prev = NULL;
    }

    Node(int i)
    {
        info = i;
        next = prev = NULL;
    }
};

class DoublyList
{
    Node* head;
public:
    DoublyList()        // Constructor
    {
        head = NULL;
    }

    ~DoublyList()       // Destructor
    {
        Node* p = head;
        while(p!=NULL)
        {
            head = head->next;
            delete p;
            p = head;
        }
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void addToHead(int i)
    {
        Node* p = new Node(i);  // p->info = i;
        p->next = head;
        if(!isEmpty())
            head->prev = p;
        head = p;
    }

    void addToTail(int i)
    {
        Node* p = new Node(i);
        if(isEmpty())
            head = p;
        else
        {
            Node* q = head;
            while(q->next!=NULL)
                q = q->next;
            p->prev = q;
            q->next = p;
        }
    }

    void printList()
    {
        Node* p = head;
        while(p!=NULL)
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
            cout << "List is empty" << endl;
        else if(head->next == NULL)
        {
            x = head->info;
            delete head;
            head = NULL;
        }
        else
        {
            Node* p = head;
            // head->next->prev = NULL;
            head = head->next;
            head->prev = NULL;
            x = p->info;
            delete p;
        }
        return x;
    }


    int deleteFromTail()
    {
        int x = -1;
        if(isEmpty())
            cout << "List is empty" << endl;
        else if(head->next == NULL)
        {
            x = head->info;
            delete head;
            head = NULL;
        }
        else
        {
            Node* p = head;
            while(p->next!=NULL)
                p = p->next;
            p->prev->next = NULL;
            x = p->info;
            delete p;
        }
        return x;
    }
};

int main()
{
    DoublyList L1;
    L1.addToHead(3);
    L1.addToHead(2);
    L1.printList();
    L1.addToTail(4);
    L1.printList();
    L1.deleteFromHead();
    L1.printList();
    L1.deleteFromTail();
    L1.printList();
    return 0;
}

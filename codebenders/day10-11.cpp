#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    { // adds new nodes in the front of the list  0(1)

        int a=5;
        Node *newNode = new Node(val);
        if (head == NULL)
        { // empty list
            head = tail = newNode;
            return;
        }
        else
        { // if there exists some values in the list
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    { // 0(1)
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    { // 0(1)
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    { // 0(n)

        if (head == NULL)
        {
            cout << "The list is empty\n";
            return;
        }
        Node *temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // to insert element at specified position

    void insert(int val, int pos)
    { // 0(n)
        if (pos < 0)
        {
            cout << "invalid position\n";
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position\n";
                return;
            }
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void Search(int val)
    { // 0(n)
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == val)
            {
                cout << "the value exists at position " << idx << "\n";
                return;
            }
            temp = temp->next;
            idx++;
        }

        cout << "element does not exist" << endl;
    }

    // to print the linked list

    void printLL()
    { // 0(n)
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // reversing the Linked list

    void revLL()
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cout << "prev: " << prev->data << " " << "curr: " << curr->data << "next: " << next->data << endl;
        }
        head = prev;
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.printLL();
    // ll.revLL();
    ll.printLL();

    // ll.pop_front();
    // ll.printLL();
    // ll.pop_back();
    ll.insert(10, 5);
    // ll.Search(3);
    // ll.Search(5);
    // ll.Search(8);
    ll.printLL();

    return 0;
}

#include <iostream>

using namespace std;

class List; // forward declaration

class Node
{
    int data;
    Node *next;

public:
    Node(int data) : data(data), next(NULL) {} // Initialization list
    friend class List; // To give access to private data

    int getData(){ // To Return private data.
        return this->data;
    }

    Node* getNext(){ // To return private next node address;
        return next;
    }

    ~Node(){
        if(next != NULL){ // recursively called
            delete next;
            next = NULL;
        }
        cout << "Node Destructor Called." << endl;
    }
};

class List
{
    Node *head; // head of the list
    Node *tail; // tail of the list

    int recursiveSearch(Node *node, int key)
    {
        if (node == NULL)
            return -1;
        if (node->data == key)
            return 0;
        int value = recursiveSearch(node->next, key);
        if (value == -1)
            return -1;
        return 1 + value;
    }

public:
    List() : head(NULL), tail(NULL) {} // Initial State

    Node* begin(){
        return head;
    }

    void push_front(int data)
    {
        Node *node = new Node(data);
        if (head == NULL)
            head = node, tail = node;
        else
        {
            /*
            Node *ptr = head;
            head = node;
            head->next = ptr;
            */ // OR
            node -> next = head;
            head = node;
        }
    }

    void push_back(int data)
    {
        Node *node = new Node(data);
        if (tail == NULL)
        {
            head = node, tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
    }

    void insert(int data, int pos)
    {
        Node *n = new Node(data);
        if (pos == 0)
        {
            n->next = head;
            head = n;
            return;
        }
        Node *temp = head;
        int p = 1;
        while (pos > p && temp != NULL)
        {
            temp = temp->next;
            p++;
        }
        n->next = temp->next;
        temp->next = n;
        return;
    }

    int search(int key)
    {
        if(head == NULL) return -1;
        Node *temp = head;
        int idx = 0;
        while (temp)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            ++idx;
        }
        return -1;
    }

    int recSearch(int value){
        return recursiveSearch(head, value);
    }

    void print()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        return;
    }

    void pop_front(){
        if(head == NULL){
            cout <<"NOT possible " << endl;
            return;
        }
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL; // Necessary
        delete temp;
    }

    void pop_back(){
        if(tail == NULL){ // If no node
            cout << "NOT POSSIBLE" << endl;
            return;
        }
        if (head->next == NULL) // If only one node
        {
            Node *temp = head;
            tail = NULL;
            head = NULL;
            temp->next = NULL;
            delete temp;
            return;
        }
        Node *temp = head;
        while ((temp->next)->next != NULL) // If two or more than two node
        {
            temp = temp->next;
        }
        Node *del = temp->next;
        temp->next = NULL;
        tail = temp;
        del->next = NULL;
        delete del;
    }

    void deletepos(int pos)
    {
        if (pos == 0)
        {
            pop_front();
            return;
        }
        int p = 0;
        Node *temp = head;
        while ((p) < (pos - 1) && temp != NULL)
        {
            temp = temp->next;
            p++;
        }
        Node *del = temp->next;
        temp->next = del->next;
        del->next = NULL;
        delete del;
    }

    ~List()
    {
        if (head != NULL)
        {
            delete head;  // or delete one by one
            head == NULL; // this works because of destructor in the node
        }
        cout << "List Destructor Called." << endl;
    }
};

int main()
{
    List l1;
    l1.push_front(10); // 10
    l1.push_back(11); // 10, 11
    l1.push_front(1); // 1, 10, 11
    l1.print();
    l1.push_back(15); // 1, 10, 11, 15
    l1.print();
    l1.insert(2, 2); // 1, 10, 2, 11, 15
    Node *temp = l1.begin(); // To get the head of the list private data by using public function
    while (temp)
    {
        cout << temp->getData() << " "; // Public function of Node class is used to get data.
        temp = temp->getNext(); // Public function of Node class is used to get Next node address.
    }
    cout << endl;
    cout << l1.search(20) << endl; // -1 NOT found
    cout << l1.recSearch(2) << endl; // 2 Index
    cout << l1.recSearch(1) << endl; // 0 Index
    l1.pop_front(); // 10, 2, 11, 15
    l1.pop_back(); // 10, 2, 11
    l1.deletepos(2); // 10, 2
    l1.print();
}
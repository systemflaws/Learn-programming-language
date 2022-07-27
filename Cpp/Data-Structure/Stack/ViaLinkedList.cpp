#include <iostream>

using namespace std;

template <typename T>
class Stack;

template <typename T>
class Node
{
    T data;
    Node<T> *next;
public:
    Node(T data) : data(data), next(NULL){};
    // template<typename T> 
    friend class Stack<T>;
};

template <typename T>
class Stack
{
    Node<T> *head;

public:
    Stack() : head(NULL) {}
    void push(T data)
    {
        Node<T> *n = new Node<T>(data);
        if (head == NULL)
        {
            head = n;
            return;
        }
        n->next = head;
        head = n;
    }

    bool empty()
    {
        if (head == NULL)
            return true;
        return false;
    }

    T top()
    {
        return head->data;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "NOT POSSIBLE" << endl;
            return;
        }
        Node<T> *del = head;
        head = del->next;
        del->next = NULL;
        delete del;
    }
};

int main()
{
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    while (!s.empty())
    {
        cout << s.top() << ' ' << endl;
        s.pop();
    }
    return 0;
}
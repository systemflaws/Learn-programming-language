#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class Stack
{
    vector<T> s;

public:
    void push(T data)
    {
        s.push_back(data);
    }

    bool empty()
    {
        return (s.size() == 0);
    }
    
    void pop()
    {
        s.pop_back();
    }

    T top()
    {
        return s[s.size() - 1];
    }
};
int main()
{
    Stack<char> st;
    st.push('a');
    st.push('b');
    st.push('c');
    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
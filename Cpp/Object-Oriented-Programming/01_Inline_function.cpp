#include <iostream>

using namespace std;

/* INLINE FUNCTION: 
Inline replace in compile time. Only for smaller line of code. function do almost zero work.
If recursion,or have static variable, and contains loops or conditionals then don't use in any of the condition.

inline returnType functionName(arguments){}
*/

inline int product(int a, int b) { return a * b; }

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    return 0;
}
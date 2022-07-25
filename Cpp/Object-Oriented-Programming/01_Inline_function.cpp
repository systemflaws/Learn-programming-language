#include <iostream>

using namespace std;

inline int product(int a, int b) { return a * b; }
/*
inline replace in compile time
only for smaller line of code
function do almost zero work
if recursion then don't use, if static variable then don't use
if loops or conditionals don't use
*/

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
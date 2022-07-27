#include <iostream>

using namespace std;

/*  Function Overloading:
    When we have different dataTypes or variable number of arguments.
*/

int add(int a, int b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << add(a, b) << endl;
    cout << add(a, b, c) << endl;
    return 0;
}
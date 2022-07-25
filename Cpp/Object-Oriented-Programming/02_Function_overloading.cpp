#include <iostream>

using namespace std;

int add(int a, int b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }
/*
    Different dataType or number of arguments.
*/

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << add(a, b) << endl;
    cout << add(a, b, c) << endl;
    return 0;
}
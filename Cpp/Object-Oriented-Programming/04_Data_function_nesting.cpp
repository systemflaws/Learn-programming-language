#include <iostream>

using namespace std;

class Binary
{
    string s;
    void checkBinary(string); // can be called inside the public method

public:
    void getBinary();
};
void Binary::getBinary()
{
    cout << "Enter the Binary String: " << endl;
    cin >> s;
    cout << "Checking whether it is binary or not ..." << endl;
    checkBinary(s);
}

void Binary::checkBinary(string s)
{
    bool binary = true;
    int len = s.size();
    if (len == 1)
    {
        if (s[0] == '0' || s[0] == '1')
        {
            cout << "Yes, it is binary." << endl;
        }
        else
        {
            cout << "No, it's not binary." << endl;
        }
        return;
    }
    for (int i = 1; i < len; i++)
    {
        if (s[i] == '0' || s[i] == '1')
        {
            continue;
        }
        binary = false;
        break;
    }
    if (binary)
    {
        cout << "Yes, it is binary." << endl;
    }
    else
        cout << "No, it's not binary." << endl;
    return;
}
int main()
{
    Binary b;
    b.getBinary();
    return 0;
}
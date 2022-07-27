#include <iostream>

using namespace std;

long long expo(int base, int power)
{
    if (power == 0)
        return 1ll;
    long long answer = 1;
    for (int p = 1; p <= power; p++)
    {
        answer = answer * base;
    }
    return answer;
}

long long bitExpo(int base, int power)
{
    if (power == 0)
        return 1ll;
    long long answer = 1;
    while (power)
    {
        if (power & 1)
        {
            answer = answer * base;
            power--;
        }
        base = base * base;
        power >>= 1;
    }
    return answer;
}

long long recursiveBitExpo(int base, int power)
{
    if (power == 0)
        return 1ll;
    long long ans = recursiveBitExpo(base, power / 2);
    ans = ans * ans;
    if (power & 1)
    {
        return base * ans;
    }
    return ans;
}

int main()
{
    int base, power;
    cin >> base >> power;
    cout << expo(base, power) << endl;
    cout << bitExpo(base, power) << endl;
    cout << recursiveBitExpo(base, power) << endl;
}
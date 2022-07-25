#include <bits/stdc++.h>

using namespace std;

void printing(vector<int> &numbers)
{
    for (int i : numbers)
        cout << i << " ";
    cout << endl;
}

int linearSearch(vector<int> &nums, int target) // return index;
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1; // Not Found
}

bool linearSearch(vector<int> &nums, int target) // return true if found else false;
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            return true;
        }
    }
    return false; // Not Found
}

int main()
{
    cout << "Enter the number of elements: ";
    int numberOfElements;
    cin >> numberOfElements;
    cout << "Enter the values of " << numberOfElements << " Elements: ";
    vector<int> numbers(numberOfElements);
    for (int &i : numbers)
    {
        cin >> i;
    }
    cout << "Enter the target Value: ";
    int target;
    cin >> target;
    cout << "Elements : ";
    printing(numbers);
    int index = linearSearch(numbers, target);
    cout << index << endl;
}
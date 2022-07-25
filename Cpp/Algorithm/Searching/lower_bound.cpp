#include <bits/stdc++.h>

using namespace std;

void printing(vector<int> &numbers)
{
    for (int i : numbers)
        cout << i << " ";
    cout << endl;
}
int lowerBound(vector<int> &nums, int target) // return index;
{
    if (target < nums[0])
        return -1;
    int index = -1;
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            index = mid;
            low = mid + 1;
        }
    }
    return index; // not found
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
    int index = lowerBound(numbers, target);
    cout << index << endl;
}
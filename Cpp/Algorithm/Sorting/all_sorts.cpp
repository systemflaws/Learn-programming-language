#include <bits/stdc++.h>

using namespace std;

void printing(vector<int> &numbers)
{
    for (int i : numbers)
        cout << i << " ";
    cout << endl;
}

bool compare(int a, int b)
{
    return a > b;
}
void bubbleSort(vector<int> &numbers)
{
    int n = numbers.size();
    if (n <= 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 1; j < (n - i); j++)
        {
            if (compare(numbers[j - 1], numbers[j]))
            {
                swapped = true;
                swap(numbers[j - 1], numbers[j]);
            }
        }
        if (swapped == false)
        {
            return;
        }
    }
}

void insertionSort(vector<int> &nums)
{
    if (nums.size() <= 1)
        return;
    for (int i = 1; i < nums.size(); i++)
    {
        int j = i;
        while (j > 0 && compare(nums[j - 1], nums[j]))
        {
            swap(nums[j - 1], nums[j]);
            j--;
        }
    }
}

void selectionSort(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (compare(nums[i], nums[j]))
            {
                swap(nums[i], nums[j]);
            }
        }
    }
}

void countingSort(vector<int> &nums)
{
    int maxElement = *max_element(nums.begin(), nums.end());
    vector<int> counting(maxElement + 1, 0);
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        counting[nums[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= maxElement; i++)
    {
        for (int count = 0; count < counting[i]; count++)
        {
            nums[j] = i;
            j++;
        }
    }
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
    cout << "Elements before sorting : ";
    printing(numbers);
    cout << "1. Bubble sort\n2. Insertion sort \n3. Selection Sort \n4. Counting Sort" << endl;
    cout << "Enter the value for which algorithm you want to use: ";
    int value;
    cin >> value;
    // Sorting function
    switch (value)
    {
    case 1:
        bubbleSort(numbers);
        break;
    case 2:
        insertionSort(numbers);
        break;
    case 3:
        selectionSort(numbers);
        break;
    case 4:
        countingSort(numbers);
        break;
    }
    cout << "Elements after sorting : ";
    printing(numbers);
}
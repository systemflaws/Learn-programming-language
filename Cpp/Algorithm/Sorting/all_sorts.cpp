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

void merge(vector<int> &numbers, int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    vector<int> temp(high - low + 1, 0);
    while (i <= mid && j <= high)
    {
        if (numbers[i] <= numbers[j])
        {
            temp[k] = numbers[i];
            i++;
        }
        else
        {
            temp[k] = numbers[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k++] = numbers[i++];
    }
    while (j <= high)
    {
        temp[k++] = numbers[j++];
    }
    for (int index = 0; index < temp.size(); index++)
    {
        numbers[low + index] = temp[index];
    }
    return;
}

void mergeSort(vector<int> &numbers, int low, int high)
{
    // base Case
    if (low >= high)
    {
        return;
    }
    // recursive Case
    int mid = low + (high - low) / 2;
    mergeSort(numbers, low, mid);
    mergeSort(numbers, mid + 1, high);
    return merge(numbers, low, mid, high);
}

int qSort(vector<int> &numbers, int low, int high)
{
    int pivot = high; // last element
    int i = low - 1; // initialize
    int j = low; // Running pointer
    while (j < pivot)
    {
        if (numbers[j] <= numbers[pivot]) // When element is less then pivot then swap with the i + 1 and j.
        {
            swap(numbers[++i], numbers[j]);
        }
        j++;
    }
    swap(numbers[++i], numbers[pivot]);// to place the pivot in the right position
    return i; // returning the pivot element position
}

void quickSort(vector<int> &numbers, int low, int high) // 
{
    // base Case
    if (low >= high)
    {
        return;
    }
    // recursive Case
    int index = qSort(numbers, low, high); // find the index of the pivot to divide array
    // cout << index << endl;
    quickSort(numbers, low, index - 1); // recursively sort left part
    quickSort(numbers, index + 1, high); // recursively sort right part
    return;
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
    cout << "1. Bubble sort\n2. Insertion sort \n3. Selection Sort \n4. Counting Sort \n5. Merge Sort \n6. Quick Sort" << endl;
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
    case 5:
        mergeSort(numbers, 0, numbers.size() - 1);
        break;
    case 6:
        quickSort(numbers, 0, numbers.size() - 1);
        break;
    }
    cout << "Elements after sorting : ";
    printing(numbers);
}
#include <iostream>
#include <vector>

using namespace std;

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
void printing(vector<int> &numbers)
{
    for (auto i : numbers)
    {
        cout << i << ' ';
    }
    cout << endl;
}
int main()
{
    int numberOfElements;
    cin >> numberOfElements;
    vector<int> numbers(numberOfElements);
    for (int &i : numbers)
    {
        cin >> i;
    }
    cout << "Number before sorting: " << endl;
    printing(numbers);
    quickSort(numbers, 0, numberOfElements - 1); // Average: O(NlogN) and Worst: O(N*N) when array is sorted 
    cout << "Number after sorting: " << endl;
    printing(numbers);
}
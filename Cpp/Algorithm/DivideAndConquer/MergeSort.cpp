#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &numbers, int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    vector<int> temp(high - low + 1, 0); // Create an auxiliary Space array for storing sorted arrays
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
    while (i <= mid) // When left-side elements left
    {
        temp[k++] = numbers[i++];
    }
    while (j <= high) // When right-side elements left
    {
        temp[k++] = numbers[j++];
    }
    for (int index = 0; index < temp.size(); index++) // Inserting back the elements
    {
        numbers[low + index] = temp[index];
    }
    return;
}

void mergeSort(vector<int> &numbers, int low, int high) // O(logN)
{
    // base Case
    if (low >= high)
    {
        return;
    }
    // recursive Case
    int mid = low + (high - low) / 2;
    mergeSort(numbers, low, mid); // low to mid
    mergeSort(numbers, mid + 1, high); // mid + 1 to high
    return merge(numbers, low, mid, high); // low to high O(N)
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
    mergeSort(numbers, 0, numberOfElements - 1); // O(NlogN)
    cout << "Number after sorting: " << endl;
    printing(numbers);
}
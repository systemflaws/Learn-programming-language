#include <iostream>

using namespace std;

template <typename T> // Template creation
class Vector
{
    int currentSize; // 
    int maxSize;
    T *ptr; // pointer to the Type T memory

public:
    Vector(int ms = 1) : currentSize{0}, maxSize{ms}, ptr{new T[maxSize]} // Intialisation List
    {}

    void push_back(const T value)
    {
        if (currentSize == maxSize)
        {
            T *oldPtr = ptr;
            maxSize = 2 * maxSize;
            ptr = new T[maxSize]; // bigger size array is created
            for (int i = 0; i < currentSize; i++)
            {
                ptr[i] = oldPtr[i];
            }
            delete[] oldPtr; // To get ride of memory leak
        }
        ptr[currentSize++] = value;
    }

    void pop_back()
    {
        if (!empty())
        {
            currentSize--;
            return;
        }
        cout << "Already Empty" << endl;
    }

    bool empty() const
    {
        return currentSize == 0;
    }

    T front() const
    {
        if (!empty())
        {
            return ptr[0];
        }
        cout << "Empty ";
        return -1;
    }

    T back() const
    {
        if (!empty())
        {
            return ptr[currentSize - 1];
        }
        cout << "Empty ";
        return -1;
    }

    T at(const int index) const
    {
        if (index < 0 || index >= currentSize)
        {
            cout << "Segmentation Fault";
            return -1;
        }
        return ptr[index];
    }

    int size() const
    {
        return currentSize;
    }

    int capacity() const
    {
        return maxSize;
    }

    T operator[](const int index) const
    {
        if (index < 0 || index >= currentSize)
        {
            cout << "Segmentation Fault";
            return -1;
        }
        return ptr[index];
    }

    void printing() const
    {
        for (int i = 0; i < currentSize; i++)
        {
            cout << ptr[i] << ' ';
        }
        cout << endl;
    }

};

int main()
{
    // Vector v1(1); Without Template
    Vector<int> v1(1);
    cout << v1.size() << endl; // cs=0, ms = 1
    v1.push_back(10);  // 10
    v1.push_back(11); // 10, 11
    cout << v1.back() << endl; // 11
    cout << v1.front() << endl; // 10
    v1.push_back(12); // 10, 11, 12
    v1.printing(); // 10, 11, 12
    v1.pop_back(); // 10, 11
    v1.printing(); // 10, 11
    cout << v1.at(1) << endl; // 11
}
#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A)
{
    int len = A.size();
    int max_sum = A[0];
    int curr_sum = A[0];
    for (int i = 1; i < len; i++)
    {
        if (curr_sum < 0)
            curr_sum = 0;
        curr_sum += A[i];
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
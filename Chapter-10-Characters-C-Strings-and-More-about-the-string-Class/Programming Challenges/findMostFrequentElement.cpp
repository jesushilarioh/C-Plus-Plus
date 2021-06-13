#include <iostream>

using namespace std;

int findMostFrequentElement(int[], int);

int main()
{
    int array[11] = {9, 9, 20, 3, 10, 9, 20, 209, 20, 10, 10};

    cout << findMostFrequentElement(array, 11) << endl;

    return 0;
}
int findMostFrequentElement(int A[], int n)
{
    int maxValue = 0, maxCount = 0, i, j;

    for (i = 0; i < n; ++i)
    {
        int count = 0;

        for (j = 0; j < n; ++j)
        {
            if (*(A + j) == *(A + i))
                ++count;
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxValue = *(A + i);
        }
        else if (maxCount == 1)
            maxValue = -1;
        else if (count == maxCount)
            maxValue = min(maxValue, A[i]);

    }
    // cout << "Max Count = " << maxCount << endl;
    return maxValue;
}
int min (int ans, int A_int)
{
    return ans < A_int ? ans : A_int;
}
#include <iostream>

int findMostFrequentElement(int[], int);

int main()
{
    int array[11] = {1, 9, 2, 3, 1, 9, 29, 209, 2, 1, 6};

    return 0;
}
int findMostFrequentElement(int A[], int n)
{
    int max_freq = 0,
        ans = -1;

    for (int i = 0; i < (n - 1); i++)
    {
        int curr_freq = 1;

        for (int j = (i + 1); j < (n - 1); j++)
        {
            if (A[j] == A[i])
                curr_freq = (curr_freq + 1);
        }
        if (max_freq < curr_freq)
        {
            max_freq = curr_freq;
            ans = A[i];
        }
        else if (max_freq == curr_freq)
            ans = min(ans, A[i]);

    }

    return ans;
}
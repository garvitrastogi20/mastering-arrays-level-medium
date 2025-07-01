// KADANE'S ALGORITHM

#include <bits/stdc++.h>
using namespace std;

int maxisum(vector<int> v, int n)
{
    int sum = 0, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    if (maxi < 0)
    {
        cout << "Empty subarray." << endl;
        return 0;
    }
    return maxi;
}

int main()
{
    vector<int> v = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = v.size();

    int maxsum = maxisum(v, n);
    cout << maxsum;
    return 0;
}

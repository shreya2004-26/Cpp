#include <bits/stdc++.h>
using namespace std;

int subarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                if (!sqrt(arr[k]))
                    cout << " ";
                else
                {
                    cout << arr[k] << " ";
                }
            }
            cout << endl;
        }
    }
}
int main()
{
    int arr[4] = {3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The subarray is: ";
    subarray(arr, n);
    return 0;
}
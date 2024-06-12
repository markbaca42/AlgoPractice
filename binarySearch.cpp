// C++ program to implement iterative Binary Search
#include <iostream>
#include <cmath>

using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int low, int high, int x)
{
    // iterative solution
    //  while (high >= low)
    //  {
    //      int mid = low + (high - low) / 2;

    //     if (arr[mid] == x)
    //     {
    //         return mid;
    //     }
    //     else if (arr[mid] >= x)
    //     {
    //         high = mid;
    //     }
    //     else if (arr[mid] <= x)
    //     {
    //         low = mid;
    //     }
    // }
    // return -1;

    // recursive solution
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            return binarySearch(arr, mid + 1, high, x);
        }
        else if (arr[mid] > x)
        {
            return binarySearch(arr, low, mid - 1, x);
        }
    }
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 50;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    cout << result << endl;
    return 0;
}
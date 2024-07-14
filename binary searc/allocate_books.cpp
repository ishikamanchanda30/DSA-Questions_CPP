#include <iostream>
using namespace std;

bool IsPossible(int arr[], int n, int m, int mid)
{
    int student = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else {
            student++;

            if (student > m || arr[i]> mid ) {
                return false;
            }

        }
        pagesum = arr[i];
    }
    return true;
}

int allocateBooks(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        
        if (IsPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return mid;
   
}

int main()
{
    int arr[] = {10, 20, 30, 40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << allocateBooks(arr,5,2);
}
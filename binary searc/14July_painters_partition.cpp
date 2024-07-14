#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int k,int mid) {
    int sum = 0;
    int painter = 1;
    for ( int i = 0; i < n; i++) {
        if (sum + arr[i] <= mid) {
            sum += arr[i];
        }

        else {
            painter++;
            sum = arr[i];
            if (painter > k || arr[i] > mid ) {
                return false;
            }
        }
        
    }
    return true;

}

int PainterPartition ( int arr[], int n, int k) {
    int sum =  arr[0];
    for (int i = 0; i < n; i++) {
        sum+=arr[i];
    }
    int s = 0;
    int e = sum;
    int mid = ( s + e) / 2;
    int ans = -1;

    while( s <= e) {
        if( isPossible(arr,n,k,mid) ) {
            ans = mid;
            e = mid-1;
        }
        else {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return mid;
}

int main() {
    int arr[6] = {5,5,5,5,5};
    cout << PainterPartition(arr,5,2);
}
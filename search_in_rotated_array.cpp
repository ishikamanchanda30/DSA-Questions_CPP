#include <iostream>
using namespace std;

int Pivot(int arr[],int n) {
    int start = 0, end = n-1;
    int mid = start +(end-start)/2;
    while(start<end) {
        if (arr[mid]>=arr[0]) {
            start=mid+1;
        }
        else {
            end=mid;
        }
        mid=start + (end- start)/2;
    }
    return start;
}

int BinarySearch(int arr[], int start,int end,int k) {
    int mid = start + (end-start)/2;
    while(start<=end) {
        if (arr[mid]==k) {
            return mid;
        }
        if (arr[mid]<k) {
            start=mid+1;
        }
        else {
            end=mid;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int Search(int arr[],int start,int end,int k,int n) {
    int pivot = Pivot(arr, n);
    if (arr[pivot]==k) {
        return pivot;
    }
    if (arr[pivot]<=k && k<=arr[end]) {
        return BinarySearch(arr, pivot+1, end, k);
    }
    else {
        return BinarySearch(arr, start, pivot-1, k);
    }
}

int main() {
    int start=0;
    int n=8,k=9;
    int end;
    int mid;
    int arr[]={7,8,9,1,2,3,4,5,6};
    cout << "Calling pivot function, Pivot index is : " << Pivot(arr,9) << endl;
    cout << "Calling binary search, Element found at :" <<BinarySearch(arr,0,8,5) << endl;
    cout << "Searching element in Search : " << Search(arr,start,end,k,n);
}
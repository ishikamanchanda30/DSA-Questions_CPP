#include <iostream>
#include <vector>
using namespace std;

int findFloor(vector<long long> &v, long long n, long long x) {

    // Your code here
    long long s = 0;
    long long e = n-1;
    long long ans = -1;
    while( s <= e ) {
        long long mid = s + ( e - s )/2;
        if( v[mid] == x ) {
            return mid;
        }
            
        if ( v[mid] > x) {
            e = mid - 1;
        }
        else {
            ans = s;
            s = mid + 1;
        }
    }
    return ans;
}

int main() {

    vector<long long> arr = {1,2,8,10,11,12,19};
    long long n = arr.size();
    long long x = 0;
    cout << findFloor(arr, n, x) << endl;
}
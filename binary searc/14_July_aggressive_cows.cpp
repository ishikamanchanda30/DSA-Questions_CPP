#include <iostream>
using namespace std;

bool isPossible(int stalls[],int k, int mid) {
   int cowCount = 1;
   int coordinate = stalls[0];
   int n=6;
   for ( int i = 0; i < n; i++) {
        if ( stalls[i] - coordinate >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true;
            }
            coordinate=stalls[i];
        }
   }
   return false;

}

int aggressiveCows (int stalls[], int k) {
    int s =0;
    int n = 6;
    int maxi = -1;
    for ( int i =0; i < n; i++) {
        maxi=max(maxi,stalls[i]);
    }
    int e = maxi;
    int mid = (s + e ) / 2;
    int ans = -1;

    while( s <= e) {
        if( isPossible(stalls,k,mid) ) {
            ans - mid;
            s = mid + 1;
        }
        else {
            e = mid- 1;
        }
        mid = (s + e) /2;
    }
    return mid;

}

int main() {
    int stalls[100]= {1,2,3,4,5,6};
    cout << aggressiveCows(stalls,2);
}
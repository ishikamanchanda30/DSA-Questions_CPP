#include<iostream>
#include <vector>
using namespace std;

int Binary(vector<int> nums, int target){
    int s = 0;
    int e = nums.size() - 1;

    while ( s <= e ) {
        int mid = s + (e - s ) / 2;
        if( nums[mid]== target) {
            return mid;
        }
        if( nums[mid] > target ) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return s;
}
int main() {
    vector<int> nums = {1,2,3,5,6};
    int target = 4;
    int ans = Binary(nums,target);
    cout << ans;

}

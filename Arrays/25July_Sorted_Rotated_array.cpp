#include <iostream>
#include <vector>
using namespace std;

bool sortedRotated(vector<int>nums) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++) {
        if( nums[i-1] > nums[i] ) {
            count++;
        }
    }
    if( nums[nums.size()-1] < nums[0] ) {
        count++;
    }
    return count <=1;
}

int main() {
    int n;
    cout <<"Enter no of elements : ";
    cin >> n;
    vector<int> array(n);
    for(int i=0;i<n;i++) {
        int ele;
        cin >> ele;
        array[i] = ele;
    }
    cout << sortedRotated(array);

}
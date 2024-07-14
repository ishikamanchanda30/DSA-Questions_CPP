#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector <int> Amerge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for( int i = 0 , j = m ; i < n; j++,i++ ) {
        nums1[j] = nums2[i]; 
    } 
        
    sort(nums1.begin(),nums1.end());
    return nums1;
}
int main() {
    vector<int> v(9);
    int n = v.size();
    v.push_back(11);
    v.push_back(22);
    v.push_back(33);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    
    vector<int> v2(3);
    v2.push_back(55);
    v2.push_back(66);
    v2.push_back(77);
    int m =v2.size();
    vector <int> ans = Amerge(v,n,v2,m);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

}

#include <iostream>
#include <vector>
using namespace std;

vector<int> SumArray(vector<int> A, vector<int> B) {
    int sum = 0;
    int carry = 0;
    int i = A.size();
    int j = B.size();
    vector<int> ans;
    while ( i >= 0 && j >= 0 ) {
        int v1 = A[i];
        int v2 = B[j];
        int sum = v1 + v2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

    }
    while ( i >= 0) {
        int v1 = A[i];
        int sum = v1 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

    }
    while ( j >= 0) {
        int v1 = B[j];
        int sum = v1 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

    }
    reverse(ans.begin(),ans.end());
    return ans;

}

int main() {
    vector<int> A{1,2,3,4,5};
    vector<int> B{6,7,8,9,1,1};
    SumArray(A,B);

}
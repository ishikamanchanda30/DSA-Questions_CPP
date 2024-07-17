#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void MergeSorted(vector <int> v, vector <int> v2, int n, int m) {

    for (int i=0 , j=m ; i<n ; i++,j++) {
        v[i]=v2[j];
    }
    sort(v.begin(),v.end());

}

int main() {
    vector<int> v(9);
    int m = v.size();
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
    int n = v2.size();

    MergeSorted(v,v2,n,m);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

}
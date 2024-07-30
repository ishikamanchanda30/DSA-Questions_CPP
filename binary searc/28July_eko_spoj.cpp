#include <iostream>

#include <algorithm>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr,int n, int m,int mid) {
    int sum=0;
    for ( int i = 0; i <n; i++ ) {
        if( arr[i] >= mid ) {
            sum += (arr[i] - mid);
        }
    }
    if(sum >= m) {
        // cout << "\nTRUE";
        return true;
    }
    else {
        // cout << "\nFALSE";
        return false;
    }
    

}
int EkoSpoj(vector<int>arr,int n,int m) {
    int s =0;
    int e=*max_element(arr.begin(),arr.end());
    int mid = s + (e - s)/2;
    int ans = -1;
    // cout <<"---------VERY BEGINNING---------\n\n";
    // cout<< "START : " << s << " MIDDLE : " << mid<< " END : " << e;
    while(s<=e) {
        if (isPossible(arr,n,m,mid)) {
            ans = mid;
            s= mid +1;
            // cout << " --- IF --- \nANSWER : " << ans << "  START : " << s << "MIDDLE : " << mid << " END : " << e;

        }
        else {
            e = mid - 1;
            // cout << " --- ELSE --- \nANSWER : " << ans << "  START : " << s << "MIDDLE : " << mid << " END : " << e;
        } 
        mid = s + (e - s)/2;

        // cout <<"\nUPDATED MIDDLE : " <<mid;

    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of trees: ";
    cin >> n;
    int m;
    cout << "Enter the required meters of wood (in METERS) : ";
    cin >> m;

    vector<int> arr(n);
    for (int i =0; i<n; i++) {
        cout<<"Enter height of tree " << i <<" : ";
        cin >>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout << EkoSpoj(arr,n,m);
}
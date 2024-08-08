#include <iostream>
#include <vector>
using namespace std;

int main() {
    int mrow , ncol;
    cin >> mrow >> ncol;
    int arr [mrow][ncol];

    for ( int i = 0 ; i < mrow ; i++) {
        for (int j = 0 ; j < ncol ; j++) {
            cin >> arr[i][j];
        }
    }
    for ( int i = 0 ; i < mrow ; i++) {
        for (int j = 0 ; j < ncol ; j++) {
            cout << "[ " << arr[i][j] << " ]";
        }
        cout << endl;
    }
    vector<int> ans;

    for ( int col = 0; col < ncol; col++){
        
        if ( col&1) {
            // odd index --> bottom to top
            for ( int row = mrow-1; row >= 0;row--) {
                ans.push_back(arr[row][col]);
            }
        }
        else {
            for ( int row = 0; row < mrow; row++) {

                ans.push_back(arr[row][col]);
            }
            // even index --> top to bottom
        }
    }

}
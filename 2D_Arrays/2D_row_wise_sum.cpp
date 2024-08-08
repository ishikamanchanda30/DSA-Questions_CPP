#include <iostream>
using namespace std;

int LargestRowSum (int arr[][4],int row,int col) {
    int maxi = INT_MIN;
    int num = -1;
    cout << "\n\n---ROW WISE SUM---\n";
    for ( int i = 0; i < row; i++) {
        int sum = 0;
        for ( int j = 0; j < col ; j++ ) {
            sum += arr[i][j];
        }
        if (sum > maxi ) {
            maxi = sum;
            num = i;
        }
    }  
    cout <<"Maximum sum is " << maxi << " of row " << num;  
    return maxi;
}

int main() {
    int row;
    cin >> row ;
    int arr[row][4];
    
    for ( int i = 0; i < row; i++) {
        for ( int j = 0; j < 4 ; j++ ) {
            cin >> arr[i][j];
        }
    }

    for ( int i = 0; i < row; i++) {
        for ( int j = 0; j < 4 ; j++ ) {
            cout << "[ " << arr[i][j] << " ]";
        }
        cout << endl;
    }

// TO PRINT ROW WISE SUM
    cout << "\n\n---ROW WISE SUM---\n";
    for ( int i = 0; i < row; i++) {
        int sum = 0;
        for ( int j = 0; j < 4 ; j++ ) {

            sum += arr[i][j];
        }
        cout <<"[ " << sum << " ]" << endl;
    }   
    cout << "\n\n---COLUMN WISE SUM---\n";
// TO PRINT COLUMN WISE SUM
    for ( int i = 0; i < 4; i++) {
        int sum = 0;
        for ( int j = 0; j < row ; j++ ) {

            sum += arr[j][i];
        }
        cout <<"[ " << sum << " ]";
    }  

    LargestRowSum(arr,row,4);

}
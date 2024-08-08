#include <iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int col) {
    // COMPLEXITY = O(row*col)
    for ( int i = 0; i < row;i++){
        for(int j = 0; j < col; j++) {
            if(target == arr[i][j]) {
                return 1;
            }
            
        }
    }
    return 0;

}


int main() {
    int row = 3;
    int col = 4;
    int arr[3][4];
/*
     COLUMN WISE INPUT
    for ( int i = 0; i < col;i++){
        for(int j = 0; j < row; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[j][i];
        }
    }
*/
    for ( int i = 0; i < row;i++){
        for(int j = 0; j < col; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    // PRINTING THE ARRAY 
    for ( int i = 0; i < row;i++){
        for(int j = 0; j < col; j++) {
            cout << "[" << arr[i][j] << "] ";

        }
        cout << endl;
    }

    // SEARCHING A TARGET ELEMENT
    cout <<"Enter element to search : ";
    int target;
    cin >> target;

    if (isPresent(arr,target,row,col)) {
        cout << "Element is present in the array" << endl;
    }
    else {
        cout << "Not Found";
    }

}

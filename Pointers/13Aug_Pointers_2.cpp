#include <iostream>
using namespace std;

int main() {
    int arr[10]= {2,4,6,8};
    cout << "Address of 1 element : " << arr << "   ";
    int *ptr1 = &arr[0];
    cout << " " << &arr;
    cout << " " << ptr1 << endl;

    // Value at arr[0]
    cout <<"*arr : " << *arr << endl;
    *arr + 1;
    // 2 + 1 ( arr[0] + 1)
    cout <<"*arr + 1 : " << *arr + 1 << endl;

    // arr[1]
    cout <<"*(arr + 1) : " << *(arr + 1) << endl;


    // arr[i] = * (arr + i)
    // i[arr] = * (i + arr)
    // yeh dono same thing hai - ERROR NAHI DEGA

    /* 

         > POINTERS v/s ARRAYS
         > SIZE :

            pointers : 8 bytes 
            arrays   : no of blocks * data type size

         > Symbol table ka content : cannot be changed.

    */

   
}
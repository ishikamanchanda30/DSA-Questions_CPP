#include <iostream>
using namespace std;

int main() {
    int num = 5;
    // address of opterator : &
    cout <<"Adress of num is : " << &num << endl;
    // address is stored in hexadecimal
    // Pointer stores address

    // * CREATE A POINTER

    int *ptr = &num;
    // Value stored in PTR : ( address of num )
    cout <<"Adress of num is : " << ptr << endl;
    // * Access value in PTR : ( value stored in that pointer address )
    cout <<"Value of num is : " << *ptr << endl;
    //  Ab PTR ka address kya hai
    cout <<"Adress of ptr is : " << &ptr << endl;

    // * is a dereference operator 
    cout << "Size of pointer PTR : " << sizeof(ptr) << endl;

    // * size of PTR is always 8
    // no matter what data type poitner it stores

    // DO NOT USE this type of declaration : points to garbage address we dont know.
    int *p1;
    // NULL POINTER :
    int *p2 = 0;

    (*ptr)++;
    cout <<"New Value of num is : " << *ptr << endl;

    // COPYING A POINTER :
    int *p_copy = ptr;

    cout << " *p copy : " << p_copy << endl;
    cout << " value *p copy : " << *p_copy << endl;

    // IMPORTANT CONCEPT
    (*ptr)++;
    cout << "Value incremented : " << *ptr << endl;

}
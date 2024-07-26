#include <iostream>
using namespace std;

int main() {
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    cout << "Your name is : ";
    cout << name;
    // Adding NULL CHARACTER
    name[2] = '\0';
    cout << "\nNew Name is : ";
    cout << name;
    // Last character is always '\0' (null character)
    // Space / Tab / Enter stops the execution
    // cin >> name; // stops at space
    // cin.get(name, 20); // stops at 20 characters


    // Find length of String
    
}
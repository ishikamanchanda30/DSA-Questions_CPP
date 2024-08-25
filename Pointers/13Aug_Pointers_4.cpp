#include <iostream>
using namespace std;

int main() {
    int value = 5;
    int *p_value = &value;
    // copy a pointer
    int *q = p_value; // points to the same box value
    // double pointer :
    int **q_value = &p_value;

}
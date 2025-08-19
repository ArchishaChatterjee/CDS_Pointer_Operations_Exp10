// EXP 10D : Reversing an array using pointers

#include <iostream>

using namespace std;

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    
    int* start = array;
    int* end = array + 4;

    cout << "Original Array: ";
    for (int* ptr = start; ptr <= end; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed Array: ";
    for (int* ptr = array; ptr <= array + 4; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    return 0;
}


/*
OUTPUT :
Original Array: 1 2 3 4 5 
Reversed Array: 5 4 3 2 1 

*/

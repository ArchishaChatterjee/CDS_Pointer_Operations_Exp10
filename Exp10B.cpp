// EXP 10B : Call by reference (pointers)
# include <iostream>
using namespace std;

void swap (int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;   
    return ;
    }

int main(){
    int a = 10;
    int b = 20;
    cout <<  a << endl;
    swap(&a, &b);
    cout << b << endl;
    return 0;

}

/*
OUTPUT :
10
20

*/

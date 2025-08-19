// EXP 10C : To print conditions for salary increment

#include <iostream>
using namespace std;

int increment(){
        cout << "Enter your salary : " ;
        int sal;    
        cin >> sal;
        cout << "Your salary is " << sal*1.2 << endl;
        return 0;
}

int main(){
    bool flag;
    int exp;
    int count = 0;
  
    cout << "----Enter 1 for yes and 0 for no ----" << endl;
    cout << "More than 1 year of experince ? :";
    cin >> exp;
    if (exp >= 1){
        flag == true;
    count += 1;
        }
    else{
        flag == false;
        }
    int ans;
    cout << "Do you make research projects? :" ;
    cin >> ans;
    if (ans == 1){
        flag == true;
        count += 1;
    }
    else{
        flag == false;
    }
    int proj;
    cout << "Do you make new research projects :";
    cin >> proj;
    if (proj == 1){
        flag == true;
        count += 1;
        }
        else{
            flag == false;
            }
        
        int profit;
        cout << "Is profit more than 1,00,000 :";
        cin >> profit;
        if (profit == 1){
            flag == true;
            count += 1;
            }
            else{
                flag == false;
                }
    if (count >=3){
        increment();
    }
    else{
        cout << "You are not eligible for the salary increment" << endl;
        }


    return 0;
}

/*
OUTPUT :
----Enter 1 for yes and 0 for no ----
More than 1 year of experince ? :1
Do you make research projects? :1
Do you make new research projects :0
Is profit more than 1,00,000 :1
Enter your salary : 20000
Your salary is 24000
*/

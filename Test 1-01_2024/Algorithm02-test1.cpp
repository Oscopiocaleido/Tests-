/*
An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of its own digits raised to the power of the total number of digits. 
For example, 153 is an Armstrong number because (1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153)
Write a C++ program that given a user entered number (maximum 5 digits), determines if it is an Armstrong number or not.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, nd, d1, d2, d3, d4, d5;
    
    cout<<"Enter a number (max 5 digits): ";cin>>n;
    if(n>99999){
        cout<<"The number must be less than or equal to 5 digits";
        return 0;
    }

    d1= n % 10;
    d2= n / 10 % 10;
    d3= n / 100 % 10;
    d4= n / 1000 % 10;
    d5= n / 10000 % 10;

    if(n<10)
        nd=1;
    else if(n<100)
        nd=2;
    else if(n<1000)
        nd=3;
    else if(n<10000)
        nd=4;
    else if(n<1000000)
        nd=5;
    
    if(pow(d1,nd)+pow(d2,nd)+pow(d3,nd)+pow(d4,nd)+pow(d5,nd)==n){
        cout<<"Number is Amstrong";
    }
    else{
        cout<<"Number is not Amstrong";
    }
    return 0;
}
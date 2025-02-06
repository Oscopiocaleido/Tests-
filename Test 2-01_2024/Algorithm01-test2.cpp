/*
You have a group of LED bulbs where each one turns on independently every few seconds (and then immediately turns off). 
Write a C++ method called “lightSync”, which takes as input an array of integers representing the seconds it takes for each bulb to turn on and returns at what instant all the bulbs would turn on at the same time. 
For example, for the array A[3] = (1,2,3); the result is 6.
*/

#include <iostream>

using namespace std;

int mcd(int a, int b){
    while( b != 0){
        int aux = b;
        b = a % b;
        a = aux;
    }
    return a;
}

int mcm(int a, int b){
    return (a * b)/mcd(a, b);
}

int lightSync(int* arr, int n){
    int result = arr[0];
    for(int i = 1; i<n; i++){
        result = mcm(result, arr[i]);
    }
    return result;
}


int main(){
    int n;
    cin>>n;

    int* arr = new int [n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }

    int seconds = lightSync(arr, n);

    cout<<"All the LED bulbs will light up at the same time on "<<seconds<<" seconds";
    delete [] arr;
    return 0;
}
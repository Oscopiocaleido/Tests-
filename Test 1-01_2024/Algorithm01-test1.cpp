/*
Given 2 integers of up to 8 digits representing dates of the form DDMMYYYY (for example, the number 1010666 would represent January 1, Year 666), 
write an algorithm in C++ that determines,that if the difference in days between the two dates is even then 
the day of the week of the shorter date should be printed and otherwise the day of the week of the longer date should be printed. 
Example 1: for the integers “5010001 1010001”, the output will be “Monday”. 
Example 2: for the integers “2010000 5010000” the output will be “Friday”. 
Assume that February always has 28 days and that January 1st of year 1 is Monday.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int date1, date2, day1, day2, aux;

    cout<<"Enter two dates of up to 8 digits of the format DDMMYYYY: "<<endl;
    cin>>date1;
    cin>>date2;

    day1= date1/1000000;
    day2= date2/1000000;

    aux= day1 - day2;

    if(aux%2==0){
        if(date1<date2){
            switch((day1 - 1)%7){
                case 0:
                cout<<"Monday";
                break;
                case 1:
                cout<<"Tuesday";
                break;
                case 2:
                cout<<"Wednesday";
                break;
                case 3:
                cout<<"Thursday";
                break;
                case 4:
                cout<<"Friday";
                break;
                case 5:
                cout<<"Saturday";
                break;
                case 6:
                cout<<"Sunday";
                break;
            }
        }else if(date2<date1){
            switch((day2 - 1)%7){
                case 0:
                cout<<"Monday";
                break;
                case 1:
                cout<<"Tuesday";
                break;
                case 2:
                cout<<"Wednesday";
                break;
                case 3:
                cout<<"Thursday";
                break;
                case 4:
                cout<<"Friday";
                break;
                case 5:
                cout<<"Saturday";
                break;
                case 6:
                cout<<"Sunday";
                break;
            }
        }
    }else{
        if(date1>date2){
            switch((day1 - 1)%7){
                case 0:
                cout<<"Monday";
                break;
                case 1:
                cout<<"Tuesday";
                break;
                case 2:
                cout<<"Wednesday";
                break;
                case 3:
                cout<<"Thursday";
                break;
                case 4:
                cout<<"Friday";
                break;
                case 5:
                cout<<"Saturday";
                break;
                case 6:
                cout<<"Sunday";
                break;
        }
    }else if(date2>date1){
            switch((day2 - 1)%7){
                case 0:
                cout<<"Monday";
                break;
                case 1:
                cout<<"Tuesday";
                break;
                case 2:
                cout<<"Wednesday";
                break;
                case 3:
                cout<<"Thursday";
                break;
                case 4:
                cout<<"Friday";
                break;
                case 5:
                cout<<"Saturday";
                break;
                case 6:
                cout<<"Sunday";
                break;
        }
    }
  }
return 0;
}
/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Find the average of a set of numbers
 * Created on January 11, 2015, 9:38 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Working Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    int a=28;
    int b=32;
    int c=37;
    int d=24;
    int e=33;
    //Calculate problem
    float sum=a+b+c+d+e;
    float AVGsum=sum/5;
    cout<<"This program is to find the average sum of the following"<<endl;
    cout<<"set of numbers: "<<a<<", "<<b<<", "<<c<<", "<<d<<" and "<<e<<". The sum of these"<<endl;
    //Output results
    cout<<"numbers is "<<sum<<". The average of this sum is "<<AVGsum<<"."<<endl;
    return 0;
}


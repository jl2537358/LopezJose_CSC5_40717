/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Find the mpg
 * Created on January 11, 2015, 11:24 PM
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
    int mlTrvl=375;
    int gls=15;
    //Calculate
    float MPG=mlTrvl/gls;//mpg=miles/gallons
    cout<<"This program is to calculate the amount of MPG a car gets. This car"<<endl;
    cout<<"traveled "<<mlTrvl<<" with "<<gls<<". The MPG it gets is "<<MPG<<"."<<endl;
    return 0;
}


 /*
 *  File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Babylonian Square Root
 * Created on January 13, 2015, 10:16 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float number,guess,r;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //First Pass
    guess=number/2;
    while(abs(guess-r)>.01){
        r=number/guess;
        guess=(guess+r)/2;
    cout<<"Loop -> "<<guess<<endl;
    };//Book Preference;
    //Exit stage right
    return 0;
}
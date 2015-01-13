 /*
 *  File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Babylonian Square Root
 * Created on January 13, 2015, 10:16 AM
 */

//System Libraries
#include <iostream>
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
    r=number/guess;
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"First pass calculation -> "<<guess<<endl;
    //Second Pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the second pass
    cout<<"Second pass calculation -> "<<guess<<endl;
    //Third Pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the third pass
    cout<<"Third pass calculation -> "<<guess<<endl;
    //Fourth Pass
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;  //Repeat so that it becomes more 
    r=number/guess;     //accurate
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;   //More accurate
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;   //Bit more accurate
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    //Output the fourth pass
    cout<<"Fourth pass calculation -> "<<guess<<endl;
    //Exit stage right
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Program that finds the  miles per gallon
 * Created on January 15, 2015, 1:03 PM
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
    int miles;
    int gallons;
    //Output what the program does
    cout<<"This program will calculate your Miles per Gallon."<<endl;
    cout<<"How many miles can your vehicle travel on a full tank?"<<endl;
    //User input
    cin>>miles;
    cout<<"How many gallons can your vehicle hold?"<<endl;
    cin>>gallons;
    //Calculation for mpg
    int mpg=miles/gallons;
    cout<<"Your vehicle has "<<mpg<<" Miles per Gallon."<<endl; 
    return 0;
}


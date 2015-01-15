/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Find the price of tickets -Total
 * Created on January 15, 2015, 1:38 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    cout<<setprecision(2);
    //Declare variables
    float clsA=15.00;
    float clsB=12.00;
    float clsC=9.00;
    int tcktA,tcktB,tcktC;
    //Output program instructions
    cout<<"This program is used to find the cost of buying class A,B,C tickets"<<endl;
    cout<<"How many class A tickets were purchased?"<<endl;
    cin>>tcktA;
    cout<<"How many class B tickets were purchased?"endl;
    cin>>tcktB;
    cout<<"How many class C tickets were purchased?"endl;
    cin>>tcktC;
    //Perform calculations
    return 0;
}


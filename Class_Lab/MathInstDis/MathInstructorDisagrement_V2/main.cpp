/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Created on January 7, 2015, 11:17 AM
 *     Purpose: how easy computers can make mistakes
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare 3 Variables
    float a,b,c;
    //Prompt for a and b
    cout<<"Input 2 float values"<<endl;
    cin>>a>>b;
    //Sum the values
    c=a+b;
    //Output the results
    cout<<c<<" = "<<a<<" + "<<b<<endl;
    //Exit the stage
    return 0;
}
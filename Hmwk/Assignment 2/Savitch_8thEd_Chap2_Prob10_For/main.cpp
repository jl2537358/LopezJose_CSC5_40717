 /*
 *  File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Solving for problem 10 savitch -for
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
    int sum=0, sumNeg=0,sumPos=0,sumEven=0,sumOdd=0;
    int input;
    //Prompt for a value and sum it
    for(int count=1;count<=10;count++){
    cout<<endl<<"Input an integer value!"<<endl;
    cin>>input;
    sum+=input;
    if(input>0)sumPos+=input;
    else sumNeg+=input;
    if(input%2)sumOdd+=input;
    else sumEven+=input;
    }
    //Output the results
    cout<<"Sum =          "<<sum<<endl;
    cout<<"Positive Sum = "<<sumPos<<endl;
    cout<<"Negative Sum = "<<sumNeg<<endl;
    cout<<"Even Sum =     "<<sumEven<<endl;
    cout<<"Odd Sum =      "<<sumOdd<<endl;
    //Exit stage right
    return 0;
}
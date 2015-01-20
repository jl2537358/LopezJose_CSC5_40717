/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: find the amount of insurance that is recommended
 * Created on January 17, 2015, 2:45 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//convert to percent
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    int InsRcmd=80;//insurance recommended in percent
    int pptRpC;//property replacement cost
    //output the program info
    cout<<"This program is used to find the recommended insurance"<<endl;
    cout<<"that should be bought for a property. Using 80% as our"<<endl;
    cout<<"recommended amount."<<endl;
    //ask for input
    cout<<"Please input the amount it would cost to replace said building/home."<<endl;
    cout<<"$ ";
    cin>>pptRpC;
    //Calculate the amount that should be covered
    int RcCvg=pptRpC*InsRcmd/CONVPCT;
    //output the results
    cout<<"The amount that should be covered by insurance is:"<<endl;
    cout<<"$ "<<RcCvg<<endl;
    //Exit correctly
    return 0;
}
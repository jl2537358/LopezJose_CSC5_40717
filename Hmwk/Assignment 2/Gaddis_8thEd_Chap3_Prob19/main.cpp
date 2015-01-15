/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Car Payment
 * Created on January 12, 2015, 11:26 AM
 */

//System Library
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Delcare variables
    float intRate=0.0319f;
    float msrplus=4e4f;//Loan amount for Buick Avenir
    char nPaymnt=60;//Number of monthly payments
    //Calculate the monthly payments
    float temp=pow((1+intRate),nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //Output the inputs
    cout<<"Interest per year = "<<intRate*100<<endl;
    cout<<"Number of payments = "<<static_cast<int>(nPaymnt)<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;
    //Output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
    return 0;
}


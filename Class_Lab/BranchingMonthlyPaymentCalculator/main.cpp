/* 
 * File:   main.cpp
 * Author: rcc
 * Purpose: calculator for monthly payments
 * Created on January 14, 2015, 10:35 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float i;//Interest rate
    float t;//Temp variable
    float l;//Loan amount
    unsigned short n;//Number of months
    float mp;//Monthly Payment
    //Input the variables required
    cout<<"What is the interest rate in percent per year? (format float)"<<endl;
    cin>>i;
    i/=(100*12);//Convert to decimal
    cout<<"What is the loan amount $'s (floating format)"<<endl;
    cin>>l;
    cout<<"Number of monthly Payments (format integer)"<<endl;
    cin>>n;
    //Calculate the monthly payment
    if(i<=0){
        mp=l/n;
    }else{
        t=pow(1+i,n);
        mp=i*t*l/(t-1);
    }
    //Display the results
    cout<<fixed<<setprecision(2);
    cout<<"Your monthly payment = $"<<mp<<endl;
    //Exit stage right!
    return 0;
}


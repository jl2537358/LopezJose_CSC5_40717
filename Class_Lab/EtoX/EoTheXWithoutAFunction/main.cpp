/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: E to th X with no function
 * Created on January 21, 2015, 8:53 AM
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
    float approxEx=1,exactEx,x;
    //Prompt user
    cout<<"What x in e^x would you like to use?"<<endl;
    cin>>x;
    //Calculate e^x
    for(int n=1;n<=13;n++){
        int nFactrl=1,n;
         //Do the calculation
        for(int i=1;i<=n;i++){
                nFactrl*=i;
         }
        approxEx+=(pow(x,n)/nFactrl);
    }
    //Calculate the exact e^x
    exactEx=exp(x);
    //Output the result
    cout<<"Approximate e^x = "<<approxEx<<endl;
    cout<<"Exact e^x = "<<exactEx<<endl;
    //Exit stage correctly
    return 0;
}


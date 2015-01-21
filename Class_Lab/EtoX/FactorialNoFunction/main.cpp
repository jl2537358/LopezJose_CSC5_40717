/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Using a factorial with no funcion
 * Created on January 21, 2015, 8:53 AM
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
    int nFactrl=1,n;
    //Prompt user
    cout<<"What N would you like to use to"<<endl;
    cout<<"calculate N!"<<endl;
    cin>>n;
    //Do the calculation
    for(int i=1;i<=n;i++){
        nFactrl*=i;
    }
    //Output the result
    cout<<n<<"! = "<<nFactrl<<endl;
    //Exit stage correctly
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Find total sales tax of a product
 * Created on January 8, 2015, 1:55 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent conversion
//Working Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    short prchsC=95;
    short stSlTx=4;
    short cSlTx=2;
    //Calculate problem
    float TtTx=stSlTx+cSlTx;
    float TtSlTx=TtTx*prchsC/CONVPCT;//Total Sales Tax
    //Present program
    cout<<"This program is used to calculate the Total Sales Tax of"<<endl;
    cout<<"a purchase of $95. The State Sales Tax was 4% and the County"<<endl;
    //Output results
    cout<<"Sales Tax was 2%. The Total Sales Tax was $"<<TtSlTx<<"."<<endl;
    return 0;
}


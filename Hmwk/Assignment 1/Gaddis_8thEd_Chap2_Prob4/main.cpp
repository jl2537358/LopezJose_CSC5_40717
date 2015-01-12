/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Tax and tip on a restaurant bill
 * Created on January 8, 2015, 2:09 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent conversion
//Working Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float mlChrg=88.67;
    float mlTx=6.75;
    short mlTp=20;
    //Calculate problem
    float amtTx=mlChrg*mlTx/CONVPCT;
    float amtTp=(amtTx+mlChrg)*mlTp/CONVPCT;
    float amtChrg=amtTx+amtTp+mlChrg;
    //Present Program
    cout<<"This program is used for calculating the amount charged for"<<endl;
    cout<<"a meal at a restaurant. It lists the meal's tax, tip and total."<<endl;
    //Output results
    cout<<"Meal Tax = $"<<amtTx<<endl;
    cout<<"Meal Tip = $"<<amtTp<<endl;
    cout<<"Meal Total = $"<<amtChrg<<endl;
    return 0;
}


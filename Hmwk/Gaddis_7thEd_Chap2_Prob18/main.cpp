/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: 
 * Created on January 8, 2015, 8:17 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent conversion
int main(int argc, char** argv) {
    //Declare Variables
    short custSrv=12467;//Customers Surveyed
    char perEDrk=14;//Percentage Energy Drinkers
    char perCDrk=64;//Percentage Citrus Drinkers
    //Calculate customer numbers requested
    short custE=custSrv*perEDrk/CONVPCT;//Customers that were energy drinkers
    short custC=custE*perCDrk/CONVPCT;//Customers that were citrus drinkers
    //Output the results
    cout<<"Customers surveyed that are Energy Drinkers = "<<custE<<endl;
    cout<<"Customers surveyed that are Citrus Drinkers = "<<custC<<endl;
    //Exit stage
    return 0;
}


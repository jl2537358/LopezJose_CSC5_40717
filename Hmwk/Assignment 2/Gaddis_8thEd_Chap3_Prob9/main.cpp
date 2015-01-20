/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: find how many cookies consumed into calories
 * Created on January 17, 2015, 2:45 PM
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
    int cksEtn;//Cookies eaten
    int ClPrSrv=300;//Calories per serving
    int cksPrSrv=10;//Cookies per serving
    //Output program info
    cout<<"This program is to calculate the amount of calories consumed"<<endl;
    cout<<"after eating a given amount of cookies. The cookies per serving"<<endl;
    cout<<"are 10, and calories per serving are 300."<<endl;
    cout<<"How many cookies were consumed?"<<endl;
    cin>>cksEtn;
    //Calculate how many calories in given cookies
    int clsPrCk=ClPrSrv/cksPrSrv;
    int clsEtn=cksEtn*clsPrCk;
    //Output results
    cout<<"The amount of calories consumed were "<<clsEtn<<"."<<endl;
    //Exit correctly
    return 0;
}
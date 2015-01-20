/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: find the percentage of male and female
 * Created on January 17, 2015, 2:45 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CNDMTPC=100;//Convert decimal to percent
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    int ml,fml;
    //Output program information
    cout<<"This program is used to find the percentage of male and female"<<endl;
    cout<<"in a room. "<<endl;
    cout<<"First input the amount of females in the room."<<endl;
    cin>>fml;
    cout<<"Secondly input the amount of males in the room."<<endl;
    cin>>ml;
    //Formula of male/female
    float mPf=ml+fml;
    float mlP=ml*CNDMTPC/mPf;
    float fmlP=fml*CNDMTPC/mPf;
    //Output results
    cout<<"The percentage of males in the room is "<<mlP<<"%."<<endl;
    cout<<"The percentage of females in the room is "<<fmlP<<"%."<<endl;
    //Exit correctly
    return 0;
}
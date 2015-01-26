/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: create a timer
 * Created on January 26, 2015, 10:05 AM
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTim,endTim,ans,totTime;
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    totTime=10
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the use for an answer
    cout<<"What is "<<x<<" + "<<y<<endl;
    cout<<"You have"<<totTime<<" seconds to answer"<<endl;
    cout<<"Wait for the next prompt!!"<<endl;
    do{
        endTim=static_cast<unsigned int>(time(0));
    }while(endTim-begTim<5);
    cout<<"Your answer is?"<<endl;
    cin>>ans;
    //Determine if correct
    if(ans==(x+y))cout<<"You are correct"<<endl;
    else cout<<"You are wrong!"<<endl;
    //Exit stage correctly
    return 0;
}


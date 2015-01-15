/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: calculating to average of some test
 * Created on January 15, 2015, 1:38 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    cout<<fixed;
    cout<<setprecision(1);
    //Declare variables
    float test1,test2,test3,test4,test5;
    //Output program use
    cout<<"This program is to calculate the average of five Test Scores."<<endl;
    cout<<"Please input your score for the first test in float form"<<endl;
    cin>>test1;
    cout<<"Please input your score for the second test in float form"<<endl;
    cin>>test2;
    cout<<"Please input your score for the third test in float form"<<endl;
    cin>>test3;
    cout<<"Please input your score for the fourth test in float form"<<endl;
    cin>>test4;
    cout<<"Please input your score for the fifth test in float form"<<endl;
    cin>>test5;
    //Calculate
    float sumScr=test1+test2+test3+test4+test5;
    float avgScr=sumScr/5;
    cout<<"Your average score for the five tests was "<<avgScr<<endl;
    //Exit stage correctly.
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: find the average rainfall of 3 months
 * Created on January 15, 2015, 2:26 PM
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
    int mnth1,mnth2,mnth3;
    float RFmnth1,RFmnth2,RFmnth3;//Rainfall for each month
    //Output program details
    cout<<"This program was made to find the average amount of rainfall"<<endl;
    cout<<"in given three months by user."<<endl;
    cout<<"Please input the month of rainfall(Example 1 = January)"<<endl;
    cin>>mnth1;
    cout<<"Please input the amount of rainfall for that month in inches"<<endl;
    cin>>RFmnth1;
    cout<<"Please input the month of rainfall(Example 1 = January)"<<endl;
    cin>>mnth2;
    cout<<"Please input the amount of rainfall for that month in inches"<<endl;
    cin>>RFmnth2;
    cout<<"Please input the month of rainfall(Example 1 = January)"<<endl;
    cin>>mnth3;
    cout<<"Please input the amount of rainfall for that month in inches"<<endl;
    cin>>RFmnth3;
    //calculate average rainfall
    float avgRF=(RFmnth1+RFmnth2+RFmnth3)/3;
    //Cases
    int mnt1=mnth1;
    int mnt2=mnth2;
    int mnt3=mnth3;
    cout<<endl;
    cout<<"The average rainfall for";
    switch(mnt1){
        case 1:
            cout<<" January,";
            break;
        case 2:
            cout<<" February,";
            break;
        case 3:
            cout<<" March,";
            break;
        case 4:
            cout<<" April,";
            break;
        case 5:
            cout<<" May,";
            break;
        case 6:
            cout<<" June,";
            break;
        case 7:
            cout<<" July,";
            break;
        case 8:
            cout<<" August,";
            break;
        case 9:
            cout<<" September,";
            break;
        case 10:
            cout<<" October,";
            break;
        case 11:
            cout<<" November,";
            break;
        case 12:
            cout<<" December,";
            break;
    }
    switch(mnt2){
        case 1:
            cout<<" January";
            break;
        case 2:
            cout<<" February";
            break;
        case 3:
            cout<<" March";
            break;
        case 4:
            cout<<" April";
            break;
        case 5:
            cout<<" May";
            break;
        case 6:
            cout<<" June";
            break;
        case 7:
            cout<<" July";
            break;
        case 8:
            cout<<" August";
            break;
        case 9:
            cout<<" September";
            break;
        case 10:
            cout<<" October";
            break;
        case 11:
            cout<<" November";
            break;
        case 12:
            cout<<" December";
            break;
    }
    cout<<endl;
    cout<<"and ";
    switch(mnt3){
        case 1:
            cout<<"January";
            break;
        case 2:
            cout<<"February";
            break;
        case 3:
            cout<<"March";
            break;
        case 4:
            cout<<"April";
            break;
        case 5:
            cout<<"May";
            break;
        case 6:
            cout<<"June";
            break;
        case 7:
            cout<<"July";
            break;
        case 8:
            cout<<"August";
            break;
        case 9:
            cout<<"September";
            break;
        case 10:
            cout<<"October";
            break;
        case 11:
            cout<<"November";
            break;
        case 12:
            cout<<"December";
            break;
    }
    cout<<" is "<<avgRF<<" inches."<<endl;
    //Exit correctly
    return 0;
}


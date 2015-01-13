/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: convert ounces to metric ton
 * Created on January 13, 2015, 10:16 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CMTNOZ=3.527392e4f;//Conversion from metric tons to ounces
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float wtPackOz,wtPackTn,nPackTn;
    //Prompts user for cereal weight
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float xxx.xxx (ounces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNOZ;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y'){
        cout<<"Input the number of ounces on the cereal"<<endl;
        cout<<"box to convert to metric tons."<<endl;
        cout<<"Format is float xxx.xxx (ounces)"<<endl;
        cin>>wtPackOz;
        //Calculate the results
        wtPackTn=wtPackOz/CMTNOZ;
        nPackTn=1/wtPackTn;
        //Output the results
        cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
        cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<endl;
    }
    if(answer=='N'||answer=='n'){
        cout<<"Thank you,"<<endl;
        cout<<"Run again if you change your mind.";
    }
    return 0;
}
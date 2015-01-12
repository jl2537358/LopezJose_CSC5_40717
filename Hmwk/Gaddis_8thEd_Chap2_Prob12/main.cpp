/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Land calculation of acres
 * Created on January 11, 2015, 11:31 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Working Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    int acrPft=43560;//feet in an acre
    float ftTtl=391876;
    //Calculate
    float acrTtl=ftTtl/acrPft;
    cout<<"This program is to find the amount of acres in a land that has "<<ftTtl<<" ft."<<endl;
    cout<<"The amount of acres in this land is "<<acrTtl<<"."<<endl;
    return 0;
}


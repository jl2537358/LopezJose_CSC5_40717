/* 
 * File:   main.cpp
 * Author: Jose Lopez
 *Purpose: Find the size of a memory type
 * Created on January 8, 2015, 8:57 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant

//Working Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    int x=sizeof(int);
    int y=sizeof(float);
    int z=sizeof(double);
    //State what this program does
    cout<<"This program is to state how many bytes a "<<endl;
    cout<<"certain data type uses. The size of an integer is"<<endl;
    //Start stating what size the data types are
    cout<<x<<" bytes. The size of a float is "<<y<<" bytes."<<endl;
    cout<<"The size of a double is "<<z<<" bytes."<<endl;
    return 0;
}


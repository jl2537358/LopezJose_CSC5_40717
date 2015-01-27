/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Created on January 21, 2015, 10:31 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8f;//Gravity earth
//Function Libraries
//F              m1   m2     d
float atrForce(float,float,float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables,values off Google
    float mEarth=5.972e24f;//Mass Earth Kg
    float wtMark=188.0f;//Weight in lbs.
    float rEarth=6.371e3;//Radius Earth Km
    //Conversions for consistent units
    mEarth*=1e3f;//Convert to grams -> 10^3g/Kg
    float mMark=wtMark*453.59;//453.59g/lbs
    rEarth*=(1e3f*1e2f);//10^3m/km*10^2cm/m
    //Calculate attractive force in dynes
    float dynes=atrForce(mEarth,mMark,rEarth);
    float lbs=dynes/4.44822e5f;//Conversion lbs/4.44822e5fdynes
    //Output results
    cout<<"My weight in dynes = "<<dynes<<endl;
    cout<<"My weight in lbs   = "<<lbs<<endl;
    //Exit stage correctly
    return 0;
}

float atrForce(float m1,float m2,float d){
    return G*m1*m2/d/d;
}

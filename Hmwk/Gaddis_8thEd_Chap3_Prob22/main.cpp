/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Use Cmath functions  sin,cos and tan
 * Created on January 12, 2015, 10:56 AM
 */

//System Libraries
#include <cstdlib>//Random rand(),srand()
#include <iostream>//Keyboard monitor
#include <fstream>//File i/o
#include <ctime>//Time functions
#include <cmath>//math fnctn library
#include <iomanip>//format library
using namespace std;

//User Libraries

//Global Constants
const float PIDIV4=atan(1);
const float CNVDGRD=PIDIV4/45;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a file object
    ofstream output;
    //Open the file
    output.open("SinCosTan.dat");
    //Declare the angle variable as an integer
    //in degrees, and the radian angle as a float
    int angDeg=rand()%361-180;//Angle from -180 to +180
    float angRad=angDeg*CNVDGRD;
    //Output the angle to the screen
    cout<<"Angle in degrees => "<<angDeg<<endl;
    cout<<"Angle in radians => "<<angRad<<endl;
    //Output the sin,cos,tan
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angDeg<<") ="<<setw(8)<<sin(angRad)<<endl;
    cout<<"cos("<<angDeg<<") ="<<setw(8)<<cos(angRad)<<endl;
    cout<<"tan("<<angDeg<<") ="<<setw(8)<<tan(angRad)<<endl;
    //Close stream
    output.close();
    return 0;
}


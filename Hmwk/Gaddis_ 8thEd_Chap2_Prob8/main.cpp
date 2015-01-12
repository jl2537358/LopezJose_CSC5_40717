/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Finding the total price of a purchase
 * Created on January 11, 2015, 10:34 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent conversion
//Working Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float item1=15.95;
    float item2=24.95;
    float item3=6.95;
    float item4=12.95;
    float item5=3.95;
    float SlTax=7;
    //Calculate problem
    float subTtl=item1+item2+item3+item4+item5;
    float tax=subTtl*(SlTax/CONVPCT);
    float PTotal=tax+subTtl;
    cout<<"The purchases that were bought cost $"<<item1<<", $"<<item2<<", $"<<item3<<", $"<<item4<<endl;
    cout<<"and $"<<item5<<". The subtotal of these purchases was $"<<subTtl<<"."<<endl;
    cout<<"The taxes were $"<<tax<<". The total end price was $"<<PTotal<<"."<<endl;
    return 0;
}


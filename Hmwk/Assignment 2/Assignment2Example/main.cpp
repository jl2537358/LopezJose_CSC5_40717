/* 
 * File:   main.cpp
 * Author: rcc
 * Purpose: to use a menu for programs
 * Created on January 14, 2015, 10:35 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CNVLBGM=453.6;//grams per pound
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Assignment 2 Menu
    cout<<"Solution 1 Savitch 8thEd Chap 2 Prob 2"<<endl;
    cout<<"Solution 2 Savitch 9thEd Chap 2 Prob 3"<<endl;
    cout<<"You get the idea"<<endl;
    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Based on the choice, display the results
    switch(choice){
        case 1:{
            cout<<"You have chosen solution one"<<endl;
                const float CONC=1e-3f;//Sweetener concentration
                float wtCoke=3.5e2f;//Weight of coke in grams
                float kMouse=5.0f;//Quantity of sweetener that kills a mouse
                float wtMouse=3.5e1f;//Weight of mouse in grams
                float kPer, wtDsPer;
                int   nCans;
                //Input the desired weight of a person
                cout<<"Input your desired weight in lbs"<<endl;
                cout<<"Format the input as a float"<<endl;
                cin>>wtDsPer;
                wtDsPer*=CNVLBGM;//Convert to grams
                 //Calculation
                kPer=kMouse/wtMouse*wtDsPer;
                nCans=kPer/wtCoke/CONC;
                //Output the limit of what you can drink
                cout<<"Number of cans of diet coke";
                cout<<" that will kill you = "<<nCans<<endl;
            break;
        }
        case 2:{
            cout<<"You have chosen solution two"<<endl;
            break;
        }
        default:cout<<"Incorrect choice format!"<<endl;
    }

    
    return 0;
}


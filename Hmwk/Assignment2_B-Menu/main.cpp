/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: to use a menu for programs
 * Created on January 14, 2015, 10:35 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float CNVLBGM=453.6;//grams per pound
const float CMTNOZ=3.527392e4f;//Conversion from metric tons to ounces
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    int choice;

    //Assignment 2 Menu
    cout<<"Solution 1 Savitch 8thEd Chap 2 Prob 1"<<endl;
    cout<<"Solution 2 Savitch 9thEd Chap 2 Prob 2"<<endl;
    cout<<"Solution 3 Savitch 8thEd Chap 2 Prob 10"<<endl;
    cout<<"Solution 4 Savitch 9thEd Chap 2 Prob 12"<<endl;
    cout<<"Solution 5 Gaddis 8thEd Chap 4 Prob 1"<<endl;
    cout<<"Solution 6 Gaddis 8thEd Chap 4 Prob 2"<<endl;
    //cout<<"Solution 7 Gaddis 8thEd Chap 4 Prob 6"<<endl; NOT DONE YET!!
    cout<<"Solution 8 Gaddis 8thEd Chap 4 Prob 12"<<endl;
    cout<<"Solution 9 Gaddis 8thEd Chap 4 Prob 13"<<endl;
    cout<<"Input which solution you would like to see"<<endl;
    cin>>choice;
    //Based on the choice, display the results
    switch(choice){
        case 1:{
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
            break;
        }
        case 2:{
            cout<<"You have chosen solution two"<<endl;
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
        case 3:{
            cout<<"You have chosen solution two"<<endl;
            //Declare variables
    int sum=0, sumNeg=0,sumPos=0,sumEven=0,sumOdd=0;
    int input;
    //Prompt for a value and sum it
    cout<<endl<<"Input an integer value!"<<endl;
    cin>>input;
    sum+=input;
    if(input>0)sumPos+=input;
    else sumNeg+=input;
    if(input%2)sumOdd+=input;
    else sumEven+=input;
    //Output the results
    cout<<"Sum =          "<<sum<<endl;
    cout<<"Positive Sum = "<<sumPos<<endl;
    cout<<"Negative Sum = "<<sumNeg<<endl;
    cout<<"Even Sum =     "<<sumEven<<endl;
    cout<<"Odd Sum =      "<<sumOdd<<endl;
    //Prompt for a value and sum it
    cout<<endl<<"Input an integer value!"<<endl;
    cin>>input;
    sum+=input;
    if(input>0)sumPos+=input;
    else sumNeg+=input;
    if(input%2)sumOdd+=input;
    else sumEven+=input;
    //Output the results
    cout<<"Sum =          "<<sum<<endl;
    cout<<"Positive Sum = "<<sumPos<<endl;
    cout<<"Negative Sum = "<<sumNeg<<endl;
    cout<<"Even Sum =     "<<sumEven<<endl;
    cout<<"Odd Sum =      "<<sumOdd<<endl;
            break;
        }
        case 4:{
            cout<<"You have chosen solution two"<<endl;
            //Declare variables
    float number,guess,r;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //First Pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"First pass calculation -> "<<guess<<endl;
    //Second Pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the second pass
    cout<<"Second pass calculation -> "<<guess<<endl;
    //Third Pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the third pass
    cout<<"Third pass calculation -> "<<guess<<endl;
    //Fourth Pass
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;  //Repeat so that it becomes more 
    r=number/guess;     //accurate
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;   //More accurate
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;   //Bit more accurate
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    r=number/guess;
    guess=(guess+r)/2;
    //Output the fourth pass
    cout<<"Fourth pass calculation -> "<<guess<<endl;
    //Exit stage right
            break;
        }
        case 5:{
            cout<<"You have chosen solution two"<<endl;
            cout<<"This program was made to find which of two given"<<endl;
            cout<<"numbers are bigger."<<endl;
            cout<<"Please input the first number."<<endl;
            int nmb1;
            cin>>nmb1;
            cout<<"Please input the second number."<<endl;
            int nmb2;
            cin>>nmb2;
            switch(nmb1,nmb2)
                if(nmb1>nmb2){
                cout<<nmb1<<" is the larger number."<<endl;
                break;
                }
                if(nmb1==nmb2){
                cout<<"Both numbers are equal."<<endl;
                break;
                }
                if(nmb1<nmb2){
                cout<<nmb2<<" is the larger number."<<endl;
                break;
                }
                if(nmb2>nmb1){
                cout<<nmb2<<" is the larger number."<<endl;
                break;
                }
                if(nmb2==nmb1){
                cout<<"Both numbers are equal."<<endl;
                break;
                }
                if(nmb2<nmb1){
                cout<<nmb1<<" is the larger number."<<endl;
                break;
                }
            break;
        }
        case 6:{
            cout<<"You have chosen solution two"<<endl;
                    cout<<"This program converts a number to Roman numerals."<<endl;
                    cout<<"Please enter in a number no smaller than 1, and"<<endl;
                    cout<<"no bigger than 10."<<endl;
                    int gvnNmb;
                    cin>>gvnNmb;
                    switch(gvnNmb)
                            if(gvnNmb=1){
                                cout<<"I"<<endl;
                                break;
                            }
                            if (gvnNmb==2){
                                cout<<"II"<<endl;
                                break;
                            }
                            if (gvnNmb==3){
                                cout<<"III"<<endl;
                                break;
                            }
                            if (gvnNmb==4){
                                cout<<"IV"<<endl;
                                break;
                            }
                            if (gvnNmb==5){
                                cout<<"V"<<endl;
                                break;
                            }
                            if (gvnNmb==6){
                                cout<<"VI"<<endl;
                                break;
                            }
                            if (gvnNmb==7){
                                cout<<"VII"<<endl;
                                break;
                            }
                            if (gvnNmb==8){
                                cout<<"VIII"<<endl;
                                break;
                            }
                            if (gvnNmb==9){
                                cout<<"IX"<<endl;
                                break;
                            }  
                            if (gvnNmb==10){
                                cout<<"X"<<endl;
                                break;
                            }  
            break;
        }
        
        case 7:{
            cout<<"You have chosen solution two"<<endl;
            break;
        }
        case 8:{
            cout<<"You have chosen solution two"<<endl;
            //declare variables
            int eaItm=99;
            cout<<"This program is meant to calculate amount discounted"<<endl;
            cout<<"from Software Sales. Each item cost $99."<<endl;
            cout<<"Please input the amount bought."<<endl;
            int amtBht;
            cin>>amtBht;
            //calculate the total cost
            float prCst=amtBht*eaItm;
            cout<<"The total cost before discount is $"<<prCst<<endl;
            switch(amtBht)
                    if(amtBht>=100){
                        float prCst4=prCst*50/100;
                        cout<<"The total cost after is $"<<prCst4<<endl;
                        break;
                    }
                    if(amtBht>=50){
                        float prCst3=prCst*60/100;
                        cout<<"The total cost after is $"<<prCst3<<endl;
                        break;
                    }
                    if(amtBht>=20){
                        //calculate
                        float prCst2=prCst*70/100;
                        cout<<"The total cost after is $"<<prCst2<<endl;
                        break;
                    }
                    if(amtBht>=10){
                        //calculate
                        float prCst1=prCst*80/100;
                        cout<<"The total cost after is $"<<prCst1<<endl;
                        break;
                    }
            break;
        }
        case 9:{
            cout<<"You have chosen solution two"<<endl;
            
            cout<<"This program is used to see how many points someone in a book"<<endl;
            cout<<"club has. "<<endl;
            cout<<"Please input how many books were purchased. If more than 4,"<<endl;
            cout<<"entering 4 is enough."<<endl;
            int bkPrchd;
            cin>>bkPrchd;
            switch(bkPrchd){
                case 0:{
                    cout<<"You currently have 0 points"<<endl;
                break;
                }
                case 1:{
                    cout<<"You currently have 5 points"<<endl;
                break;
                }
                case 2:{
                    cout<<"You currently have 0 points"<<endl;
                break;
                }
                case 3:{
                    cout<<"You currently have 5 points"<<endl;
                break;
                }
                case 4:{
                    cout<<"You currently have 60 points"<<endl;
                break;
                }
            }
            break;
        }
        default:cout<<"Incorrect choice format!"<<endl;
    }

    //Exit correctly
    return 0;
    }
}

/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: game of 23 toothpicks
 * Created on January 20, 2015, 10:30 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare our variables
    char thPick=23;
    bool computer;
    short nPckRmv;
    
    //Playing the game
    do{
        //Designate the player
        computer=false;
        //Ask player how many toothpicks to remove
        do{
            cout<<"There are "<<static_cast<int>(thPick)<<" left to remove"<<endl;
            cout<<"How many toothpicks do you want to remove"<<endl;
            cout<<"Choose 1,2 or 3"<<endl;
            cin>>nPckRmv;
        }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
        //remove the number of toothpicks
        thPick-=nPckRmv;
        //Designate the computer 
        computer=true;
        //utilize logic from book
        if(thPick>4){
            nPckRmv=4-nPckRmv;
            thPick-=nPckRmv;    
        }else if(thPick>=2&&thPick<=4){
            thPick=1;   
        }else if(thPick==1){
            thPick=0;
            computer=false;
        }
    }while(thPick>1);
    
    //Output the winner and loser
    if(computer){
        cout<<"Computer wins you lose"<<endl;
    }else{
        cout<<"Computer loses we win"<<endl;
    }
    
    //Exit the game
    
    return 0;
}


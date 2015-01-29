/*
* File: main.cpp
* Author: Jose Lopez
* Purpose: Make a simple game
* Created on January 29, 2015, 8:56 AM
*/
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototype
//Execution begins here!
int main(int argc, char** argv) {
srand((unsigned)time(0));
//Declare variables
int thPick=11;
bool computer;
int nPckRmv;
//Playing the game
cout<<"Welcome to Jose's Blackpick Game!"<<endl;
do{
//Designate the player
computer=false;
//Ask player how many tooth picks to remove
do{ cout<<endl;
    cout<<"There are "<<static_cast<int>(thPick)<<" left to remove."<<endl;
    cout<<"Please place your number wanted: "<<endl;
    cout<<"If the following cards are near enough to 21, your"<<endl;
    cout<<"desired number will be chosen."<<endl;
    cin>>nPckRmv; //enter number desired
    int player_card1=rand()%13+1;  //player card 1
    int player_card2=rand()%13+1;  //player card 2
    cout<<endl;
    cout<<"You got ";
    switch(player_card1){
          case 1: 
              cout<<"an Ace and ";
        break;
          case 11: 
              cout<<"a Jack and ";
        break;
           case 12: 
              cout<<"a Queen and ";
        break;
          case 13: 
              cout<<"a King and ";
        break;
        default:cout<<player_card1<<" and ";
    break;
    }switch(player_card2){
          case 1: 
              cout<<"an Ace";
        break;
          case 11: 
              cout<<"a Jack";
        break;
          case 12: 
              cout<<"a Queen";
        break;
          case 13: 
              cout<<"a King";
        break;
        default:cout<<player_card2;
    break;
    }cout<<endl;
        int player_total=player_card1+player_card2;
        if((player_card1==1)&&(player_card2==10|11|12|13)){
        cout<<"You got 21!!Your desired number will be used."<<endl;
    break;
        }else if(thPick==1){
        nPckRmv=1;
    break;
        }else if((player_card1==2)&&(player_card2==10|11|12|13)){
        cout<<"You got 21!!Your desired number will be used."<<endl;
    break;
        }else if((player_total>18)){
        cout<<"You got near enough to 21. Your desired number will be used."<<endl;
    break;
        }else{
        cout<<"You weren't near enough to 21. Your number will be"<<endl;
        cout<<"chosen randomly."<<endl;
        nPckRmv=rand()%3+1;//Randomly chosen number
        }
        cout<<endl;
        cout<<"Your number chosen was "<<nPckRmv<<"."<<endl;
}while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
//Remove the number of toothpicks
thPick=thPick-nPckRmv;
//Designate the computer
computer=true;
//Utilize logic
if(thPick==5){
nPckRmv=4-nPckRmv;
thPick-=nPckRmv;
}else if(thPick==6){
nPckRmv=3-nPckRmv;
thPick-=nPckRmv;
}else if(thPick==7){
nPckRmv=3-nPckRmv;
thPick-=nPckRmv;
}else if(thPick==8){
nPckRmv=6-nPckRmv;
thPick-=nPckRmv;
}else if(thPick==9){
nPckRmv=3-nPckRmv;
thPick-=nPckRmv;
}else if(thPick==10){
nPckRmv=3-nPckRmv;
thPick-=nPckRmv;
}else if(thPick>=2&&thPick<=4){
thPick=1;
}else if(thPick==1){
thPick=0;
computer=false;
}
}while(thPick>=1);
//Output the winner and loser
switch(static_cast<int>(computer)){
case 1:{
cout<<"Computer wins you lose"<<endl;
break;
}default:{
cout<<"Computer loses we win"<<endl;
}//Exit the Game
}
return 0;
}
/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Purpose: Make a game that is interactive
 * Created on January 28, 2015, 11:23 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution begins here.
int main(int argc, char** argv) {
    //Show menu
    cout<<" ---------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                               ,-----.,--.              ,--.           ,--.      ,--.        |"<<endl;
    cout<<"|                               | |_)  |  | ,--,--. ,---.|  |,-.  ,---. `--' ,---.|  |,-.     |"<<endl;
    cout<<"|    ,--------------.           |  _  <|  |' ,-.  || .--'|     / | .-. |,--.| .--'|     /     |"<<endl;
    cout<<"|   |    MAIN MENU   |          | '-'  |  || '-'  || `--.|  |  | | '-' ||  || `--.|  |  |     |"<<endl;
    cout<<"|    `--------------'           `-----'`--' `--`--' `---'`--'`--'|  |-' `--' `---'`--'`--'    |"<<endl;
    cout<<"|    1. PLAY GAME                              _____             |  |                         |"<<endl;
    cout<<"|                                             |3    |            `--'                         |"<<endl;
    cout<<"|    2. RULES                                 |* &  | /|             _____       _____        |"<<endl;
    cout<<"|                                             |  &  |/##|           /|  . |     / .  /|       |"<<endl;
    cout<<"|    3. EXIT GAME                             |  & */####|         /..|____|   /____/.|       |"<<endl;
    cout<<"|                                             |____/#####/         |../  . /   |'  '|./       |"<<endl;
    cout<<"|                                                  |####/           |/_.__/    |'__'|/        |"<<endl;
    cout<<"|                                                   |##/                                      |"<<endl;
    cout<<" ----------------------------------------------------|/---------------------------------------"<<endl;
    int mnMNU;
    do{
    cin>>mnMNU;
    switch(mnMNU){
        case 1:{
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
cout<<"Computer wins you lose,"<<endl;
cout<<"To play again press 1, or to end it press 3."<<endl;
break;
}default:{
cout<<"Computer loses we win,"<<endl;
cout<<"To play again press 1, or to end it press 3."<<endl;
}//Exit the Game
}
        }
        break;
        case 2:{
            cout<<endl;
            cout<<"The rules for this game are simple, it's the player vs. a"<<endl;
            cout<<"computer. The game is a mixture of BlackJack and a game involving"<<endl;
            cout<<"logic. The game involving logic is usually referred to as the Toothpick"<<endl;
            cout<<"Game. A set number of toothpicks are laid out and each player picks from 1-3"<<endl;
            cout<<"toothpicks. The goal is to make the other player have only one toothpick to"<<endl;
            cout<<"pick from at the end, making him lose."<<endl;
            cout<<endl;
            cout<<"In this game you enter in the number of toothpicks you want and it will generate"<<endl;
            cout<<"two cards from a deck of cards, if the number is near enough to 21, or 21 the"<<endl;
            cout<<"chosen number will be picked. If not, a random number toothpicks(1-3) will be"<<endl;
            cout<<"chosen for the player."<<endl;
            cout<<endl;
            cout<<"Choose another option from the menu to continue."<<endl;
        }
        break;
        default: cout<<"Thanks for running the program, run again to start over."<<endl;
        break;
    }
}while(mnMNU!=3&&mnMNU<3);
    return 0;
}


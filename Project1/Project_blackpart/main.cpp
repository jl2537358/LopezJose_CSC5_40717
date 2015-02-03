    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>
    using namespace std;
    int main ()
    {srand((unsigned)time(0));
    cout<<"Welcome to Jose's Blackpick Game!"<<endl;
    int nmbrW;
    cout<<endl;
    cout<<"Please place your number wanted: ";
    cin>>nmbrW; //enter wager willing to bet
    int dealer_card1=rand()%13+ 1; //dealer card 1
    int dealer_card2=rand()%13+1;  //dealer card 2
    int player_card1=rand()%13+1;  //player card 1
    int player_card2=rand()%13+1;  //player card 2
    cout<<endl;
    cout<<"The dealer has ";
    switch(dealer_card1){
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
        default:cout<<dealer_card1<<" and ";
    break;
    }switch(dealer_card2){
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
        default:cout<<dealer_card2;
    break;
    }cout<<endl;
    cout<<endl;
    cout<<"You have ";
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
    int dealer_total=dealer_card1+dealer_card2;
    int player_total=player_card1+player_card2;
    if ((player_card1==1)&&(player_card2==10|11|12|13)){
    cout<<"Blackjack! You Win $ "<<nmbrW*1.5<<"!!"<<endl;
    }else if((player_card2==1)&&(player_card1==10|11|12|13)){
    cout<<"Blackjack! You Win $ "<<nmbrW*1.5 << "!!"<<endl;
    }else if(player_total>dealer_total){
    cout<<endl;
    cout<<"You Win $"<<nmbrW<<"!!"<<endl;
    }else{
    cout<<endl;
    cout<<"You lose"<<endl;
    }
    return 0;
    }
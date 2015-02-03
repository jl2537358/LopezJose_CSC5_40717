/* 
 * File:   main.cpp
 * Author: Jose Lopez
 * Created on February 2, 2015, 7:43 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int baseN;
    int aBase,bBase,cBase,dBase;
    int frstN,secN,thrdN,frthN;
    cin>>baseN;
    frstN=baseN/1000;
    secN=(baseN-(1000*frstN))/100;
    thrdN=(baseN-((1000*frstN)+(100*secN)))/10;
    frthN=(baseN-((1000*frstN)+(100*secN)+(10*thrdN)));
    cout<<frstN;
    switch(frstN){
        case 1:
            cout<<"*"<<endl;
            break;
        case 2:
            cout<<"**"<<endl;
            break;
        case 3:
            cout<<"***"<<endl;
            break;
        case 4:
            cout<<"****"<<endl;
            break;
        case 5:
            cout<<"*****"<<endl;
            break;
        case 6:
            cout<<"******"<<endl;
            break;
        case 7:
            cout<<"*******"<<endl;
            break;
        case 8:
            cout<<"********"<<endl;
            break;
        case 9:
            cout<<"*********"<<endl;
            break;
        default:cout<<"?"<<endl;
        break;
    }
    cout<<secN;
    switch(secN){
        case 1:
            cout<<"*"<<endl;
            break;
        case 2:
            cout<<"**"<<endl;
            break;
        case 3:
            cout<<"***"<<endl;
            break;
        case 4:
            cout<<"****"<<endl;
            break;
        case 5:
            cout<<"*****"<<endl;
            break;
        case 6:
            cout<<"******"<<endl;
            break;
        case 7:
            cout<<"*******"<<endl;
            break;
        case 8:
            cout<<"********"<<endl;
            break;
        case 9:
            cout<<"*********"<<endl;
            break;
            default:cout<<"?"<<endl;
        break;
    }
    cout<<thrdN;
    switch(thrdN){
        case 1:
            cout<<"*"<<endl;
            break;
        case 2:
            cout<<"**"<<endl;
            break;
        case 3:
            cout<<"***"<<endl;
            break;
        case 4:
            cout<<"****"<<endl;
            break;
        case 5:
            cout<<"*****"<<endl;
            break;
        case 6:
            cout<<"******"<<endl;
            break;
        case 7:
            cout<<"*******"<<endl;
            break;
        case 8:
            cout<<"********"<<endl;
            break;
        case 9:
            cout<<"*********"<<endl;
            break;
            default:cout<<"?"<<endl;
        break;
    }
    cout<<frthN;
    switch(frthN){
        case 1:
            cout<<"*"<<endl;
            break;
        case 2:
            cout<<"**"<<endl;
            break;
        case 3:
            cout<<"***"<<endl;
            break;
        case 4:
            cout<<"****"<<endl;
            break;
        case 5:
            cout<<"*****"<<endl;
            break;
        case 6:
            cout<<"******"<<endl;
            break;
        case 7:
            cout<<"*******"<<endl;
            break;
        case 8:
            cout<<"********"<<endl;
            break;
        case 9:
            cout<<"*********"<<endl;
            break;
            default:cout<<"?"<<endl;
        break;
    }
    
    return 0;
}


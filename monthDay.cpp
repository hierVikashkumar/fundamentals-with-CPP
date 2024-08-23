#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the Month Number : ";
    cin>>x;
    switch(x){
        case 1 :  // Jan
            cout<<"31";
            break;
        case 2 :  //feb
            cout<<"28 or 29";
            break;
        case 3 :  //mar
            cout<<"31";
            break;
        case 4 :  //apr
            cout<<"30";
            break;
        case 5 :  //may
            cout<<"31";
            break;
        case 6 :  //june
            cout<<"30";
            break;
        case 7 :  //july
            cout<<"31";
            break;
        case 8 :  //Aug
            cout<<"31";
            break;
        case 9 :  //sep
            cout<<"30";
            break;
        case 10 :  //oct
            cout<<"31";
            break;
        case 11 :  //nov
            cout<<"30";
            break;
        case 12 :  //dec
            cout<<"31";
            break;
        
    }
}
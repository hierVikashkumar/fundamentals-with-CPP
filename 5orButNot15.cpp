#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer : ";
    int n;
    cin>>n;
    // if((n%5==0 || n%3==0) && n%15!=0){
    //     cout<<"The number is divisible by 5 nad 3 but not 15";
    // }
    // else{
    //     cout<<"not matching condition";
    // }

    // nested loops

    if(n%5==0 || n%3==0){
        if(n%15!=0){
           cout<<"The number is divisible by 5 nad 3 but not 15";
        }
        else{
            cout<<"not matching condition";
        }
    }
    else{
        cout<<"not matching condition";
    }

}
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the name : ";
    int n;
    cin>>n;
    // if(n>0){
    //     cout<<n;
    // }
    // // -ve values change the +ve values
    // else{       //n<=0
    //     cout<<-n;
    // }

    if(n<0){
        n = -n;
    }
    cout<<n;
}
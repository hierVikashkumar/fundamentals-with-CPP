#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 1st number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    cout<<"Enter the 3rd number : ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{       //c > a, a > b  -> c>a>b
            cout<<c<<" is greatest";
        }
    }
    else{   // b > a
        if(b>c){
             cout<<b<<" is greatest";
        }
        else{   // c > b
             cout<<c<<" is greatest";
        }
    }
}
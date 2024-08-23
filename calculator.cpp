#include<iostream>
using namespace std;
int main(){
    int op;
    cout<<"Enter the month number : ";
    cin>>a>>op>>b;
    switch(op){
        case '+' :
            cout<<a+b;
            break;
        case '-' :
            cout<<a-b;
            break;
        case '*' :
            cout<<a*b;
            break;
        case '/' :
            cout<<a/b;
            break;

    }

}
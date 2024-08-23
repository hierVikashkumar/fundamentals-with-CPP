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

    if(a>b && a>c){
        cout<<a<<" is largest";
    }
    if(b>a && b>c){
        cout<<b<<" is largest";
    }
    if(c>a && c>b){
        cout<<c<<" is largest";
    }
}
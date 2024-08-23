#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the 1st side : ";
    cin>>a;
    cout<<"Enter the 2nd side : ";
    cin>>b;
    cout<<"Enter the 3re side : ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<a<<","<<b<<","<<c<<"can be the sides of a trianle";
    }
    else{
        cout<<"Invalid Trianle";
    }
}
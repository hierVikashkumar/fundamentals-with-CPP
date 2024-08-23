#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the integer value : ";
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Number is divisible by 5 and 3 both";
        }
        else{
            cout<<"Number is divisible by 5 but not 3 divisible";
        }
    }
    else{
        cout<<"Not matching condition";
    }
}
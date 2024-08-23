#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    // int a = 8, b = 6;
    // // cin>>a>>b;
    // swap(&a, &b); //Passing addresses of variables instead of values.
    // cout<<a<<" "<<b;

    int a = 8, b = 6;
    // cin>>a>>b;
    int* x = &a;
    int* y = &b;
    swap(a, b);
    cout<<a<<" "<<b;
}
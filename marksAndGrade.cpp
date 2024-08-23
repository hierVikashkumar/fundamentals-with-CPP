#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the integer value : ";
    int n;
    cin>>n;
    // if(n>=91 && n<=100){
    //     cout<<"Excellent";
    // }
    // if(n>=81 && n<=90){
    //     cout<<"Very good";
    // }
    // if(n>=71 && n<=80){
    //     cout<<"Good";
    // }
    // if(n>=61 && n<=70){
    //     cout<<"Can do better";
    // }
    // if(n>=51 && n<=60){
    //     cout<<"Average";
    // }
    // if(n>=41 && n<=500){
    //     cout<<"Below Average";
    // }
    // if(n<40){
    //     cout<<"Fail";
    // }

    //2nd rule

//     if(n>100){
//         cout<<"Not vali d";
//     }
//     else{
//         if(n>=91){
//             cout<<"Excellent";
//         }
//         else{
//             if(n>=81){
//                 cout<<"Very good";
//             }
//             else{
//                 if(n>=71){
//                     cout<<"good";
//                 }
//                 else{
//                     if(n>=61){
//                         cout<<"can do better";
//                     }
//                     else{
//                         if(n>=51){
//                             cout<<"Average";
//                         }
//                         else{
//                             if(n>=41){
//                                 cout<<"Below Average";
//                             }
//                             else{
//                                 cout<<"Fail";
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }


// 3rd Rule

if(n>100){
    cout<<"Not valid";
}
else if(n>=91){
    cout<<"Excellent";
}
else if(n>=81){
    cout<<"Very good";
}
else if(n>=71){
    cout<<"good";
}
else if(n>=61){
    cout<<"can do better";
}
else if(n>=51){
    cout<<"Average";
}
else if(n>=41){
    cout<<"Below average";
}
else{
    cout<<"Fail";
}
}
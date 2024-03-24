// Nested if-else --> multipe if else can be used within if()statement as below followed by a else statement at last. 
//  if(n%5==0 || n%3==0){
//         if(n%15!=0){
//             cout<<"The number is Divisible by 5 or 3 but not 15";
//         }
//         else{
//             cout<<"Not matching the condition";
//         }
//     }
//     else{
//         cout<<"Not matching the condition";
// }

//Q) Take a positive integer input and tell if it is divisible by 3 0r 5 but not divisible by 15.
// 
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    // if((n%5==0 || n%3==0) && n%15!=0){
    //     cout<<"The number is Divisible by 5 or 3 but not 15 ";
    // }
    // else{
    //     cout<<"Not matching the condition ";
    // }
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"The number is Divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"Not matching the condition";
        }
    }
    else{
        cout<<"Not matching the condition";
}
}


//Enter a number : 30
//Not matching the condition
//Enter a number : 39
//The number is Divisible by 5 or 3 but not 15


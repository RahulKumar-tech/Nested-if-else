//Q) Take a positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            // n%3 == 0 but n % 5 !=0 
            cout<<"The nmuber is divisible by 3 but not 5";
    }
    else{
        cout<<"Not matching the condition";
     }
}

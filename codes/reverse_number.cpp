#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int reverse_number=0;
    while(n>0){
        int remainder=n%10;
        reverse_number=reverse_number*10+remainder;
        n/=10;
    }
    cout<<"reversed number is : "<<reverse_number;
}
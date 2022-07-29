#include<iostream>
using namespace std;
int main(){
    float a,b;
    char action;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"what do you want to do?(enter symbol)";
    cin>>action;
    switch(action){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default :
        cout<<"enter valid actions('+' or '-' or '*' or '/'";
        break;
    }
}
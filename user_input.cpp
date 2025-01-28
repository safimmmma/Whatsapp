#include<iostream>
using namespace std;

//to get input from user we use -> cin>>.
int main(){

    string name;
    int age;
    
    //cout<<"What's your name?"<<'\n';
    //cin>>name;

    cout<<"What's your full name?"<<'\n';
    //to take a string that contain space we had to use getline keyword as like:
    getline(cin, name);

    cout<<"My name is "<<name<<'\n';

    cout<<"What's your age?"<<'\n';
    cin>>age;
    cout<<"My age is "<<age;

    return 0;
}
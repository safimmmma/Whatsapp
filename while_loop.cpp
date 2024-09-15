#include<iostream>
using namespace std;
//while loop used to perform a task for specefic condition infinite time for fulfilling the condition.

int main(){

    string password;

    while (password.length()< 8)
    {
        cout<<"enter passward :";
        cin>>password;
    }

    cout<<"Welcome to the site.";
    return 0;
}
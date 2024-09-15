#include<iostream>
#include<cmath>
using namespace std;

// if Statement - do something if a condition is true.
//                if not, then don't do it.

int main(){
    int Ban;
    cout<<"Enter the Number: ";
    cin>> Ban;
    
    if(Ban>=80){
        cout << "Your grade is A+" << endl;
    }
    else if(Ban>=70){
        cout << "Your grade is A" << endl;
    }
    else if (Ban>=60){
        cout << "Your grade is A-" << endl;
    }
    else if (Ban<=40){
        cout << "You have failed." << endl;
    }
    else{
        cout << "You have passed." << endl;
    }
    
    return 0;
}
    
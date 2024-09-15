#include<iostream>
#include<cmath>
using namespace std;
//Switch= alternative to use many "else if Statement"


int main(){
    char Ban;
    cout<<"Enter the obtained grade: ";
    cin>> Ban;
    
    switch(Ban){
        case  'A':
            cout << "You did great" << endl;
            break;
        case 'B'  :
            cout << "You did good" << endl;
            break;
        case 'C' :
            cout << "You did well" << endl;
            break;
        case 'D' :
            cout << "Your results is not much satisfied" << endl;
            break; 
        case  'F':
            cout << "You have failed!" << endl;
            break;
        default :
            cout << "You have entered wrong Input." << endl;
            break;    
        }    
    return 0;
}
    
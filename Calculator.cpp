#include<iostream>
#include<cmath>
using namespace std;
//Switch= alternative to use many "else if Statement"


int main(){
    cout << "##########Calculator##########" << endl;
    char operation;
    float a, b, C;
    cout<<"Enter the Right Operator:[+,-,*,/] ";
    cin>> operation;
    cout << "Enter num1 :" << endl;
    cin >> a;
    cout << "Enter num2" << endl;
    cin >> b;
    
    switch(operation){
        case  '+':
            C = a+b;
            cout << "Addition is :" << C << endl;
            break;
        case '-'  :
            C = a-b;
            cout << "Substraction is :" << C << endl;
            break;
        case '*' :
            C = a*b;
            cout << "Multiplication is :" << C << endl;
            break;
        case '/' :
            C = a/b;
            cout << "Division is :"<< C << endl;
            break; 
                  break;
        default :
            cout << "You have entered wrong Input." << endl;
            break;    
        }   
    cout << "--------Calculator---------" << endl;     
    return 0;
}
    
#include<iostream>
using namespace std;

int main(){
    
    //arithmetic operation(+,-,*,/,%)

    int students = 110;
    //These will perform addition:
    //1.students = students+1;
    //2.students+=1;
    //3.students++;

    //These will perform substraction:
    //1.students = students-1;
    //2.students-=1;
    //3.students--;

    //These will perform multiplication:
    //1.students= students*2;
    //2.students*=2;
    
    //These will perform the division
    //1.students = students/2;
    //2.students/=2;

    //to find remainder:
    int remainder = students%3;

    //piority in operation:1.parenthesis,2.multipication and division,3.addition and substraction.

    cout<< students<<'\n';
    cout<<remainder;

    return 0;
}
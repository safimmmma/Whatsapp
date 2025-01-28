#include<iostream>
#include<vector>
// typedef= it replace the data type with an identifier.(eg: string-> text,  int-> num)
using namespace std;

typedef string my_name;
typedef int my_age; 

// here string,int replace with my_name, my_age respectively.

using my_name = string;
using my_age = int;

//we also use the keyword (using) inplace of typedef.

int main(){
    my_name first = "Sifatul ";
    my_name second ="islam";

    my_age o = 21;

    cout<<"My name is "<<first<<second<<". I'm "<<o<<"years old.";
    
    return 0;
}
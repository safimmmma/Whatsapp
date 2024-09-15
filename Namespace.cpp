#include<iostream>
using namespace std;
namespace first {
   int x=5;
   int y=7;
   }
namespace second {
   int x=7;
   int y=1;
   }   
int main()
{
    using namespace second;
    cout << "display x="<<x<< endl;
    cout << "Display y=" <<y<<endl;
    return 0;
}
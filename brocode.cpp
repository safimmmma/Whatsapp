#include<iostream>
using namespace std; //(namespace provides a solution fpr preventing name conflicts in large projects. each entity need a unique name. A namespace allows for identically name entities)

namespace first{
    string my_name = "sifat";

namespace second{
    string my_name = "islam";

}
}
int main() {
    using namespace first;
    const double pi = 3.14159;
    double radius = 10;
    double area = pi *  radius * radius;

    cout<<"Area is= "<<area;
    
    cout<<first::my_name;
        return 0;
}
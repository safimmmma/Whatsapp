 #include<iostream>
using namespace std; // Add this to avoid using std:: prefix

class student
{
public:
    string name;
    int id;

    // Default constructor
    student()
    {
        name = " ";
        id = 1;
    }

    // Parameterized constructor
    student(string newName, int newId)
    {
        name = newName;
        id = newId;
    }

    // Method to get information
    string getinfo()
    {
        return name;
    }
};

int main()
{
    // Correctly instantiate the student objects with unique names
    student student1("Safim", 22203021);
    student student2("Jafim", 22203020);

    // Correct the output statement
    cout << "The information about " << student1.name << " is: " << student1.getinfo() << endl;

    return 0;
}

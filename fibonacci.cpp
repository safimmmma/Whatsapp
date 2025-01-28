#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Enter the limit for the Fibonacci sequence: ";
    cin >> limit;

    int a = 0, b = 1, nextTerm = 0;

    cout << "Fibonacci Sequence up to " << limit << ": ";

    while (nextTerm <= limit) {
        cout << nextTerm << " ";
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }

    cout << endl;
    return 0;
}

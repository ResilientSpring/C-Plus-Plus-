// This program contains two functions: main() and myfunc()

#include <iostream>
using namespace std;

void myfunc(); // myfunc's prototype

int main() {
    cout << "In main()\n";
    myfunc(); // call myfunc()
    cout << "Back in main()\n";

    return 0;
}

// This is function's definition
void myfunc() {
    cout << "Inside myfunc()\n";
}

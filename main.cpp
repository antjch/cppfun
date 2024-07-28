#include "hello.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// namespace antjch::cppfun {

int main() {
    vector<string> msg{"Hello", "C++",     "World",
                       "from",  "VS Code", "and the C++ extension!"};

    for (const string& word : msg) {
        cout << word << " ";
    }
    cout << endl;

    printHello("world");

    return 0;
}

//} // namespace antjch::cppfun
#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    // Namespace = provides a solution for preventing name conflicts in large projects.
    //             Each entity needs a unique name. A namespace allows for identically named
    //             entities as long as the namespaces are different.

    using namespace first;
    using namespace std;
    // Safer option - cuz std has lot of functions which might have conflicting variable names
    // using namespace std::cout;
    // using namespace std::string;
    string name = " Bro";

    cout << x << name << '\n';


    return 0;
}
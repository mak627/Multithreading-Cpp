#include <iostream>

using namespace std;

/*  nullptr is defined to be compatible with any pointer but not with anything else 
    GCC refuses to compile this, it says call of overloaded function func(NULL) is ambigous
*/
void func(int i){
    cout << "func(int) called\n";
}

void func(int *i){
    cout << "func(int *) called\n";
}

int main(){

    func(NULL);
    //func(nullptr);
}
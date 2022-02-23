#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int x{3};
    string str{"Hello Sailor!"};

    cout << "x = " << x << endl;
    cout << "str = " << str << endl;

    vector<int> vec1{0,1,1,2,3,5};
    string hello{'J','a','n','e'};

    cout << "vec1 ="; 
    for (vector<int>::iterator it = vec1.begin(); it!=vec1.end(); ++it){
        cout << *it << ", ";
    }
    cout << endl;
    cout << "hello = " << hello << endl;

    return 0;
}
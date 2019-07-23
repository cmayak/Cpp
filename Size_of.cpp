#include <iostream>
using namespace std;

int main(){
    char c = 'f';//1byte
    string dan = "My name is Dan.";//varies on length of string
    int s = 32;//4bytes
    double d = 5.2452;//8bytes
    double bucky[5]; //8byte per index
    cout << sizeof(c) << endl;
    cout << sizeof(dan) << endl;
    cout << sizeof(s) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(bucky) << endl;
    cout << sizeof(bucky) / sizeof(bucky[0]) << endl; //gets total of indexies


}
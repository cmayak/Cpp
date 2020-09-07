#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

// pass by reference and pass by value

int main(){
    int juan = 22;
    int billy = 42;

	passByValue(juan);
	passByReference(&billy);

    cout << "This is the value for juan " << juan << endl;
    cout << "This is the value for billy " << billy << endl;
}

void passByValue(int x){//makes a copy of juan and doesnt change the main
    x = 99;
}

void passByReference(int *x){//changes the address which is the main part of the value
    *x = 44;
}

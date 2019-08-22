#include <iostream>
using namespace std;

int main(){
	int var = 8;
	int* ptr = &var; // sets ptr to have the memory of var=8
	*ptr = 10; // assigns var to be equal to 10 since ptr= memory of var so *ptr means real val of var 
	cout << ptr << endl;
	cout << var << endl;
}


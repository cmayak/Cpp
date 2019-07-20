#include <iostream>
using namespace std;

int main() {
	int billy[2][3] = { {2,2,6}, {3,1,9} };
	cout << billy[1][2] << endl;
	for(int i = 0; i<2; i++) // prints out each number in the array for both indexs
	
	{
		for(int j = 0; j<3; j++){
			cout << billy[i][j] << endl;
		}
	}

}
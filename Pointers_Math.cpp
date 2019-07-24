#include <iostream>
using namespace std;

int main(){

    int bucky[5];
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];
    
    cout << bp0 << endl;
    cout << bp1 << endl; // 4 bytes away from above
    cout << bp2 << endl; // 8 bytes away from 0

    bp0 ++; // adds index to array and not adding 1 to address 

    cout << bp0 << endl; // adds 4 bc thats how much one int is
}
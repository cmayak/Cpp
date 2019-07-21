#include <iostream>
using namespace std;
//pointers
//uses dish as main data and 
//*pdish as a pointer to gets back to original dish
int main(){
    int fish = 4;
    cout << &fish << endl;
    int *pfish = &fish;
    cout << pfish << endl;
    int dish = 3;
    int *pdish = &dish;
    cout << *pdish << endl;
}
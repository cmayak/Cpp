#include <iostream>
using namespace std;

int main(){
    int aarray[2][3] = {{2,3,8},{4,0,1}};
    cout << aarray[0][2] << endl; // first input is for set and 2 input number in set

    for(int i=0; i<2;i++){// shows all elements in 2d array
        for(int j=0; j<3; j++)
        {
            cout << aarray[i][j] << endl;
        }
    }
    
    int array3d[3][3][2] = {{{2,5},{3,1},{1,8}},
                           {{5,2}, {4,0}, {9,3}},
                           {{6,0},{3,4},{2,2}}};
    cout << array3d[2][2][1]<< endl; // it goes row, column, index

     
}
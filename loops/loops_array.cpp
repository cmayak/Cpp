#include <iostream>
using namespace std;

void Boarders(){
	int l, w;
	for(l=0; l<50; ++l){
		for(w=0; w<100; ++w){
			if(l==0 || l==49){
				cout << "#";
			}
			else{
				if(w==0 || w==99){
					cout << "#";
				}
				else{
					cout << " ";
				}
			}
		}
	cout << endl;
	}
}
int main(){
	//Boarders();
}

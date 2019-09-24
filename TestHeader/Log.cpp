#include "HTestMain.h"
#include <iostream>

using namespace std;

void InitLog(){
	Log("Initializing Log");
}

void Log(const char* message){
	cout << message << endl;
}

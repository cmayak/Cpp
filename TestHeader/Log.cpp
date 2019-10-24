#include "HTestMain.h"
#include "HNewHead.h"
#include <iostream>

using namespace std;

void InitLog(){
	Log("Initializing Log");
}

void Log(const char* message){
	cout << message << endl;
}

void AddingNextLine(const char* newLineMsg){
	cout << newLineMsg << endl;
}

int Multiply(int x, int y){
	cout << x << " times " << y << " = " << x*y << endl;
	return x*y;
}

float Divide(float a, float b){
	cout << a << " divided by " << b << " = " << a/b << endl;
	return a/b;
}

#include <iostream>
#include "foo.h"
#include "bar.h"

using namespace std;

int main(){
	cout << "Hello World!\n";
	int a = func();
	cout << "a is: " << a << endl;
	dll_func();
}
#include <iostream> 
using namespace std;

int main(){
	
	int a;
	int b;
	int z;
	cout << "Enter the first number" << endl;
	cin >> a;
	cout << "Enter the second number" << endl;
	cin >> b;
	if (a > b) {
		z = a - b;
		cout << "Result of the equation is " << z;
	}
	else {
		z = b - a;
		cout << "Result of the equation is " << z;
	}
	
	
	
	
	
	
	
	
	
    return 0;
}

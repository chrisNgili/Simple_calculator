#include <iostream>
#include <string>
using namespace std;

int main(void){
	char op;
	float num1;
	float num2;
	float result;
	
	cout<<"Input number 1: ";
	cin>>num1;
	cout<<"Input number 2: ";
	cin>>num2;
	cout<<"Input the desired operator (+, -, *, /): ";
	cin>>op;
	
	switch (op){
		case '+':
			result = num1 + num2;
			cout<<"Result: "<<result <<endl;
			break;
		
		case'-':
			result = num1 - num2;
			cout<<"Result: "<<result <<endl;
			break;
		
		case'*':
			result = num1 * num2;
			cout<<"Result: "<<result <<endl;
			break;
		
		case'/':
			result = num1/num2;
			cout<<"Result: "<<result <<endl;
			break;
			
		default:
			cout<<"Enter a valid operator !! \n";
			break;
	}
	return 0;
}


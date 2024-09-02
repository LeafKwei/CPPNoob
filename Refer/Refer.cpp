#include <iostream>

void add(int a, int b, int &result){
	result = a + b;
}

int main(void){
	int a = 10;
	int b = 10;
	int result = 0;
	
	add(a, b, result);
	std::cout << "Result = " << result << std::endl;
	
	return 0;
}
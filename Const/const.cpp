#include <iostream>

int main(void){
	int v1 = 2;
	const int &r1 = 9;
	const int &r2 = v1 * 5;
	
	std::cout << "v1 = " << v1 << std::endl;
	std::cout << "r1 = " << r1 << std::endl;
	std::cout << "r2 = " << r2 << std::endl;
	
	int v2 = 3;
	const int *p1 = &v1;
	int const *p2 = &v1;
	int * const p3 = &v1;
	
	//*p1 = 99;  //error
	p1 = &v2;
	//*p2 = 99;  //error
	p2 = &v2;
	*p3 = 99;
	//p3 = &v2;  //error

	int *p4 = &v1;
	const int *const *pp1 = &p4; //*pp1 readonly, **pp1 readonly
	pp1 = &p4;
	int *const *const pp2 = &p4; //pp2 readonly, *pp2 readonly
	**pp2 = 200;
	const int **const pp3 = &p4; //pp3 readonly, **pp3 readonly
	*pp3 = &v2;
}
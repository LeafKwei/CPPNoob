#include <iostream>
#include <stdlib.h>
#include <string.h>

int g_var;

void init_gvar(){
	g_var = 100;                                        //全局变量在定义后就可在源文件的后续位置使用
}

int main(void){
	init_gvar();
	
	if(g_var == 100){
		int l_var = g_var;
		std::cout << "local var" << g_var << std::endl; //局部变量在定义它的代码块中可用访问
	}
	
	//l_var = 101;                                      //离开代码块后，局部变量被销毁，不可访问
	
	char *ptr = (char*) calloc(1, 100);                 //堆中的对象的作用域与引用它的变量有关
	strncpy(ptr, "I am on heap\n", 99);
	std::cout << ptr;
	
	free(ptr);                                          //当将对象free后，对象的生命周期也到此结束
}
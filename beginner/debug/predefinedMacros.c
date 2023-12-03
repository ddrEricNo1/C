/*
__FILE__, __LINE__, __func__是C语言中的预定义宏
__FILE__用于获取当前源文件的文件名, __LINE__用于获取当前源文件中的行号，__func__用于获取当前函数的名称
*/

#include <stdio.h>

void debug_info(const char *file, int line, const char *func) {
	printf("Debug info: File - %s, Line - %d, Function - %s \n", file, line, func);
}

int main() {
	debug_info(__FILE__, __LINE__, __func__);
	return 0;
}

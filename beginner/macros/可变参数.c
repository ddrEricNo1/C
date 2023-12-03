extern int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
#include <stdarg.h>

/*
在宏中，三个点表示可变参数(variadic arguments),允许在宏中接受不定数量参数的机制
__VA_ARGS__是用于在宏中引用可变参数的特殊标识符

而va_list, va_start, va_end用于处理可变参数的宏和函数
*/

#define SUM(...)	sum(__VA_ARGS__)

// 实现对可变参数求和的函数
int sum(int count, ...) {
	int result = 0;
	va_list args;
	va_start(args, count);

	for (int i = 0; i < count; i++) {
		result += va_arg(args, int);
	}
	va_end(args);
	return result;
}

int main() {
	int total = SUM(3, 1, 2, 3);
	printf("%d\n", total);
	return 0;
}




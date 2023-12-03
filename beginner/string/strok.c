#include <string.h>
#include <stdio.h>
/*
char* strtok(char *restrict str, const char *restric sep);

char* strtok_r(char *restrict str, const char *restrict sep, char **restrict lasts);

The strtok() function is used to isolate sequential tokens in a null-terminated string, str. These tokens are separated in the string by at least one of the characters in sep. The first time that strtok() is called, str should be specified, subsequent calls, wishing to obtain further tokens from the same string, should pass a null pointer instead. The separator string, sep, must be supplied each time, and may change between calls. 

strtok_r() function is a reentrant version of strtok(). The context pointer last must be provided on each call. 

The strtok() and strtok_r() functions return a pointer to the beginning of each subsequent token in the string, after replacing the token itself with a NUL character. When no more tokens remain, a null pointer is returned. 
*/

int main() {
	char str[] = "apple,orange,banana";
	const char delim[] = ",";
	char *token;
	char *saveptr;
	token = strtok_r(str, delim, &saveptr);
	while (token != NULL) {
		printf("Token: %s\n", token);
		token = strtok_r(NULL, delim, &saveptr);	
	}
	return 0;
}

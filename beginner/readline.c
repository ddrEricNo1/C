#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main() {
	char *input;

	// 设置命令提示符
	rl_bind_key('\t', rl_complete);
	while ((input = readline(">> ")) != NULL) {
		add_history(input);
		printf("You entered: %s\n", input);
		free(input);
	}
	return 0;
}

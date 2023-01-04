#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
	if (argc <= 1) {
		char* str = calloc(100, sizeof(char));
		char c = getchar();
		int capacity = 100;
		int len = 0;
		while (c != EOF) {
			if (len == capacity) {
				capacity *= 2;
				str = realloc(str, capacity);
			}
			str[len] = c;
			len++;
			c = getchar();
		}
		len = strlen(str);
		str[len-1] = '\0';
		printf(" <%s ", str);
		free(str);
	}
	else printf("< ");
	for (int i = 1; i < argc; i++) {
		printf("%s ", argv[i]);
	}
	printf(">\n    \\     ┏━╮╭━┓       \n     \\    ┃┏┗┛┓┃      \n      \\   ╰┓▋▋┏╯       \n         ╭━┻╮╲┗━━━━╮╭╮ \n         ┃▎▎┃╲╲╲╲╲╲┣━╯ \n         ╰━┳┻▅╯╲╲╲╲┃   \n           ╰━┳┓┏┳┓┏╯   \n             ┗┻┛┗┻┛    \n");
	return 0;
}

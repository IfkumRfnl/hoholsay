#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[]) {
	if (argc <= 1) {
		char c[10000];
		fgets(c, 10000, stdin);
		int len = strlen(c);
		if (len > 0 && c[len - 1] == '\n') {
			c[len - 1] = '\0';
		}
		printf("< %s", c);
	}
	else printf("< ");
	for (int i = 1; i < argc; i++) {
		printf("%s ", argv[i]);
	}
	printf(" >\n    \\     ┏━╮╭━┓       \n     \\    ┃┏┗┛┓┃      \n      \\   ╰┓▋▋┏╯       \n         ╭━┻╮╲┗━━━━╮╭╮ \n         ┃▎▎┃╲╲╲╲╲╲┣━╯ \n         ╰━┳┻▅╯╲╲╲╲┃   \n           ╰━┳┓┏┳┓┏╯   \n             ┗┻┛┗┻┛    \n");
	return 0;
}

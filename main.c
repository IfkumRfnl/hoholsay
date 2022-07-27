#include <stdio.h>

int main(int argc, char* argv[]) {
	printf("< ");
	for (int i = 1; i < argc; i++) {
		printf("%s ", argv[i]);
	}
	printf(">\n    \\     ┏━╮╭━┓       \n     \\    ┃┏┗┛┓┃      \n      \\   ╰┓▋▋┏╯       \n         ╭━┻╮╲┗━━━━╮╭╮ \n         ┃▎▎┃╲╲╲╲╲╲┣━╯ \n         ╰━┳┻▅╯╲╲╲╲┃   \n           ╰━┳┓┏┳┓┏╯   \n             ┗┻┛┗┻┛    \n");
	return 0;
}

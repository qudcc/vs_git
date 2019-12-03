#include <stdio.h>

char name[256];
void
bug(char *p) {
	strcpy(name, p);
}
	
void 
int
main(int argc, char *argv[]) {
	bug(argv[1]);
	printf("Hello, %s!", argv[1]);
	return 0;
}

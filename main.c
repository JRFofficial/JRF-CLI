#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if ( argc >= 2 ) {
		if ( strcmp(argv[1], "-d") == 0 || strcmp(argv[1], "--debug") == 0 ) {
			printf("DEBUG MODE");
		};
	} else {
		//usage
		return 1;
	};
	return 0;
}

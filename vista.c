#include "src/prt.h"
#include "src/init.h"

// #include <conio.h>

void test(void){
	printf("%s\n", update_styles("[FF0000]{000000}Awesome", 1));
	printf("%s\n", update_styles("[bl]Awesome[{}] Awesome", 1));
	printf("%s\n", update_styles("┼, ╳, 来", 1));
}

int main(void){
	vista_init();
	test();

	return 0;
}

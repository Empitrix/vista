#include "plf.h"

void vista_init(void){
#ifdef _WIN32
	windows_char_set_init();
#endif
#ifdef linux
// Do linux stuff
#endif
}


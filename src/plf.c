#ifdef _WIN32

// save as utf-8
#pragma execution_character_set_push("utf-8")
#include <Windows.h>

void windows_char_set_init(void){
	SetConsoleOutputCP(65001);
}

#endif


#include <stdio.h>
#include <locale.h>
int main(int argc, char *argv[]) {
    
	setlocale(LC_CTYPE, "en_US.UTF-8");

	wchar_t * ws = L"大家好，我来自中国";
	printf("%ls\n", ws);

	char buf[255]= {};

	size_t len = wcstombs(buf, ws, 255);

	for (int i = 0; i < len; i++) {
		printf("0x%2x", (unsigned char)buf[i]);
	}
}

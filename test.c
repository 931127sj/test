#include <stdio.h>

int main(int argc, char* argv[]){
	fputs("\033[0;0H", stdout);
	fputs("\033[0;0H", stdout);

	return 0;
}

#include <stdio.h>

/*
int main(){
	int name;
	char ascii;
	ascii = getchar();
	printf("%c", ascii);
	name = ascii;
	printf("%d", name);


}
*/

int main(){
	int name;
	char ascii;
	ascii = getchar();
	printf("%c", ascii);
	name = ascii;
	printf("%d", name);
	ascii = name;
	printf("Again: %c \n", ascii);
}
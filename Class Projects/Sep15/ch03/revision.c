#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int atoi1(char s){
	int i, n;
	//n=0;
	for (i=0; s>= '0' && s<= '9'; ++i){
		//n = (10*n) + (s[i] = s[i] - '0');
		s = s - '0';
	}
	// if (typeof(s) == int){
	// 	printf("Yes!\n");
	// }
	return s;
}

int main(){
	char c;
	c = '6';
	printf("The converted value is: %d\n", atoi("9"));
	printf("%d\n", isdigit(c));
}
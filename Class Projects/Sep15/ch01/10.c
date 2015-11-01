#include <stdio.h>

int main(){
	int i = 0;
	char c[50];
	char a;
	while( (a = getchar()) != EOF){
		c[i] = a;
		++i;
	}	
	printf("This is a line: %s\n", c);
	printf("%c\n", c[1]);
	printf("%d", i);
	printf("This is what I want :%c\n", c[i-2]);
	//printf("This is what I want :%c\n", c[i-1]);
	
	for( int k=0; k<i; ++k){
		if(c[k] == '$' && c[k+1] == '/' && c[k+2] == '*'){
			k = i;
			printf("K: %d", k);
		}
		printf("Hahah %c \n", c[k]);

	}
	
}
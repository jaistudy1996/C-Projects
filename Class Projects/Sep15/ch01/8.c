#include <stdio.h>

int main(){
	int c, i, white, digits, lines;
	char alldigits[10];
	white=digits=lines=0;
	for(i=0; i<10; ++i){
		c = getchar();
		if(c>='0' && c<='9' ){
			++digits;
			++alldigits[c];
		}
		else if(c=' '){
			++white;
		}
		else if(c='\n'){
			++lines;
		}
	}
	printf("All Digits: %d", alldigits);
	printf(" ");
	printf("Whites: %d, Digits: %d", white, digits);
	

}

#include <stdio.h>

int main(){
	long charLength;
	charLength = 0;
	while(getchar() != EOF){
		++charLength;
	printf("%ld\n", charLength);
}
}

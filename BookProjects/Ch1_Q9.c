#include <stdio.h>

#define BOTTOM_SPACE "\n\n\n\n\n"
#define HEIGHT 17
#define OFFSET "                 "  // 17 spaces
#define TOP_SPACE "\n\n\n\n\n"

int main(void){
	int i;
	int j=20;
	printf(TOP_SPACE);
	for(i=0; i<40 ; ++i){
		printf("%d\n", j);
		while(j>0){
		 	printf(": ");
		 	--j;
		}
		printf(OFFSET "CCCCCCCCCC\n");
		j = 20-i;
		if(j<0){
			j *= -1;
		}

	}
	printf(OFFSET "CCCCCCCCCC\n");
	printf(BOTTOM_SPACE);
	return 0;
}
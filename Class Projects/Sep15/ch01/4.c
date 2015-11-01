#include <stdio.h>

int main(){
	double ch;
	
	for(ch=0; getchar() != EOF; ++ch)
		{;}
	printf("%.0f \n", ch);
}

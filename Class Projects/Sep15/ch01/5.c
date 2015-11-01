#include <stdio.h>

int main(){
	double char_count;
	double line_count;
	double blank;
	int ch;	
	line_count = 0;
	for(char_count=0; ((ch=getchar()) != EOF); ++char_count)
	{
		if(ch == '\n')
			{line_count++;}
		if(ch == ' ')
			{blank++;}
	}
	printf("Char: %.0f, Lines:%.0f, Blanks:%.0f", char_count, line_count, blank);
}

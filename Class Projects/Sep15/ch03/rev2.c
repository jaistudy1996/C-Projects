#include <stdio.h>
#include <string.h>



/* Exercise 1-22. Write a program to ``fold'' long input lines 
into two or more shorter lines after the last non-blank 
character that occurs before the n-th column of input. Make 
sure your program does something intelligent with very long lines,
and if there are no blanks or tabs before the specified column. */


// Try to write a recursive function for this.

char* fold(char line[]){
	if (strlen(line) < 78){
		return line;
	}
	else{
		int diff;
		diff = strlen(line) - 78;
	}
}


int main(){
	int chars, i;
	chars = i = 0;
	char line[512];
	char c;

	while((c=getchar()) != EOF){
		line[chars] = c;
		++chars;
	}

	for (i = 0; i<= chars; ++i){
	if((i >= 78 && i <= 80) && line[i] == ' '){
			line[i] = '\n';
		}
}

	printf("Line :%s\n", line);
	printf("Length is: %lu\n", strlen(line));
}


/*
Exercise 1-20. Write a program detab that replaces tabs in the input with the 
proper number of blanks to space to the next tab stop. Assume a fixed set of 
tab stops, say every n columns. Should n be a variable or a symbolic parameter?

Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum
 number of tabs and blanks to achieve the same spacing. Use the same tab 
stops as for detab. When either a tab or a single blank would suffice to reach a 
tab stop, which should be given preference?

Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter
lines after the last non-blank character that occurs before the n-th column of input. 
Make sure your program does something intelligent with very long lines, and if there 
are no blanks or tabs before the specified column.

Exercise 1-23. Write a program to remove all comments from a C program. Don't forget 
to handle quoted strings and character constants properly. C comments don't nest.

Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like 
unmatched parentheses, brackets and braces. Don't forget about quotes, both single and 
double, escape sequences, and comments. (This program is hard if you do it in full generality.)
*/

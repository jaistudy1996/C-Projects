#include <stdio.h>
#define MAXLENGTH 1000

int getlines(char s[], int lim){
	int c, i;
	for(i=0; (c=getchar() != EOF && c!='\n'); ++i){
		s[i]=c;
		if(c=='\n'){
			s[i]=c;
		}
	
	}
	s[i] = '\0';
	return i;
}

void copy(char from[], char to[]){
	int i;
	while((from[i] = to[i]) != '\0'){
	++i;
	}

}

//int getlines(char line[], int MAXLENGTH);

int main(){
	char line[MAXLENGTH];
	char new[MAXLENGTH];
	char c;
	int limit, len;
	int i;
	for(i=0; i<1; ++i){
		len = getlines(line, limit);
		printf("\nThis is old line: %d \n", len);
	}
	copy(new, line);
	printf("This is new line: %s \n", new);
	printf("These are char of old line %s \n", line);
	
}
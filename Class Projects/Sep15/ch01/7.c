#include <stdio.h>


int main(){
/*	wordCount=lineCount=charCount=0; */
	int i =0;
	int j;
	char c[512];
	char word;
	int check = 0;
	while((word=getchar()) != EOF){
		c[i] = word;
		++i;
}

	printf("This is i %d\n", i);
	printf("This is j %d\n", j);
	
	for(j=0; j < i; ++j){
		if(c[j] == '$' && c[j+1] == '/' && c[j+2] == '*'){
			for(check=j; check!= -1; ++check){
				printf("%c\n", c[check]);
				if(c[check] == '*' && c[check+1] == '/'){
					j = check+2;
					check = -2;
					printf("1 checked\n");
				}
			}
			printf("Read between comments.\n");

		}

		else{
			printf("Adding all well\n");
		}
}

	printf("%s \n", c);
	printf("%d\n", i);
}


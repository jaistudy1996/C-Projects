/* Name: Jayant Arora */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int sumofChar(char line[]);
//void asciiSum(char words, unsigned long sum);

int main(){
	char c[512];
	char wor;	
	int charLen, words, lines;
	int i, j, k;
	unsigned long checkSum;
	checkSum = 0;
	int ascii;
	int check = 0;
	words = charLen = lines = i = k=0;
	
	while((wor = getchar()) != EOF){
		++charLen;
		if (wor == ' ' | wor =='\n'){
			++words;
		}
		if (wor == '\n'){
			++lines;
		}
		c[i]=wor;
		++i;
	}
	
	for(k=0; k<i; k++){
		if((c[0] >= 'A' && c[0] <= 'Z' )){
			if(c[k+1] != '$' && c[k+1] != '*' && c[k+1] != '/' && c[k+1]>=97 && c[k+1]<=122 ) {
				c[k+1] = c[k+1] - 32;
			}
		}
	}
				// for converting lower case to upper case.
	
	for(j=0; j < i; ++j){
		if(c[j] == '$' && c[j+1] == '*'){   // multiplication
			char a = c[j+2];
			int mul = a - '0';
			checkSum = checkSum * mul;
			j = j+3;
		}
		if(c[j] == '$' && c[j+1] == '/' && c[j+2] != '*'){  // division
			char b = c[j+2];
			int divi = b - '0';
			checkSum = checkSum / divi;
			j = j+3;
		}
		if(c[j] != '$' && c[j] != '*' && c[j] != '/'){
			ascii = c[j];
			checkSum = checkSum + ascii;
		}
		// if(c[j] == '$' && c[j+1] == '/' && c[j+2] == '*'){
			
		// 	j = i;	// This will stop the iteration over the characters and the 
		// 	break;	// ones after $/* will not be counted.
		// }
		if(c[j] == '$' && c[j+1] == '/' && c[j+2] == '*'){
			for(check=j; check!= -1; ++check){
				if(c[check] == '*' && c[check+1] == '/'){
					j = check+1;
					check = -2;
				}
			}
		}
	}
	printf("\n%d , %d, %d, %lu \n", lines, charLen, words, checkSum);
	
}

/*
int sumofChar(char word[]){
	unsigned long sum;
	int i;
	int asciivalue;
	sum=0;
	for(i=0; i < sizeof(word); ++i){
		word[i] = asciivalue;
		sum += word[i];
	}
	printf(sizeof(word));
	return sum;
}
*/
#include <stdio.h>

int main(){
	int values[] = {11, 22, 33, 44, 55};
	int *ptrToIn;

	ptrToIn = values;
	
	for(int i =0; i<5; ++i){
		printf("%d\n", *(ptrToIn + i));
}

}
#include <stdio.h>

#include <string.h>

#ifdef GREATER
	#define compare(a,b)   (a > b  ? a : b)
#else 
	#define compare(a,b)   (a <= b ? a : b)
#endif

#ifdef NODEBUG
	#define debug 0
#else
	#define debug 1
#endif

int main ( int arc, char **argv ) {

	if(debug == 1){
    printf("comparing %s %s\n", argv[1], argv[2]); //debug trace


    printf("%d\n", compare( atoi(argv[1]), atoi(argv[2]) ) );
	}

    int i;
    int values[] = {11, 22, 33, 44, 55};
    int *ptrToIn;
    ptrToIn = values;
    for(i =0; i<5; ++i){
        printf("%d\n", *(ptrToIn + i));
    }
}

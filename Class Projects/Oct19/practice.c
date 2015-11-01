#include <stdio.h>
#include <string.h>

void go_south_east(int* lat, int* lon){
	*lon -= 1;
	*lat +=1 ;
}

int main(){
	int latitude = 32;
	int longitude = -64;
	char msg[] = "This is a line";
	go_south_east(&latitude, &longitude);
	printf("The updated location is : %i, %i\n", latitude, longitude);
	printf("And they occupy %lu bytes and %lu bytes.\n", sizeof(latitude), sizeof(latitude));
	printf("Text: %lu \n", sizeof(msg));	// actual size plus the \0 character.
	printf("This text is stored at: %p\n", &msg);
	printf("The first character is stored at: %p\n", &msg[0]);
	printf("The first character is stored at: %p\n", &msg[1]);
	printf("The first character is stored at: %p\n", &msg[2]);
	printf("The first character is stored at: %p\n", &msg[3]);
	printf("The first character is stored at: %p\n", &msg[4]);
	printf("Memory taken by the array is: %lu bytes.\n", sizeof(&msg));

	int contenstants[] = {1,2,3};
	int* choice = contenstants;
	printf("The number picked up is: %i\n", contenstants[2]);
	contenstants[0] = 2;
	contenstants[1] = contenstants[2];
	contenstants[2] = *choice;
	printf("The number picked up is: %i\n", contenstants[2]);

	printf("Array!!!!!!!!!!!\n\n\n\n");

	char s[] = "how big is it?";
	char* t = s;
	printf("This is a char array: %p\n", &s);
	printf("This is a char array: %p\n", &t);
	printf("This is a char array: %s\n", s);

	int name[] = {1,2,3};
	printf("Simple: %i\n", name[0]);
	printf("Pointer: %i\n", *(name+1));

	printf("THis is a long line: %p\n", (msg+2));	// the msg itself is a pointer.
	printf("THis is a long line: %c\n", *(msg+1));
}


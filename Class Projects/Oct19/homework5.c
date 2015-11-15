
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_REQUISITE 3
#define BLANK 8

struct course {
    char id[12];
    char name[64];
    struct course * prerequisites[MAX_REQUISITE];
} courses[] = {

	{ "CSC119", "Introduction to UNIX/Linux",  {0, 0, 0}  },
	{ "CSC121", "Introduction to Computing and the Web",  {0, 0, 0} },
	{ "CSC221", "Introduction to Programming",  {0, 0, 0} },
	{ "CSC311", "Computer Language",  {0, 0, 0} },
	{ "CSC314", "Non-Imperative Programming",  {0, 0, 0} },
	{ "CSC320", "System Administration",  {0, 0, 0} },
	{ "CSC323", "System Administration Tools",  {0, 0, 0} },
	{ "", "", {0, 0, 0} }

    };


struct requisite {
    char id[12];
    char requisiteid[12];    
} requisites[] = {

	{ "CSC221", "CSC119" },
	{ "CSC221", "CSC121" },
	{ "CSC311", "CSC221" },
	{ "CSC314", "CSC221" },
	{ "CSC320", "CSC119" },
	{ "CSC320", "CSC221" },
	{ "CSC323", "CSC320" },
	{ "", "" }

   };

/* find a course by id, if it is not found, will return null */
struct course * findCourse( char *  id ) {
   for ( int x = 0 ; strlen(courses[x].id) > 0 ; x++ ) {
        if ( strcmp(courses[x].id, id) == 0  ) {
            return &courses[x];
        }
   }
   return 0;
}


/* for the course in parameter, will set the course.prerequisites */
void setRequisites(struct course * ptrCourse) {
      int requisiteCtr = 0; // how many requisites this course has, it is incremented for each 
                            // requisite and used as an index in course.requisites
      for(int i=0; i<7; ++i){
        if(strcmp(ptrCourse->id, requisites[i].id) == 0){
          ptrCourse->prerequisites[requisiteCtr] = findCourse(requisites[i].requisiteid);
          requisiteCtr++;
        }
      }         
}


void printCourse(struct course * ptrCourse) {
       printf("%s %s\n", ptrCourse->id, ptrCourse->name);
       for ( int x = 0 ; ptrCourse->prerequisites[x] ; x++ ) {
           //print blanks at the beginning of each line
           for ( int y = 0 ; y < BLANK ; y++ ) {
               printf(" ");
           }
           printf("%s %s\n", ptrCourse->prerequisites[x]->id, ptrCourse->prerequisites[x]->name);
       }
}

void printAllCourses(struct course *ptrCourse, int blank){
  if(ptrCourse->prerequisites[0] == NULL){
    printf("%s %s\n", ptrCourse->id, ptrCourse->name);
  }
  else{
    if(strlen(ptrCourse->id) > 0){
      printf("%s %s\n", ptrCourse->id, ptrCourse->name);
    }
    for(int i=0 ; (i<3) && (ptrCourse->prerequisites[i] != NULL); ++i){ 
      for ( int y = 0 ; y < (BLANK * pow(2, blank)) ; y++ ) {
             printf(" ");
         }
      printAllCourses(ptrCourse->prerequisites[i], i+1);
    }
  }
}

int main ( int arc, char *argv[] ) {
  for ( int x = 0 ; strlen(courses[x].id) > 0 ; x++ ) {
    setRequisites( &courses[x] );
  }

  for ( int x = 0 ; strlen(courses[x].id) > 0 ; x++ ){
    printAllCourses(&courses[x], 0);
  }
}
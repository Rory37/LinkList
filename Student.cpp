#include <iostream>
#include "Student.h"
#include <cstring> //for copy


void Student :: setName(char* namen) { //will set the student's name
  name = new char[80]; //sets name as a new pointer to char [80]
  strcpy(name, namen); //gives the pointer something to point to
}

char* Student :: getName(){ //Returns student's name
  return name; 
}

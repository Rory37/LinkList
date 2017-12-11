#include <iostream>
#include "Student.h"
#include <cstring>


void Student :: setName(char* namen) {
  name = new char[80];
  strcpy(name, namen);
}

char* Student :: getName(){
  return name;
}

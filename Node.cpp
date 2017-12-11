#include "Node.h"

Node :: Node(Student* newStudent) { //constructor
  next = NULL; //defaults next null to be null
  student = newStudent; //creates the student which is contained in the node
}

Node :: ~Node() { //destructor
  delete student; //gets rid of stored student
  next = NULL; //sets what it was pointing to to null
}

void Node :: setNext(Node* newNext) {//to set the next node in the list
  next = newNext; 
}

Node* Node :: getNext() { //returns next node in the list
  return next;
}

Student* Node :: getStudent() { //returns the student
  return student;
}

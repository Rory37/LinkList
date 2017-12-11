#include "Node.h"

Node :: Node(Student* newStudent) {
  next = NULL;
  student = newStudent;
}

Node :: ~Node() {
  delete student;
  next = NULL;
}

void Node :: setNext(Node* newNext) {
  next = newNext;
}

Node* Node :: getNext() {
  return next;
}

Student* Node :: getStudent() {
  return student;
}

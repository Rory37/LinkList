#include "Node.h"
//#include "Student.h"
#include <iostream>

void newnode(Student*, Node*&);
void print(Node*, Node*&);

using namespace std;

int Main() {

  Node* curr;
  Student* teststu = new Student();
  newnode(teststu, curr);

}


void newnode(Student* stu, Node*& curr) {
  Node* track = curr;
  if (track == NULL) { //If there are no pre-existing node
    curr = new Node(stu);//Makes new Node
  }
  else {
    while (track -> getNext() != NULL) {//While the next node is not the end (null)
      track = track -> getNext(); //Moves down to the next node, and then checks that
    }
    track -> setNext(new Node(stu));//once at end sets new node at end with the student in it
    
  }
}

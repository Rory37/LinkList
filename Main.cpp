#include "Node.h"
#include <iostream>

//LinkedList Part 1
//By Aidan Derocher
//12/11/17
//A test program to prove that various nodes are linked together and can be added and printed through recursion

void newnode(Student*, Node*&); //A student to add and the first node
void print(Node*, Node*); //starts with both being the same

using namespace std; 

int main() {

  Node* curr = NULL; //Starts the node as null
  Student* teststu = new Student(); //Creates a test student
  newnode(teststu, curr); //Runs newnode passing teststu and curr in
  char* test = new char[80]; //Spot for test name
  cout << "Input Name of student" << endl; 
  cin.getline(test,80); //puts input into pointer
  curr -> getStudent() -> setName(test); //Makes the test the name of the first student
  print(curr, curr); //runs print, starting with both curr
  Student* teststu2 = new Student(); //Another test student
  newnode(teststu2, curr); //Makes another node with the new student
  char* test2 = new char[80];//name for new student
  cout << "Input Name of student" << endl;
  cin.getline(test2,80); //puts input into name pointer
  teststu2 -> setName(test2);//sets the students name
  print(curr, curr); //runs print with curr for both
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

void print(Node* n, Node* c) {
  if(n == c) { //If the next node is the same as the first one (is true first time called)
    cout << "Names: " << endl; //prints Names: but only once
  }
  if(n != NULL) {//if the current node is not null
    cout << n -> getStudent() -> getName() << ' '; //print out name in it's student
    print(n -> getNext(), c); //moves to next node in the line and runs print with that
  }
  cout << endl;
}

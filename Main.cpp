#include "Node.h"
//#include "Student.h"
#include <iostream>

void newnode(Student*, Node*&);
void print(Node*, Node*);

using namespace std;

int main() {

  Node* curr = NULL;
  Student* teststu = new Student();
  newnode(teststu, curr);
  char* test = new char[80];
  cout << "Input Name of student" << endl;
  cin.getline(test,80);
  curr -> getStudent() -> setName(test);
  print(curr, curr);
  Student* teststu2 = new Student();
  newnode(teststu2, curr);
  char* test2 = new char[80];
  cout << "Input Name of student" << endl;
  cin.getline(test2,80);
  teststu2 -> setName(test2);
  print(curr, curr);
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
  if(n == c) {
    cout << "Names: " << endl;
  }
  if(n != NULL) {
    cout << n -> getStudent() -> getName() << ' ';
    print(n -> getNext(), c);
  }
  cout << endl;
}

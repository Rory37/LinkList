#include "Student.h"
#include <iostream>

using namespace std;

class Node{
 public: //declares public functions
  Node(Student*); //constructor
  ~Node(); //destructor
  Node* getNext(); //gets the next in list
  void setNext(Node*);//sets the next in list
  Student* getStudent(); //gets the stored student

 private:
  Node* next; //stores what node is next in the list
  Student* student;// stores what student is in the node
};

#include <iostream>
#include <string>
#include "Student.h"
#include "Faculty.h"

using namespace std;

int main(int argc, char** argv)
{

  Student* s = new Student(1010, "Hank", "sophomore", "compsci", 3.5, 444);
  s->setMajor("Business");
  s->print();

  NaiveList* adIds = new NaiveList();
  adIds->insertFront(101);
  adIds->insertFront(102);
  adIds->insertFront(103);
  adIds->insertFront(104);

  Faculty* f = new Faculty(1010, "Hank", "teacher", "compsci", adIds);
  f->print();

  cout<<f->getName();

  delete s;
  delete f;
  delete adIds;

  return 0;
}

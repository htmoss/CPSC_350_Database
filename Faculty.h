#include <string>
#include <iostream>
#include "NaiveList.h"
using namespace std;

class Faculty
{
public:
  Faculty();
  Faculty(int id, string nm, string lvl, string dpmt, NaiveList* advIds);
  ~Faculty();

  void print();

//modifiers
  void setID(int id);
  void setName(string nm);
  void setLevel(string lvl);
  void setDepartment(string dpmt);
  void setAdviseesIds(NaiveList* adIds);
//accessors
  int getID();
  string getName();
  string getLevel();
  string getDepartment();
  NaiveList* getAdviseesIds();

private:
  int ID;
  string name;
  string level;
  string department;
  NaiveList* adviseesIDs;

};

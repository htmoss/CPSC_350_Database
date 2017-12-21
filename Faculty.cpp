#include "Faculty.h"
#include <string>
#include <iostream>
using namespace std;

Faculty::Faculty()
{
  ID = 0;
  name = '\0';
  level = '\0';
  department = '\0';
  adviseesIDs = NULL;
}

Faculty::Faculty(int id, string nm, string lvl, string dpmt, NaiveList* advIds)
{
  ID = id;
  name = nm;
  level = lvl;
  department = dpmt;
  adviseesIDs = advIds;
}

Faculty::~Faculty()
{
  adviseesIDs = NULL;
  delete[] adviseesIDs;
  cout<<"faculty deleted"<<endl;
}

void Faculty::print()
{
  cout<<"\nID: "<<ID<<"\nName: "<<name<<"\nLevel: "<<level<<"\nDepartment: "<<department<<"\nAdvisees ID's: "<<endl;
  adviseesIDs->printList();
}

//modifiers
void Faculty::setID(int id)
{
  ID = id;
}
void Faculty::setName(string nm)
{
  name = nm;
}
void Faculty::setLevel(string lvl)
{
  level = lvl;
}
void Faculty::setDepartment(string dpmt)
{
  department = dpmt;
}
void Faculty::setAdviseesIds(NaiveList* adIds)
{
  adviseesIDs = adIds;
}

//accessors
int Faculty::getID()
{
  return ID;
}
string Faculty::getName()
{
  return name;
}
string Faculty::getLevel()
{
  return level;
}
string Faculty::getDepartment()
{
  return department;
}
NaiveList* Faculty::getAdviseesIds()
{
  return adviseesIDs;
}

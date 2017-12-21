#include<iostream>
#include"NaiveList.h"

using namespace std;

NaiveList::NaiveList()
{
  size = 0;
  front = NULL;
}
NaiveList::~NaiveList()
{
  cout<<"NL deleted"<<endl;
}

void NaiveList::insertFront(int data)
{
  //check if its empty first
  ++size;
  ListNode* node = new ListNode(data);
  //change the new pointer to be pointing at front, then have front change to equal node
  node->next = front; //arrow for pointers
  front = node;
  //only do above for if the list is not empty
}

void NaiveList::insertBack(int data)
{
  //need to check if list is empty
  size++;
  ListNode *node = new ListNode(data);

  if(front == NULL)
    front = node;
  else
    back->next = node;
}

int NaiveList::removeFront()
{
  //if empty, return NULL instead
  //make check if its empty
  size--;
  int temp = front->data; //store the data from the node about to removeFront
  ListNode* tempFrontAddress = front;
  front = front->next;//move front over one
  tempFrontAddress->next = NULL;
  delete tempFrontAddress;
  return temp;
}

void NaiveList::printList()
{
  ListNode *current = front;
  if(current != NULL)
  {
    cout<< current->data << endl;
    while(current->next != NULL)
    {
      current = current->next;
      cout<< current->data << endl;
    }
  }
}

int NaiveList::find(int data)//finds first instance of data, or returns -1 if none are found
{
  //make necessary checks
  int idx = -1;
  ListNode *current = front;
  while(current->next != NULL)
  {
    ++idx;
    if(current->data == data)
    {
      break;
    }
    else
    {
      current = current->next;
    }
  }
  return idx;
}

int NaiveList::deletePos(int pos)
{
  int idx = 0;
  ListNode* current = front;
  ListNode* prev = front;
  while(idx != pos)//keep looping until finding node that needs to be deleted
  {
    ++idx;
    prev = current;
    current = current->next;
    //dont ever want to move front
  }
  //found our position/node
  prev->next = current->next;
  current->next = NULL;
  int d = current->data;
  delete current;
  size--;

  return d;
}

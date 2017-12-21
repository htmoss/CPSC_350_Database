#include "ListNode.h"
#include<iostream>
#include <string>
using namespace std;

ListNode::ListNode()
{

}

ListNode::ListNode(int d)
{
  data = d;
  next = NULL;
}

ListNode::~ListNode()
{
  if(next != NULL)
  delete next;
  cout<<"List node has been deleted"<<endl;
}

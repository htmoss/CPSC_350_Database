#include <string>
#include"ListNode.h"
using namespace std;

class NaiveList
{
  private:
    ListNode *front; //pointer to front of LL
    ListNode* back;
    unsigned int size;

  public:
    NaiveList();
    ~NaiveList();
    void insertFront(int data);
    void insertBack(int data);
    void printList();

    int removeFront();
    bool isEmpty();
    int find(int d);
    int deletePos(int pos);
    int getSize();
};

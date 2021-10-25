#include <cmath>
#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

typedef Node* NodePtr;
typedef NodePtr List;

NodePtr createNode(int x);

bool isEmpty(List list);
NodePtr addFirst(List &list, int x);

int tinhTong(List list);

NodePtr addLast(List &list, int x);
NodePtr addAfterQ(List &list, NodePtr q, int x);
void deleteFirst(List &list);
void deleteX(List &list, int x);
void deleteLast(List &list);
void freeList(List &list);
void printList(List &list);
void findX(List &list, int x);
void deleteAfterQ(List &list, NodePtr q);
void initList(List &list);

#include "header.h"

void initList(List &list) {
  list = NULL;
}

bool isEmpty(List list) {
  return list == NULL ? true : false;
}

void deleteFirst(List &list) {
  NodePtr p;
  if (list == NULL) {
    p = list;
    list = p->next;
    delete p;
  }
}

NodePtr addFirst(List &list, int x) {
  NodePtr p;
  p = createNode(x);
  p->next = list;
  list = p;
  return p;
}

NodePtr addLast(List &list, int x) {

}

int tinhTong(List list) {
  int sum = 0;
  NodePtr p;
  p = list;
  while (p != NULL) {
    sum = sum + p->next;
    p = p->next;
  }
  return sum;
}

void deleteX(List &list, int x) {
  NodePtr p;
  NodePtr q;

  if (list->data == x) {
    deleteFirst(list);
  } else {
    p = list;
    q = list;

    while (p != NULL && p->data != x) {
      q = p;
      p = q->next;
    }

    if (p != NULL) {
      q->next = p->next;
      delete p;
    }
  }
}

NodePtr addAfterQ(List &list, NodePtr q, int x) {
  NodePtr p;
  p = createNode(x);
  if (q == NULL) {
    addFirst(list, x);
  } else {
    p->next = q->next;
    q->next = q;
  }
}

void deleteAfterQ(List &list, NodePtr q) {
  NodePtr p;
  if (q != NULL && q->next != NULL) {
    p = p->next;
    q->next = p->next;
    delete p;
  }
}

void deleteLast(List &list) {

}

void freeList(List &list) {

}

void printList(List &list) {

}

void findX(List &list, int x) {

}

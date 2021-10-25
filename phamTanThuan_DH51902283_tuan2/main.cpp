#include "header.h"

int main() {
  List list;
  initList(list);

  int choose;
  int x;
  NodePtr result;
  do {
    cout << "\n Menu" << endl;
    cout << "1 - Add first" << endl;
    cout << "2 - Add last" << endl;
    cout << "3 - Add after Q" << endl;
    cout << "4 - Delete first" << endl;
    cout << "5 - Delete last" << endl;
    cout << "6 - Delete after Q" << endl;
    cout << "7 - Delete list" << endl;
    cout << "8 - Print list" << endl;
    cout << "9 - Find x" << endl;
    cout << "0 - exit" << endl;
    cout << "Please choose item";
    cin >> choose;
  switch (choose) {
    case 1:
      cout << "Enter x value:";
      cin >> x;
      addFirst(list, x);
      break;
    case 2:
      cout << "Enter x value:";
      cin >> x;
      addLast(list, x);
      break;
    case 3:
      break;
    case 4:
      deleteFirst(list);
      break;
    case 5:
      deleteFirst(list);
        break;
    case 6:
      break;
    case 7:
      freeList(list);
      break;
    case 8:
      printList(list);
      break;
    case 9:
      cout << "Enter x to find:";
      cin >> x;
      result = findX(list, x);
      if (result != NULL) {
        cout << "Found!";
      } else {
        cout << "Not found!";
      }
      break;
    default:
      break;
  }
  } while (choose != 0);

  tinhTong(list);

  return 0;
}

#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address allocate(infotype x);
void printInfo(List L);
void insertLast(List &L, address p);
void searchElement(List &L, infotype x);
void selectionSort(List &L);
void insertSorted(List &L, address p);

#endif // LIST_H_INCLUDED

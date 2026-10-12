#include "list.h"

void createList(List &L) {
    L.first = NULL;
}

address allocate(infotype x){
    address p = new elmlist;
    p->info = x;
    p->next = NULL;
    return p;
};

void printInfo(List L){
    address p = L.first;
    while(p!= NULL){
        cout << p->info;
        if(p->next != NULL){
            cout << ", ";
        }
        p = p->next;
    }
    cout << endl;
};

void insertLast(List &L, address p){
    if(L.first == NULL){
        L.first = p;
    } else{
        address q = L.first;
        while(q->next != NULL){
            q = q->next;
        }
        q->next = p;
    }
};

void searchElement(List &L, infotype x) {
    address current = L.first;
    int position = 1;

    while (current != NULL && current->info != x) {
        position = position + 1;
        current = current->next;
    }

    if (current != NULL) {
        cout << "Alamat dari Elemen " << x << " : " << current << " (tidak harus persis sama)" << endl;
    } else {
        cout << "Elemen tersebut tidak ada dalam list" << endl;
    }
}

void selectionSort(List &L) {
    address p = L.first;
    address min, temp;
    infotype x;

    while (p != NULL) {
        min = p;
        temp = p->next;

        while (temp != NULL) {
            if (temp->info < min->info) {
                min = temp;
            }
            temp = temp->next;
        }

        x = p->info;
        p->info = min->info;
        min->info = x;

        p = p->next;
    }
}

void insertSorted(List &L, address p) {
    address q = L.first;
    address prev = NULL;
    bool found = false;

    while (q != NULL && found == false) {
        if (q->info < p->info) {
            prev = q;
            q = q->next;
        } else {
            found = true;
        }
    }

    if (prev == NULL) {
        p->next = L.first;
        L.first = p;
    } else {
        prev->next = p;
        p->next = q;
    }
}

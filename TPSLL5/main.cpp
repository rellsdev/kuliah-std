#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List L;
    createList(L);

    int nilai1, nilai2, nilai3, nilai4;

    cout << "Input : ";
    cin >> nilai1 >> nilai2 >> nilai3 >> nilai4;

    insertLast(L, allocate(nilai1));
    insertLast(L, allocate(nilai2));
    insertLast(L, allocate(nilai3));
    insertLast(L, allocate(nilai4));

    cout << "Isi List Awal : ";
    printInfo(L);

    selectionSort(L);

    cout << "Isi List Setelah Di Sort : ";
    printInfo(L);

    int nilaiSorted;
    cout << "Input Sorted : ";
    cin >> nilaiSorted;

    insertSorted(L, allocate(nilaiSorted));

    cout << "Isi List Akhir : ";
    printInfo(L);

    int cariAngka1 = 5;
    cout << "Cari Elemen : " << cariAngka1 << endl;
    searchElement(L, cariAngka1);

    int cariAngka2 = 6;
    cout << "Cari Elemen : " << cariAngka2 << endl;
    searchElement(L, cariAngka2);

    return 0;
}

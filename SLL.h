#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

// wajib untuk diinisialisasikan
#include <iostream>
using namespace std;

// membuat alias untuk mempermudah compile
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

// Type Declaration
typedef int infotype;
typedef struct Element *adr;

struct Element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};
// ---

// Kontrak Fungsi
// Procedure Create_List (in/out L : List)
void Create_List(List &L);

// Procedure newElement (in x : infotype)
adr newElement(infotype x);

// Procedure Insert_first (in/out L : List, in P : adr)
void Insert_first(List &L, adr P);

// Procedure Show (in L : List)
void Show(List L);

// Procedure Delete_Last (in/Out L : List, Out P : adr)
adr Delete_Last(List &L);
// ---

#endif // SLL_H_INCLUDED

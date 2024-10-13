#include "SLL.h"

// List sebenarnya sudah ada, di-create pada fungsi main, dia akan
// pointer random pada first list

void Create_List(List &L) {
    first(L) = NULL;
};

adr newElement(infotype x) {
    adr P = new Element;
    info(P) = x;
    next(P) = NULL;
    return P;
};

void Insert_first(List &L, adr P) {
    if(first(L) == NULL) {
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    };
};

void Show(List L) {
    if(first(L) != NULL) {
        adr P = first(L);
        while (P != NULL) {
            cout << info(P) <<endl;
            P = next(P);
        }
        } else {
            cout << "List Kosong" << endl;
        };
};

adr Delete_Last(List &L) {
    adr p, q;

    if (first(L) == NULL) {
        p = NULL;
        cout << "List Kosong" << endl;
    } else if (next(first(L)) == NULL){
        p = first(L);
        first(L) = NULL;
    } else {
        q = first(L);
        p = first(L);
        while (next(p) != NULL) {
            q = p;
            p = next(p);
        };
        next(q) = NULL;
    };
    return p;
};

#include "SLL.h"

using namespace std;

int main()
{
    List L;
    cout << "first(L) sebelum createList : " << first(L) << endl;

    Create_List(L);
    cout << "first(L) setelah createList : " << first(L) << endl;
    cout << endl;

    // Memanggil fungsi new element
    adr P;
    P = newElement(10);
    cout <<"info(P) : "<< info(P) << endl;
    cout <<"next(P) : "<< next(P) << endl;

    // insert first
    cout << "first(L) sebelum insertFirst : " << first(L) << endl;
    Insert_first(L, P);
    cout << "first(L) setelah insertFirst : " << first(L) << endl;
    cout << "info First (L) : " << info(first(L)) << endl;

    P = newElement(100);
    Insert_first(L, P);
    cout << "info First(L) : " << info(first(L)) << endl;
    cout << endl;

    // show
    Show(L);

    P = newElement(230);
    Insert_first(L, P);
    cout << endl;

    Show(L);
    cout << endl;

    // Delete Last
    P = Delete_Last(L);
    Show(L);
    cout << info(P) << endl;
    cout << endl;

    Delete_Last(L);
    Show(L);
    cout << info(P) << endl;
    cout << endl;

    Delete_Last(L);
    Show(L);
    cout << info(P) << endl;

    return 0;
}

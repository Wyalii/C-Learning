#include <stdio.h>
#include <stdlib.h>

// FUnction for Pointer function topic
int add(int a, int b)
{
    return a + b;
}
// OFF TOPIC
void foo(int j)
{
    j++;
    printf("the value of j is the copy of the actual real data variable j, so its gone fater function ends. value of J: %d\n", j);
}
int main()
{
    int a = 15;
    int *p = &a;
    printf("pointer adress: %p\n", p); // prints address of a
    printf("pointer value: %d\n", *p); // prints value of a
    printf("pinter adress iteslf: %p\n", &p);
    printf("size of pointer in this system: %zu\n", sizeof(p)); // size of pointer in this system on 32 bit = 4 bits and on 64 = 8

    // NULL POINTER - its declared but initialized to null.
    int *pp = NULL;
    printf("Null pointer value: %d\n", pp); // null pointer pritsn 0 i guess.
    printf("Null pointer adress: %p\n", pp);

    // OFF TOPIC

    int j = 10;
    foo(j);
    printf("the value of j after foo function is still: %d\n", j);

    // Void Pointer - declared not initialized, later can be used for any data type but must be dereferenced

    void *vp;
    printf("Void pointer value: %d\n", vp);
    printf("Void pointer adress: %p\n", &vp);

    // Wild pointer - delcared but not initialized value.

    int *wp;
    printf("Wild pointer value: %d\n", wp);
    printf("Wild pointer adress: %p\n", &wp);

    // Danglign pointer
    int *dp = (int *)malloc(sizeof(int));
    // after freeing allocated memory on heap pointer becomes dangling.
    free(dp);
    printf("trying to print dangling pointer value: %d\n", dp); // undefined behaviour. from my experience it rpints different int every time.
    printf("trying to print dangling pointer address: %p\n", &dp);

    // Const pointer
    int som1 = 33;
    int const *cp = &som1;
    printf("Const pointer value (adress of som1): %p\n", cp);

    // Pointer to Function

    int (*fp)(int, int); //  this basically means a variables that poitns to function that returns int and gets 2 integers aswell.
    fp = &add;           // here we actually initialize this pointer by giving it addres fo our function add()
    printf("value printed by pointer function variable: %d\n", fp(10, 10));

    // Multilevel pointers (pointers to pointers)
    int var = 10;
    // pointer to var variable
    int *pvar = &var;
    // pointer to a pointer variable pvar
    int **ppvar = &pvar;

    printf("var variables value: %d\n", var);
    printf("the adress of var whitout pvar pointer: %p\n", &var);
    printf("value of pvar pointer: %p\n", pvar);
    printf("the adress of pvar pointer whitout ppvar pointer: %p\n", &pvar);
    printf("value of pointer to a pointer: %p\n", ppvar);

    // pointers to poitners are usefule when our program needs to change the adress of a pointer it points to.
    // and we might use another pointer for that.

    // POINTER ARITHMETICS IN C.

    // FORMULA: new adress = current address +or- (Number x size of data type)
}
#include <stdio.h>
#include <stdlib.h>
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

    // NULL POINTER
    int *pp = NULL;
    printf("Null pointer value: %d\n", pp); // null pointer pritsn 0 i guess.
    printf("Null pointer adress: %d\n", pp);

    // OFF TOPIC

    int j = 10;
    foo(j);
    printf("the value of j after foo func: %d\n", j);

    // Void Pointer

    void *vp;
    printf("Void pointer value: %d\n", vp);
    printf("Void pointer adress: %p\n", vp);

    // Wild pointer

    int *wp;
    printf("Wild pointer value: %d\n", wp);
    printf("Wild pointer adress: %p\n", wp);

    // Danglign pointer
    int *dp = (int *)malloc(sizeof(int));
    // after freeing allocated memory on heap pointer becomes dangling.
    free(dp);
    printf("trying to print dangling pointer value: %d\n", dp);     // undefined behaviour. from my experience it rpints different int every time.
    printf("trying to print dangling pointer address: %pu\n", &dp); // same undefined behaviour.

    // Const pointer
    int som1 = 33;
    int const *cp = &som1;
    printf("Const pointer value (adress of som1): %p\n", cp);
}
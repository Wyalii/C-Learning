#include <stdio.h>
#include <string.h>
int main()
{
    // Struct
    // struct members have their own memory lcoation.
    // its size si sum of all elements in struct.
    struct Person
    {
        char company[50];
        int lifespan;
    };

    struct Person person;
    strcpy(person.company, "GeeksForGeeks");
    person.lifespan = 50;

    printf("Name: %s\n", person.company);
    printf("Age: %d\n", person.lifespan);

    // Union
    // union members share same memory location.
    // its size is same as the largest member of the union.
    union Data
    {
        int i;
        float f;
        char str[20];
    };

    union Data data;
    data.i = 10;
    printf("Data.i: %d\n", data.i);
    data.f = 3.14;
    printf("Data.f: %f\n", data.f);
    strcpy(data.str, "GEEKSFORGEEKSBABAY");
    printf("Data.str: %s\n", data.str);

    // Enumeration enums
    // enums create some kind of numerical constant sequence for each its members
    enum Cafes
    {
        Dyu_Art_Cafe,
        Tea_Villa_Cafe,
        The_Hole_in_the_Wall_Cafe,
        Cafe_Azzure,
        The_Banaglore_Cafe,
        Dialogues_Cafe,
        Cafe_Coffee_Day
    };

    // Dyu_Art_Cafe = 0;
    // Tea_Villa_Cafe = 1;
    // The_Hole_in_the_Wall_Cafe = 2 and so on like an array.

    // Typedef
    // i don't understand its purpose really
    enum Cafes today = The_Banaglore_Cafe;
    printf("today is %d\n", today);

    typedef char Company;
    Company *name = "GeekFORGEEKSSSS";
    printf("%s\n", name);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Geeks"; // i guess we don;t have to specify amount of elements inthis kind of array because compiler does it for me.
    // also there is \0 at the end of every char array that indicates the end of this array so somethimes we will have to reserver extra byte for our strings.

    printf("my string: %s\n", str);          // s format specifier for strings
    printf("first character: %c\n", str[0]); // can acces elements like in any normal array.
    str[0] = 'F';
    printf("first character after: %c\n", str[0]);
    printf("strlen does not include the last \"\\0\": %d\n", strlen(str));

    char dest[20];
    strcpy(dest, str);
    printf("copied array strcpy: %s\n", dest); // rest 14 (including \0 at the end.) bytes are unused
    char dest2[20];
    strncpy(dest2, str, 3); // only copes 3 bytes form str char array
    printf("copied array strncpy: %s\n", dest2);
    // we can have string with amount of bytes that fit our word exactly but there wont be
    // a space for \0 terminator, that kind of string creates undefined behaviour
    // because fucntions like printf strncpy and ect are depenending on \0 termiantor.

    char s1[4] = "Cat";
    char s2[8] = "Meaow";
    strcat(s2, s1); // APPENDS CAT TO MEAWO STRING s2 has to be 9 bytes long
                    // since meaow is 5 bytes and cat is 3 bytes thats 8 in total
                    // but 1 bte is needed for \0 at the end
    printf("s2: %s\n", s2);
    // notice that 8 still works even with printf but thats beacuse byte after our array finished happened to be 0
    // there is no space for \0 so other functions cant detect \0 so it has undefined behaviour
    // that is why we will often see thigns like below:
    char newStr[] = "Cat";
    char newDest[strlen(newStr) + 1]; // 3 bytes plus 1 for \0 at the end

    char s3[6] = "Hello";
    char s4[6] = "Geeks";
    strncat(s3, s4, 3);
    printf("appends 3 bytes from s4 to s3: %s\n", s3);
    printf("size of s3 after append: %d\n", sizeof(s3));
    // here undefined behaviour. printf here only ends after it sees \0
    // there is not \0 our string is 6 bytes llong ubt it contains characters 10 bytes long.
    // but it still printed HelloGee because it happeneed that bytes after Hello were Gee so it was luck
    // that is the kind of undefined behavipr you have to deal with in C if you dont know about this stuff..
    // strings are really weird here...
    // there are more functions for later..
}

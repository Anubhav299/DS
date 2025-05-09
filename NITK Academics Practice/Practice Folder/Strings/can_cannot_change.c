#include <stdio.h>

int main ()
{
    // pointer and array are both same methods as Array is also a pointer.
    char *canChange="Hello World.";
    puts(canChange);
    canChange="Yellow !!";
    puts(canChange);


    char cannotChange[]="Hello World.";
    puts(cannotChange);
    // cannotChange="YOLOOO !";
    //cannot make changes in an array while changes can be made in pointer style.

    return 0;
}
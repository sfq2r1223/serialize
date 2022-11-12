#include "SomeClass.h"

#include <iostream>

int main()
{
    SomeClass obj1;
    obj1.setProp1(5);
    obj1.serialize("some_file.txt");
    return 0;
}
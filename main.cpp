#include "SomeClass.h"
#include <iostream>

int main()
{
    std::vector<int> vec{1,2,112};
    
    SomeClass obj;
    obj.setProp1(5);
    obj.setProp2(2.34);
    obj.setProp3(3.4);
    obj.setProp4("Serhii");
    obj.setProp5(12);
    obj.serialize("some_file.txt");
    
    SomeClass obj1;
    obj1.deserialize("some_file.txt");
    std::cout << obj1.getProp1() << " " << 
    obj1.getProp2() << " " << obj1.getProp3() << " " << 
    obj1.getProp4() <<  " "  << obj1.getProp5() << std::endl;
    
    return 0;
}
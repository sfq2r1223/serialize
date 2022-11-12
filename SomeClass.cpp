#include "SomeClass.h"

#include <fstream>

void SomeClass::serialize(const std::string& pathToFile)
{
   serializeProp1(pathToFile);
   //serializeProp2(pathToFile);
   //serializeProp3(pathToFile);
   //serializeProp4(pathToFile);
   //serializeProp5(pathToFile);
   //serializeProp6(pathToFile);
}

void SomeClass::serializeProp1(const std::string& pathToFile)
{
    int countOfBits = sizeof(someProp1) * 8;
    int count = countOfBits - 1;    
    //for (auto i : bits)
    //{
    //    i = (someProp1 << (countOfBits - count - 1));
    //    --count;
    //}
    
    std::ofstream file;
    file.open(pathToFile);
    if (file.is_open())
    {
        for (auto i : bits)
        {
            file << (someProp1 << (countOfBits - count - 1));
            --count;
        }
    }
    file.close();
}
//
//void SomeClass::serializeProp2(const std::string& pathToFile)
//{
//    int countOfBits = sizeof(someProp2) * 8;
//    int count = countOfBits - 1;    
//    for (auto i : bits)
//    {
//        i = someProp2 << (countOfBits - count - 1);
//        --count;
//    }
//    std::ofstream file(pathToFile);
//    if (file.is_open())
//    {
//        for (auto i : bits)
//            file << i;
//    }
//    file.close();
//}
//
//void SomeClass::serializeProp3(const std::string& pathToFile)
//{
//    int countOfBits = sizeof(someProp3) * 8;
//    int count = countOfBits - 1;    
//    for (auto i : bits)
//    {
//        i = someProp3 << (countOfBits - count - 1);
//        --count;
//    }
//    std::ofstream file(pathToFile);
//    if (file.is_open())
//    {
//        for (auto i : bits)
//            file << i;
//    }
//    file.close();
//}
//
//void SomeClass::serializeProp4(const std::string& pathToFile)
//{
//    int countOfBits = sizeof(someProp4) * 8;
//    int count = countOfBits - 1;    
//    for (auto i : bits)
//    {
//        i = someProp4 << (countOfBits - count - 1);
//        --count;
//    }
//    std::ofstream file(pathToFile);
//    if (file.is_open())
//    {
//        for (auto i : bits)
//            file << i;
//    }
//    file.close();
//}
//
//void SomeClass::serializeProp5(const std::string& pathToFile)
//{
//    int countOfBits = sizeof(someProp5) * 8;
//    int count = countOfBits - 1;    
//    for (auto i : bits)
//    {
//        i = someProp5 << (countOfBits - count - 1);
//        --count;
//    }
//    std::ofstream file(pathToFile);
//    if (file.is_open())
//    {
//        for (auto i : bits)
//            file << i;
//    }
//    file.close();
//}
//
//void SomeClass::serializeProp6(const std::string& pathToFile)
//{
//    int countOfBits = sizeof(someProp6) * 8;
//    int count = countOfBits - 1;    
//    for (auto i : bits)
//    {
//        i = someProp6 << (countOfBits - count - 1);
//        --count;
//    }
//    std::ofstream file(pathToFile);
//    if (file.is_open())
//    {
//        for (auto i : bits)
//            file << i;
//    }
//    file.close();
//}

void SomeClass::deserialize(const std::string& pathToFile)
{
    
}

//setters
void SomeClass::setProp1(const int newProp1)
{
    this->someProp1 = newProp1;
}

void SomeClass::setProp2(const double newProp2)
{
    this->someProp2 = newProp2;
}

void SomeClass::setProp3(const float newProp3)
{
    this->someProp3 = newProp3;
}

void SomeClass::setProp4(const std::string& newProp4)
{
    this->someProp4 = newProp4;
}

void SomeClass::setProp5(const std::vector<int> newProp5)
{
    this->someProp5 = newProp5;
}

void SomeClass::setProp6(const std::function<void()> newProp6)
{
    this->someProp6 = newProp6;
}

//getters

int SomeClass::getProp1()
{
    return someProp1;
}

double SomeClass::getProp2()
{
    return someProp2;
}

float SomeClass::getProp3()
{
    return someProp3;
}

std::string SomeClass::getProp4()
{
    return someProp4;
}

std::vector<int> SomeClass::getProp5()
{
    return someProp5;
}

std::function<void()> SomeClass::getProp6()
{
    return someProp6;
}






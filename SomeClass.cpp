#include "SomeClass.h"

#include <fstream>

void SomeClass::serialize(const std::string& pathToFile)
{
    std::ofstream fout(pathToFile, std::ios_base::binary);
    fout << someProp1 << " ";
    fout << someProp2 << " ";
    fout << someProp3 << " ";
    fout << someProp4 << " ";
    fout << someProp5 << " ";
    fout.close();
}


void SomeClass::deserialize(const std::string& pathToFile)
{
    std::ifstream fin(pathToFile, std::ios_base::binary);
    fin >> someProp1;
    fin >> someProp2;
    fin >> someProp3;
    fin >> someProp4;
    fin >> someProp5;
    fin.close();
}

//setters
void SomeClass::setProp1(const int newSomeProp1)
{
    this->someProp1 = newSomeProp1;
}

void SomeClass::setProp2(const double newSomeProp2)
{
    this->someProp2 = newSomeProp2;
}

void SomeClass::setProp3(const float newSomeProp3)
{
    this->someProp3 = newSomeProp3;
}

void SomeClass::setProp4(const std::string& newSomeProp4)
{
    this->someProp4 = newSomeProp4;
}

void SomeClass::setProp5(const std::size_t newSomeProp5)
{
    this->someProp5 = newSomeProp5;
}


//getters
int SomeClass::getProp1() const
{
    return someProp1;
}

double SomeClass::getProp2() const
{
    return someProp2;
}

float SomeClass::getProp3() const
{
    return someProp3;
}

std::string SomeClass::getProp4() const
{
    return someProp4;
}

std::size_t SomeClass::getProp5() const
{
    return someProp5;
}





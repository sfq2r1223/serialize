#pragma once

#include <map>
#include <string>
#include <vector>

class SomeClass final
{
public:
    SomeClass() = default;
    SomeClass& operator=(const SomeClass&) = default;
    ~SomeClass() = default;

    void serialize(const std::string& pathToFile);
    void deserialize(const std::string& pathToFile);

    //setters
    void setProp1(const int newSomeProp1);
    void setProp2(const double newSomeProp2);
    void setProp3(const float newSomeProp3);
    void setProp4(const std::string& newSomeProp4);
    void setProp5(const std::size_t newSomeProp5);
    
    //getters
    int                 getProp1() const;
    double              getProp2() const;
    float               getProp3() const;
    std::string         getProp4() const;
    std::size_t         getProp5() const;
private:
    int                 someProp1 = 0;
    double              someProp2 = 0.0;
    float               someProp3 = 0.f;
    std::string         someProp4;
    std::size_t         someProp5 = 0; 
};

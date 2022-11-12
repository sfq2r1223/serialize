#pragma once

#include <vector>
#include <functional>
#include <string>

class SomeClass final 
{
public:
    SomeClass() = default;
    SomeClass& operator=(const SomeClass&) = default;
    ~SomeClass() = default;     
                                    
    void                       serialize(const std::string& pathToFile);
    void                       deserialize(const std::string& pathToFile);
                               
    void                       serializeProp1(const std::string& pathToFile);
    void                       serializeProp2(const std::string& pathToFile);
    void                       serializeProp3(const std::string& pathToFile);
    void                       serializeProp4(const std::string& pathToFile);
    void                       serializeProp5(const std::string& pathToFile);
    void                       serializeProp6(const std::string& pathToFile);
                               
    //setters                  
    void                       setProp1(const int newProp1);
    void                       setProp2(const double newProp2);
    void                       setProp3(const float newProp3);
    void                       setProp4(const std::string& newProp4);
    void                       setProp5(const std::vector<int> newProp5);
    void                       setProp6(const std::function<void()> newProp6);
    //getters                  
    int                        getProp1();
    double                     getProp2();
    float                      getProp3();
    std::string                getProp4();
    std::vector<int>           getProp5();
    std::function<void()>      getProp6();
private:                            
    int                       someProp1 = 0;
    double                    someProp2 = 0.0;
    float                     someProp3 = 0.f;
                              
    std::string               someProp4;
    std::vector<int>          someProp5;
    std::function<void()>     someProp6;
                                        
    std::vector<int>          bits;
};                          

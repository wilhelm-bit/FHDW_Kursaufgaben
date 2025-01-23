#include <iostream>
#include<list>


class car{
    public:
    std::string name;
    std::string under_name;
    int weight;
    int space;
    std::list<std::string> companies;


    car& setname(const std::string& newname){
        this->name = newname;
        return *this;
    }
};





int main(){


    car volvo;
    volvo.name = "volvo";

    //std::cout << volvo.name;
   
    volvo.setname("vw_polo");
    std::cout << volvo.name; 
}
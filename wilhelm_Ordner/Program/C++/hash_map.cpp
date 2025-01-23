#include <iostream>
#include <vector>
#include <unordered_map>



int main(){

    std::unordered_map<std::string, int> mymap;
    mymap.insert(std::make_pair("key1", 100));
    std::unordered_map<int, int> map = {{1,33},
                                                {2,2},
                                                {3,3}};



    
    /*std::cout << mymap.at("key1");
    if (mymap.count("key6") > 0) {
        std::cout << "Key exists!" << std::endl;
    }
    else{
        std::cout << "Key doesn't exist.";
    }
    */
    map[2]= 44;
    map.insert({4,5});
    map.insert({77,77});
    //map.emplace("schlüssel6",1212); // emplace ist besser als insert, weil keine kopien erstellt werden. 
    //std::cout << map.at("schlüssel6");
    
    for(const auto& pair : map){
        std::cout <<pair.first<< ":"<< pair.second<<"\n";
    }
    
    auto variable = map.begin();
    std::cout << variable->first;
}

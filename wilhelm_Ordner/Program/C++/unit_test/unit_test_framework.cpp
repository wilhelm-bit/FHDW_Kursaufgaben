#include <iostream>
#include <vector>
#include "example(bubble_sort).cpp"

bool test(std::vector<int>& expected, std::vector<int>& actual, int size){
    
    return expected==actual;
}

void test_case(std::vector<int>& array,int size, std::vector<int>& expected){
    bubble_sort(array,size);
    bool result = test(expected,array,size);
    
    
    if(result== 1){
        std::cout <<"Test is successfull"<<'\n';
    }
    else if(result == 0){
        std::cout << "Error: ";
        for(const int& value : array){
            std::cout << value<<',';
        }
        std::cout << '\n';
    }
}






int main(){
     // Test 1
    std::vector<int> array = {4,3,5,6,1,2};
    std::vector<int> expected = {1,2,3,4,5,6};
    test_case(array, array.size(), expected);

    // Test 2
    array = {4,3,5,6,1,2,4,4,4};
    expected = {1,2,3,4,4,4,4,5,6};
    test_case(array, array.size(), expected);

    // Test 3
    array = {1,1,1,1,1};
    expected = {1,1,1,1,1};
    test_case(array, array.size(), expected);

    // Test 4
    array = {1,2,3,4,5};
    expected = {1,2,3,4,5};
    test_case(array, array.size(), expected);

    // Test 5 - Leeres Array
    array = {};
    expected = {};
    test_case(array, array.size(), expected);

    // Test 6 - Ein Element
    array = {4};
    expected = {4};
    test_case(array, array.size(), expected);

    // Test 7 - Unsortierte und gemischte Zahlen
    array = {4,-2,3,-5};
    expected = {-5,-2,3,4};
    test_case(array, array.size(), expected);
    

    // Test 8 - Array mit mehrfachen Elementen
    array = {3,2,1,1,2,3};
    expected = {1,1,2,2,3,3};
    test_case(array, array.size(), expected);
}
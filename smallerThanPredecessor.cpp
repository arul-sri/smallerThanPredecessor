#include <iostream>
#include <sstream>
#include <string>
#include <vector>


/*
Write a function, named "smaller_than_predecessor", that takes a reference to a vector of ints. It should 
return an iterator pointing at the first element that is strictly smaller than the element before it. You 
can assume that the vector has at least two elements. If no element qualifies, return an iterator to one 
past the end of the vector.
*/

auto smaller_than_predecessor(std::vector<int> &vec){
    int previous = 0;
    int current = 0;
    for (auto ptr = vec.begin()+1; ptr != vec.end(); ++ptr){
        previous = *(ptr-1);
        current = *ptr;
        if (current<previous){
            return ptr;
        }
    }
    return vec.end();
}

int main(){
    std::vector<int> input = {1, 3, 7, 4, 10, 99};
    std::cout<< *smaller_than_predecessor(input);
}
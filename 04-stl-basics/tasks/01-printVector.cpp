#include <iostream>
#include <vector>
#include <string>

void printVector (const std::vector<std::string>& vec)
{
    for(auto v : vec){
        std::cout << v << std::endl;
    }

}
int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}

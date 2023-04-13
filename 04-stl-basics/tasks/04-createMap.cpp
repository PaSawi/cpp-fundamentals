#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>

std::map<int, std::string> createMap(std::vector<int> ve, std::list<std::string> li){
    
    std::map<int, std::string> ma{};
    auto li_it = li.begin();
    auto ve_it = ve.begin();
    
   for(;ve_it != ve.end(); li_it++, ve_it++){
       ma[*ve_it] = *li_it;
   }
    return ma;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}

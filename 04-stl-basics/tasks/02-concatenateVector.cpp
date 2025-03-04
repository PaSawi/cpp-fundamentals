#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from
// the first and the other one.
std::vector<int> concatenateVector(const std::vector<int>& lhs,
                                   const std::vector<int>& rhs) {
    std::vector<int> result;
    for (size_t i = 0; i < (lhs.size() <= rhs.size() ? lhs.size() : rhs.size());
         ++i) {
        result.push_back(lhs[i]);
        result.push_back(rhs[i]);
    }

    return result;
}
int main() {
    std::vector<int> vec1{1, 2, 3, 4, 5, 6, 7};
    std::vector<int> vec2{11, 12, 13, 14, 15, 16, 17, 18, 19};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}

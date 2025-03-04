#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

void foo(std::shared_ptr<int> ptr)
{
    *ptr = 20;

    std::cout << "num: " << *ptr << "  use_count() of it in foo(): " << ptr.use_count() << "\n" ;
}

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    // display the value under number pointer and use_count() of it
    std::cout << "use_count() of it in main(): " << number.use_count() << "\n" ;
    std::cout << "number = " << *number << "\n";
    foo(number);
    // display the value under number pointer and use_count() of it
    std::cout << "use_count() of it in main(): " << number.use_count() << "\n" ;
    std::cout << "number = " << *number << "\n";

    return 0;
}

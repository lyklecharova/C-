#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
int main()
{
    // typedef = reserved keyword used to create an additional name
    // (alias) for another data types
    // New identifier for an existing type
    // Helps with readability and reduces types
    // Use when there is a clear benefit
    // Replaced wiht "using" (work better w/ templetes)

    // pairlist_t pairlist;
    text_t firstName = "Bro";
    number_t age = 21;
    std::cout << firstName << "\n";
    std::cout << age << "\n";
    return 0;
}
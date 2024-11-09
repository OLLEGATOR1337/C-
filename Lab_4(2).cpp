#include <iostream>

struct FruitCounts 
{
    int apples;
    int pears;
    int oranges;
};
int main()
{
    FruitCounts counts;
    std::cout << "Apples:";
    std::cin >> counts.apples;

    std::cout << "Pears:";
    std::cin >> counts.pears;

    std::cout << "Oranges:";
    std::cin >> counts.oranges;

    bool condition = false;

    {
        bool applesCondition = counts.apples > 5;
        bool pearsCondition = counts.pears < 8;
        bool orangesCondition = counts.oranges >= 2 * counts.apples;

        condition = applesCondition && pearsCondition && orangesCondition;
    }

    if (condition)
    {
        std::cout << "Hello" << std::endl;
    }
   
}
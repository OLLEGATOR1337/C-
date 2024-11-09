#include <iostream>

void product(std::span inputOutput, std::span coefficients)
{
    assert(inputOutput.size() == coefficients.size());

    
        // Бесконечный цикл с использованием break
        for (size_t i = 0;; i++)
        {
            inputOutput[i] *= coefficients[i];
            if (i == inputOutput.size() - 1) break;
        }

    // Цикл while с условием
    size_t i = 0;
    while (i < inputOutput.size())
    {
        inputOutput[i] *= coefficients[i];
        i++;
    }

    // Цикл for
    for (size_t i = 0; i < inputOutput.size(); i++)
    {
        inputOutput[i] *= coefficients[i];
    }
}

int main()
{
    std::array<int, 5> arr1 = { 1, 2, 3, 4, 5 };
    std::array<int, 5> arr2 = { 2, 3, 4, 5, 6 };

   
        product(arr1, arr2);

    for (int num : arr1)
    {
        std::cout << num << " ";
    }

    return 0;
}
#include "closures.h"

void printMatrix(const std::vector<std::vector<bool>> &matrix);

int main()
{
    std::vector<std::vector<bool>> tester = {
        {1, 0, 0, 1, 0},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {0, 1, 0, 0, 1}};
    reflexiveClosure(tester);
    printMatrix(tester);
    symmetricClosure(tester);
    printMatrix(tester);
    transitiveClosure(tester);
    printMatrix(tester);

    return 0;
}



void printMatrix(const std::vector<std::vector<bool>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (bool cell : row)
        {
            std::cout << (cell ? "1 " : "0 ");
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << std:: endl;
}

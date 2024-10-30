#include "closures.h"
void reflexiveClosure(std::vector<std::vector<bool>> &matrix)
{
    for(int i = 0; i < matrix.size(); i++)
    {
        matrix[i][i] = matrix[i][i] | 1;
    }
    
}

void symmetricClosure(std::vector<std::vector<bool>> &matrix)
{
    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        {
            matrix[j][i] = matrix[i][j] | matrix[j][i];
            matrix[i][j] = matrix[j][i] | matrix[i][j];
        }
    }
    
}

void transitiveClosure(std::vector<std::vector<bool>> &matrix)
{

    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        {
            if(matrix[i][j])
            {
                for(int k = 0; k < matrix[j].size(); ++k)
                {
                    matrix[i][k] = matrix[i][k] | matrix[j][k];
                }
            }
        }
    }
}
#ifndef CLOSURES_H
#define CLOSURES_H

#include <iostream>
#include <vector>

void reflexiveClosure(std::vector<std::vector<bool>> &matrix);
void symmetricClosure(std::vector<std::vector<bool>> &matrix);
void transitiveClosure(std::vector<std::vector<bool>> &matrix);

#endif
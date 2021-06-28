#include <iostream>
#include <vector>

namespace clc{

    template <typename T>
    void rotateLeft(std::vector<std::vector<T>>&);

    template <typename T>
    void rotateLeft(std::vector<std::vector<T>>&, int);

    template <typename T>
    void rotateRight(std::vector<std::vector<T>>&);

    template <typename T>
    void rotateRight(std::vector<std::vector<T>>&, int);

    template <typename T>
    void writeArray(std::vector<std::vector<T>>&);

}
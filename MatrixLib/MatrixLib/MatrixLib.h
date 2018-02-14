// MatrixLib.h

#pragma once
#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport)
#else
#define MATHLIB_API __declspec(dllimport)
#endif


#include <vector>
MATHLIB_API int AddMatrix(std::vector<std::vector<int>> &A, std::vector<std::vector<int>> &B, std::vector<std::vector<int>> &C);
MATHLIB_API int SubtractMatrix(std::vector<std::vector<int>> &A, std::vector<std::vector<int>> &B, std::vector<std::vector<int>> &C);
MATHLIB_API int multiplyMatrix(std::vector<std::vector<int>> &A, std::vector<std::vector<int>> &B, std::vector<std::vector<int>> &C);

MATHLIB_API int TransposeMatrix(std::vector<std::vector<int>> &A, std::vector<std::vector<int>> &C);
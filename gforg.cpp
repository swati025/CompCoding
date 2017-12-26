// CompCoding.cpp : Defines the entry point for the console application.
//
/* KADANE's Algorithm*/

#include <iostream>
#include <vector>

#define MIN -999

int kadane(std::vector<int>, int);
int T, N, input, sum = 0;

int main()
{
  std::vector<int>::iterator it;
  std::cin >> T;     //no. of test cases
  std::vector<int> Arr;
  while (T--)
  {
    std::cin >> N;
    for (int j = 0; j < N; j++)
    {
      std::cin >> input;
      Arr.emplace_back(input);
    }
    std::cout <<kadane(Arr, Arr.size());
    Arr.clear();
  }
  return 0;
}


int kadane(std::vector<int> Arr, int size)
{
  int max = MIN;
  for (int j = 0; j < size; j++)
  {
    sum = 0;
    for (int i = 1; i <= size; i++)
    {
      if ((i + j) > size)
        break;
      sum += Arr[i + j - 1];
      max = (sum > max) ? sum : max;
    }
  }
  return max;
}
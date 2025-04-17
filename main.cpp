//
// Created by John Moyer on 4/16/2025.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <random>
#include "sorting.h"
#include "stopwatch.h"


std::vector<int> generatePermutation(int n);

int main() {
    constexpr int N = 1000;
    constexpr int RUNS = 1024;
    double cumulativeTime = 0;
    for (int i = 0; i < RUNS; i++) {
        std::vector<int> permutation = generatePermutation(N);
        startTimer();
        insertionSort(permutation);
        cumulativeTime += stopTimer();
    }
    std::cout << "Insertion sort of size: " << N << std::endl
    << "Average time over " << RUNS << " runs: " << cumulativeTime / RUNS << std::endl;

    for (int i = 0; i < RUNS; i++) {
        std::vector<int> permutation = generatePermutation(N);
        startTimer();
        selectionSort(permutation);
        cumulativeTime += stopTimer();
    }
    std::cout << "Selection sort of size: " << N << std::endl
    << "Average time over " << RUNS << " runs: " << cumulativeTime / RUNS << std::endl;

}

// Generate a random permutation of integers [0 , N -1]
// mt19937 is a Mersenne Twister random number generator
std::vector<int> generatePermutation(const int n) {
    std::vector <int> arr(n);
    for(int i = 0; i < n; ++i) arr[i] = i;
    std::shuffle(arr.begin(), arr.end(), std::mt19937(std::random_device()()));
    return arr;
}

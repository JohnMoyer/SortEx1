//
// Created by John Moyer on 4/16/2025.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <random>

int main() {
    return 0;
}

// Generate a random permutation of integers [0 , N -1]
// mt19937 is a Mersenne Twister random number generator
std::vector<int> generatePermutation(const int n) {
    std::vector <int> arr(n);
    for(int i = 0; i < n; ++i) arr[i] = i;
    std::shuffle(arr.begin(), arr.end(), std::mt19937(std::random_device()()));
    return arr;
}

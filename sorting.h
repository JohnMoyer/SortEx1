//
// Created by John Moyer on 4/16/2025.
//

#pragma once
#include <vector>

std::vector<int> permutation(int n);
void selectionSort(std::vector<int>& arr);
void insertionSort(std::vector<int>& arr);

inline void selectionSort(std::vector<int>& arr) {
    const int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        std::swap(arr[i], arr[minIdx]);
    }
}

inline void insertionSort(std::vector<int>& arr) {
    const int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = key;
    }
}
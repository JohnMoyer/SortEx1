//
// Created by John Moyer on 4/16/2025.
//

#pragma once
#include <chrono>

inline std::chrono::steady_clock::time_point start;

inline void startTimer () {
	start = std::chrono::steady_clock::now();
}

inline double stopTimer () {
	const auto end = std::chrono::steady_clock::now();
	const std::chrono::duration<double> elapsed = end - start ;
	return elapsed.count();
}

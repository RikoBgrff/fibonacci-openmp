// Name: Arifali Baghirli
// Student ID: 210201848
// Assignment: CENG 303 Assignment 3 
// Find Fibonacci using OpenMP (paralel)

#include <iostream>
#include <vector>
#include <omp.h>

// Function to calculate Fibonacci 
unsigned long long fibonacci(int n) {
    if (n <= 1) return n;
    unsigned long long prev = 0, current = 1, temp;
    for (int i = 2; i <= n; ++i) {
        temp = current;
        current += prev;
        prev = temp;
    }
    return current;
}

int main() {
    int startPoint, endPoint;

    // Waiting for user,user should enter start and end
    std::cout << "Enter the start point: ";
    std::cin >> startPoint;
    std::cout << "Enter the end point: ";
    std::cin >> endPoint;

    if (startPoint < 0 || endPoint < startPoint) {
        std::cerr << "Invalid type of points! Start should be more than zero and not bigger than End point\n";
        return 1;
    }

    std::vector<unsigned long long> results(endPoint - startPoint + 1);

    // Paralel computation processes
#pragma omp parallel for
    for (int i = startPoint; i <= endPoint; ++i) {
        results[i - startPoint] = fibonacci(i);
    }

    // printing results
    std::cout << "Fibonacci numbers in the given interval [" << startPoint << ", " << endPoint << "]:\n";
    for (int i = 0; i < results.size(); ++i) {
        std::cout << "Fibo(" << (startPoint + i) << ") = " << results[i] << "\n";
    }

    return 0;
}

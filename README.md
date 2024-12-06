CENG 303 Operating Systems Design and Construction 
Problem Solving with Multithreaded Programming

Definition of Problem:
The task is to calculate Fibonacci numbers in a range using parallel programming. Fibonacci numbers are processed as F(n)=F(n−1)+F(n−2)F(n) = F(n-1) + F(n-2)F(n)=F(n−1)+F(n−2), with initial values F(0)=0F(0) = 0F(0)=0 and F(1)=1F(1) = 1F(1)=1. 
I used OpenMP multithreading for this problem.

Parallel Programming Method Used
OpenMP (Open Multi-Processing) is a shared-memory parallel programming model supported in C/C++. It simplifies parallelism with compiler directives. The #pragma omp parallel for directive is used to split a loop across multiple threads.
Algorithm Description
1 Input: Read the start and end of the range for Fibonacci numbers.
2.Validation: Ensure valid input (start ≥ 0, start ≤ end).
3.Parallel Computation:
•	Use #pragma omp parallel for to compute Fibonacci numbers for each value in the range concurrently.
•	Each thread executes the iterative Fibonacci calculation independently.
4.Output: Print the results.

Conclusion

Using OpenMP to calculate Fibonacci numbers in parallel reduced execution time significantly for larger ranges. OpenMP is a powerful tool for shared-memory parallelism, making it ideal for tasks like this. Future improvements could involve optimizing the Fibonacci calculation to leverage memoization or avoiding redundant computations.


# ISPC SPMD Parallel Computing Example

## Overview
This project demonstrates computing `sin(x)` using the **Taylor Series Approximation**, implemented in both C++ and ISPC for parallel execution.

## Requirements
- GCC or Clang
- ISPC Compiler (Download from [https://ispc.github.io/](https://ispc.github.io/))

## Installation & Usage
1. Clone the repository:
   ```sh
   git clone https://github.com/PramithaMJ/ispc-sinx-optimizer.git
   cd ispc-sinx-optimizer
   ```
2. Compile the code:
   ```sh
   make
   ```
3. Run the program:
   ```sh
   ./main
   ```
4. Clean up:
   ```sh
   make clean
   ```

## Expected Output
The program will print `sin(x)` results for the first 10 values, computed with both C++ and ISPC implementations.

## Conclusion
By using ISPC, we achieve a **significant speedup** over sequential C++ execution by utilizing **SIMD parallelism**.
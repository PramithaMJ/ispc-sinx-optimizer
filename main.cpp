/* Main Program */
#include <iostream>
#include "sinx.h"
#include "sinx_ispc.h"

int main()
{
    int N = 1024;
    int terms = 5;
    float *x = new float[N];
    float *result_cpp = new float[N];
    float *result_ispc = new float[N];

    // Initialize x with values
    for (int i = 0; i < N; i++)
    {
        x[i] = (i % 360) * 3.14159f / 180.0f; // Convert degrees to radians
    }

    // Compute using C++
    sinx(N, terms, x, result_cpp);

    // Compute using ISPC
    ispc_sinx(N, terms, x, result_ispc);

    // Output first 10 results
    for (int i = 0; i < 10; i++)
    {
        std::cout << "x: " << x[i] << " C++: " << result_cpp[i] << " ISPC: " << result_ispc[i] << std::endl;
    }

    delete[] x;
    delete[] result_cpp;
    delete[] result_ispc;
    return 0;
}

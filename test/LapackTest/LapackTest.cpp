#include <iostream>
#include <lapacke/lapacke.h> 

int main()
{
    int j;
    int size = 4;

    // matrix A of Ax = B
    float a[16] = {1, 1, 1 , 1, -2, -1, 1, 2, 4, 1, 1, 4, -8, -1, 1, 8};

    // vector B of Ax = B
    float b[4] = { 0, 1, 0, 0 };

    // array to store pivot indices
    int p[4] = { 0, 0, 0, 0 };

    LAPACKE_sgesv(LAPACK_ROW_MAJOR, size, 1, a, size, p, b, 1);

    /* print solution of x */
    for(j=0; j < size; j++)
    {
        std::cout << b[j] << "\n";
    }

    return 0;
}  

/*
12. A matrix M with i rows, j columns can be transposed into a matrix N having j rows and i columns by simply setting the value of Na,b equal to the value of Mb,a for all relevant values of a and b.
Using variable-length arrays, write the transposeMatrix() function that takes the number of rows and columns as arguments, and to transpose the matrix of the specified dimensions. Also write a main() routine to test the function.
*/

#include <stdio.h>

// function to find the sum of all elements in array

void transposeMatrix (int height, int width,
                      int M[][50], int N[][50])
{
    int i, j;

    for (i = 0; i < height; i++)
        for (j = 0; j < width; j++)
            N[j][i] = M[i][j];
}

int main (void)
{
    static int n = 5;
    static int m = 10;

    int M[n][50];
    int N[m][50];

    int i, j;

    for (i = 0; i < n; i++) {
        printf("\n");

        for (j = 0; j < m; j++) {
            M[i][j] = 2*i + j;

            printf ("%-2i  ", M[i][j]);
        }
    }

    transposeMatrix(n, m, M, N);

    printf("\n\nTransposed matrix: \n\n");

    for (i = 0; i < m; i++) {
        printf("\n");

        for (j = 0; j < n; j++) {
            printf ("%-2i  ", N[i][j]);
        }
    }

    printf("\n");

    return 0;
}

#include <iostream>
using namespace std;

#define BASE 10
#define N 10

void make_int(int A[], int n)
{
    int i = 0;

    while (n)
    {
        A[i++] = n % BASE;
        n /= BASE;
    }

    while (i < N)
    {
        A[i++] = 0;
    }
}

int main()
{
    int A[N];

    make_int(A, 123);

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
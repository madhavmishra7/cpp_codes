#include <iostream>
#include <cstdlib>
using namespace std;

void insertionSort(int a[], int l, int r)
{
    for (int i = l + 1; i <= r; i++)
    {
        int key = a[i], j = i - 1;

        while (j >= l && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int partition(int a[], int l, int r)
{
    int pivot = a[l + rand() % (r - l + 1)];
    int i = l - 1, j = r + 1;

    while (true)
    {
        do
        {
            i++;
        } while (a[i] < pivot);
        do
        {
            j--;
        } while (a[j] > pivot);

        if (i >= j)
            return j;

        swap(a[i], a[j]);
    }
}

void quickSort(int a[], int l, int r)
{
    while (l < r)
    {
        if (r - l < 10)
        {
            insertionSort(a, l, r);
            return;
        }

        int p = partition(a, l, r);

        if (p - l < r - p)
        {
            quickSort(a, l, p);
            l = p + 1;
        }
        else
        {
            quickSort(a, p + 1, r);
            r = p;
        }
    }
}

int main()
{
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void printsort(int array[], int n, int swap[], int a) //prints the sorted arrays
{
    for(int i = 0; i < n; i++)
    {
        printf("%d: %d\n", array[i], swap[i]);
    }
    printf("%d\n\n", a); //total # of swaps
}

void bubsort(int array1[], int n) //bubble sort
{
    int array2[9], temp, totalswap = 0, swap[9] = {0};

    for(int a = 0; a < n; a++)
        array2[a] = array1[a];



for (int i = 0; i < n-1; i++)
    {
    for (int j = 0; j < n-1-i; j++)
        {
            if (array1[j] > array1[j+1])
            {
                temp = array1[j];
                array1[j] = array1[j+1];
                array1[j+1] = temp;

                temp = swap[j];
                swap[j] = swap[j+1];
                swap[j+1] = temp;

                totalswap++;
                swap[j]++;
                swap[j+1]++;
            }
        }
    }
    printsort(array1, n, swap, totalswap);
}

void selsort(int array[], int n) //selection sort
{
    int i, j, min, temp, totalswap = 0, swap[9] = {0};;
    for (i = 0; i < n-1; i++)
    {
        min = i;

        for (j = i+1; j < n; j++)
        {
            if (array[j] < array[min])
                min = j;
        }

        if(i != min)
        {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;

            temp = swap[i];
            swap[i] = swap[min];
            swap[min] = temp;

            totalswap++;
            swap[i]++;
            swap[min]++;
        }
    }
    printsort(array, n, swap, totalswap);
}

int main()
{
    int array1a[9] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    int array2a[9] = {90,  80,  70,  60,  50,  40,  30,  20,  10};

    printf("Array1 Bubble Sort:\n");
    bubsort(array1a, 9);
    printf("Array2 Bubble Sort:\n");
    bubsort(array2a, 9);

    int array1b[9] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    int array2b[9] = {90,  80,  70,  60,  50,  40,  30,  20,  10};

    printf("Array1 Selection Sort:\n");
    selsort(array1b, 9);
    printf("Array2 Selection Sort:\n");
    selsort(array2b, 9);


    return 0;
}

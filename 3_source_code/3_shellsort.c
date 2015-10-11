#include <stdio.h>

void shellsort(int v[], int n);

int main()
{
    int v[] = {1, 3, 5, 8, 6, 4};
    shellsort(v, 6);
    return 0;
}

void shellsort(int v[], int n)      
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i-gap; j >= 0 && v[j] > v[j+gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j+gap];    
                v[j+gap] = temp;
            }

    for (i=0; i < n; i++)
        printf("%d ", v[i]);

}

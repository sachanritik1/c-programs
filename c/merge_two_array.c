#include <stdio.h>
    void main()
    {
 
        int m, n, i, j, k = 0;
        printf("\n Enter size of array Array 1: ");
        scanf("%d", &m);
        int array1[m];
        printf("\n Enter sorted elements of array 1: \n");
        for (i = 0; i < m; i++) 
        {
            scanf("%d", &array1[i]);
        }
        printf("\n Enter size of array 2: ");
        scanf("%d", &n);
        int array2[n], array3[m+n];
        printf("\n Enter sorted elements of array 2: \n");
        for (i = 0; i < n; i++) 
        {
            scanf("%d", &array2[i]);
        }
 
        i = 0;
        j = 0;
 
        while (i < m && j < n) 
        {
            if (array1[i] < array2[j]) 
            {
                array3[k] = array1[i];
                i++;
            }
            else
            {
                array3[k] = array2[j];
                j++;
            }
            k++;
        }
 
        if (i >= m) 
        {
            while (j < n) 
            {
                array3[k] = array2[j];
                j++;
                k++;
            }
        }
 
        if (j >= n) 
        {
            while (i < m)
            {
                array3[k] = array1[i];
                i++;
                k++;
            }
        }
        i=0;
        printf("\n After merging: \n");
        while( i < m + n) 
        {
            if(array3[i]=array3[i+1]) 
            {
                 printf("\n%d", array3[i]);
                 ++i;
            }
            else printf("\n%d", array3[i]);
            ++i;
        }
 
    }
#include<stdio.h>
#define a 3
#define b 3
#define max 100
int main()
{      
      // Intialising a 2-d array
	int arr[a][b] = {{1, 2, 3},
		            {4, 5, 6},
				{7, 8, 9}	};

	// storing elements in 1-d array
	int i, j, k = 0;
	int array[max];
	for (i=0; i<a; i++)
	{
		for (j=0; j<b; j++)
		{
			k = i*a + j;
			array[k] = arr[i][j];
			k++;
		}
	}
// displaying elements in 1-d array
	for (i=0; i<a; i++)
	{
                 for (j=0; j<b; j++)
                            printf("%d ", *(array + i*a + j));
		
	}
   return 0;
}


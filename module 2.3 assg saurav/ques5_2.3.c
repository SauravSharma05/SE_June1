 #include <stdio.h>
 
 int main ()
    {
        int A[30];
        int i, j, a, n;
        printf("Enter the value of N\n");
        scanf("%d", &n);
        printf("Enter the numbers \n");
        for (i = 0; i < n; i++)
	        scanf("%d", &A[i]);
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (A[i] < A[j]) 
                {
                    a = A[i];
                    A[i] = A[j];
                    A[j] = a;
                }
            }
        }
        for (i = 0; i < n; ++i) 
        {	
            printf("%d ", A[i]);
        }
    }
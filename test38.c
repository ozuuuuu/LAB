#include <stdio.h> 
int main() 
{     int n, i;     
    int a[20], b[20];           
    printf("Enter the size of array: ");     
    scanf("%d", &n);           
    printf("Enter the elements of first array:\n");     
    for(i = 0; i < n; i++)     
    {         
        scanf("%d", &a[i]);     
    }           
    for(i = 0; i < n; i++)     
    {         
        b[i] = a[i];     
    }           
    printf("Elements of second array are:\n");     
    for(i = 0; i < n; i++)     
    {         
        printf("%d ", b[i]);     
    }      
    return 0; 
} 
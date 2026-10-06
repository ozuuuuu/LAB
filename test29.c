#include <stdio.h>  
int main() 
{   int n, i;     
    int a[20];     
    int sum = 0;     
    float avg;      
    printf("Enter the number of elements: ");     
    scanf("%d", &n);      
    for(i = 0; i < n; i++)     
    {         
        printf("Enter element %d: ", i + 1);         
        scanf("%d", &a[i]);         
        sum = sum + a[i];    
    }      
    avg = (float)sum / n;      
    printf("\nSum of array elements = %d", sum);     
    printf("\nAverage of array elements = %.2f", avg);      
    return 0; 
} 
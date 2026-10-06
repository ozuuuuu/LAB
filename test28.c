#include <stdio.h> 
int main() 
{   int n, i; 
    int a[20]; 
    printf("Enter the number of elements: ");
    scanf("%d", &n); 
    for(i = 0; i < n; i++) 
    { 
        printf("Enter element %d: ", i + 1); 
        scanf("%d", &a[i]); 
    } 
    printf("\nArray elements are:\n"); 
    for(i = 0; i < n; i++) 
    {
        printf("%d ", a[i]); 
    } return 0;   
} 
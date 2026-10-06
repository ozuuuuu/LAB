#include <stdio.h>  
int main() 
{   int n, a[20], i;     
    int even = 0, odd = 0;          
    printf("Enter the size of array: ");     
    scanf("%d", &n);          
    printf("Enter the array elements:\n");     
    for(i = 0; i < n; i++)     
    {         
        scanf("%d", &a[i]);     
    }      
    // Count even and odd numbers     
    for(i = 0; i < n; i++)     
    {         
        if(a[i] % 2 == 0)             
            even++;         
        else             
            odd++;     
    }      
    // Display the results     
    printf("Number of even numbers: %d\n", even);     
    printf("Number of odd numbers: %d\n", odd);      
    return 0; } 
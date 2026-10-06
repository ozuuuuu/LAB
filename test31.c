#include <stdio.h>  
int main() 
{   int n, a[20], i;     
    int max, min;        
    printf("Enter the size of array: ");     
    scanf("%d", &n);        
    printf("Enter the array elements:\n");     
    for(i = 0; i < n; i++)     
    {         
        scanf("%d", &a[i]);     
    }            
     max = a[0];     
     min = a[0];       
     for(i = 1; i < n; i++)     
     {         
        if(a[i] > max)             
        max = a[i];         
        if(a[i] < min)             
        min = a[i];     
    }          
    printf("Largest element: %d\n", max);     
    printf("Smallest element: %d\n", min);      
    return 0;
} 
#include <stdio.h> 
int main() 
{   int n, a[20], i;     
    int max;       
    printf("Enter the size of array: ");     
    scanf("%d", &n);        
    printf("Enter the array elements:\n");     
    for(i = 0; i < n; i++)     
    {         
        scanf("%d", &a[i]);     
    }         
    max = a[0];         
    for(i = 1; i < n; i++)     
    {         
        if(a[i] > max)             
        max = a[i];     
    }     
    printf("The largest element in the array is: %d\n", max);      
    return 0; 
}

#include <stdio.h> 
#include <limits.h> 
int main() 
{     int n, a[20], i;     
    int max, second_max;        
    printf("Enter the size of array: ");     
    scanf("%d", &n);         
    printf("Enter the array elements:\n");     
    for(i = 0; i < n; i++)     
    {         
        scanf("%d", &a[i]);     
    }      
    max = a[0];     
    second_max = INT_MIN;          
    for(i = 1; i < n; i++)     
    {         
        if(a[i] > max)         
        {             
            second_max = max;             
            max = a[i];         
        }         
        else if(a[i] > second_max && a[i] != max)         
        {             
            second_max = a[i];        
        }    
    }      // Display result     
    if(second_max == INT_MIN)        
     printf("No second largest element found (all elements may be equal).\n");    
    else         
    printf("The second largest element is: %d\n", second_max);      
    return 0; 
} 
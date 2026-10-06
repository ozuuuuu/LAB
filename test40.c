#include <stdio.h>  
int main() 
{     int n, i;     
    int a[20];     
    int positive = 0, negative = 0, zero = 0;       
    printf("Enter the size of array: ");     
    scanf("%d", &n);          
    printf("Enter the array elements:\n");     
    for(i = 0; i < n; i++)     
    {         
        scanf("%d", &a[i]);     
    }          
    for(i = 0; i < n; i++)     
    {         
        if(a[i] > 0)             
        positive++;         
        else if(a[i] < 0)             
        negative++;         
        else             
        zero++;     
    }        
    printf("Number of positive elements: %d\n", positive);     
    printf("Number of negative elements: %d\n", negative);     
    printf("Number of zeros: %d\n", zero);      
    return 0; 
} 
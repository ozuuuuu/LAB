#include <stdio.h>  
int main() 
{   int n, a[20], i, key, pos = -1;           
    printf("Enter the size of array: ");     
    scanf("%d", &n);         
    printf("Enter the array elements:\n");     
    for(i = 0; i < n; i++)     
    {         
        scanf("%d", &a[i]);     
    }      
    printf("Enter the element to search: ");     
    scanf("%d", &key);       
    for(i = 0; i < n; i++)     
    {         
        if(a[i] == key)         
        {             
            pos = i + 1;               
            break;         
        }     
    }           
    if(pos == -1)         
    printf("Element not found");     
    else         
    printf("Element %d found at position %d", key, pos);      
    return 0; 
} 
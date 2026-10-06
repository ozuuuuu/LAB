#include <stdio.h>  
int main() 
{     int n, a[20], i, key;     
    int low, high, mid, pos = -1;          
    printf("Enter the size of array: ");     
    scanf("%d", &n);           
    printf("Enter the array elements in sorted order:\n");     
    for(i = 0; i < n; i++)     
    {         
        scanf("%d", &a[i]);     
    }           
    printf("Enter the element to search: ");     
    scanf("%d", &key);          
    low = 0;     high = n - 1;       
    while(low <= high)     
    {         
        mid = (low + high) / 2;          
        if(a[mid] == key)         
        {             
            pos = mid + 1;               
            break;         
        }         
        else if(key < a[mid])         
        {             
            high = mid - 1;         
        }         
        else         
        {             
            low = mid + 1;         
        }     
    }          
    if(pos == -1)        
    printf("Element not found");     
    else         
    printf("Element %d found at position %d", key, pos);      
    return 0; 
} 
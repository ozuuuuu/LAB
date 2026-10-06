#include <stdio.h>  
int main() 
{     int a[20], b[20], c[40];     
    int n1, n2, i, j;          
    printf("Enter number of elements in first array: ");     
    scanf("%d", &n1);      
    for(i = 0; i < n1; i++)     
    {         
        printf("Enter element %d: ", i + 1);         
        scanf("%d", &a[i]);     
    }          
    printf("\nEnter number of elements in second array: ");     
    scanf("%d", &n2);      
    for(i = 0; i < n2; i++)     
    {         
        printf("Enter element %d: ", i + 1);         
        scanf("%d", &b[i]);     }          
        for(i = 0; i < n1; i++)     
        {         
            c[i] = a[i];     
        } for(j = 0; j < n2; j++) 
        { 
            c[n1 + j] = b[j]; 
        }  
        printf("\nMerged array elements are:\n"); 
        for(i = 0; i < n1 + n2; i++) 
        { 
            printf("%d ", c[i]);
        } 
        return 0; 
    } 
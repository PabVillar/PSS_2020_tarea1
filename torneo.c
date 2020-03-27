#include <stdio.h>
#include <stdlib.h>

void rotar(int A[], int n){

    int aux;
    
    for (int i = n-1; i > 1; i--)
    {
        aux = A[i-1];
        A[i-1] = A[i];
        A[i] = aux; 
        
    }

}

void showVs(int A[], int n){
    for (int i = 0; i < n/2; i++)
    {
        
        printf("%d", A[i]);
        printf("%s", "-");
        printf("%d",A[n-1-i]);
        printf("%s", " ");
    }
    
}


int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = i+1;
        
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%s", "Semana ");
        printf("%d", i+1);
        printf("%s", ": ");
        showVs(A,n);
        printf("%s\n", "");
        rotar(A,n);        
    }
    
    
    
    
    return 0;
}

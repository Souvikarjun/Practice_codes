#include<stdio.h>


int main(){
    int n, m, Frequency=0;

    printf("Input matrix value: ");
    scanf("%d%d", &n, &m);

    int matrix[n][m];

    for(int j=0; j<n; j++){
    for (int i = 0; i < m; i++)
    {
        printf("element - [%d] [%d] : ", j, i);
        scanf("%d", &matrix[j][i]);
    }
    }
    
    for ( int j=0; j<n; j++){
    
    for(int i=0; i<m; i++){
    if(matrix[j][i]%2==0){
        Frequency++;
            }
        }
    }
    

    printf("the even numvers appeared %d times in the matrix", Frequency);

    return 0;
    
}
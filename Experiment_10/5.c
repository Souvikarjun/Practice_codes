#include<stdio.h>

int Large(int arr[], int n){
    int temp;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n; j++)
        {
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[j] = arr[i];
                arr[j] = temp;
            }
            else{
                temp = arr[j];
            }
        }

    }

    return temp;    
}

int main(){
    int n;
    printf("The array length: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &array[i]);
    }
    

    int large = Large(array, n);
    printf("The Largest number: %d", large);


    return 0;
}
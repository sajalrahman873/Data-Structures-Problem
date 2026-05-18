
#include<stdio.h>
int main(){

    int n1;
    printf("Enter n1 size = ");
    scanf("%d", &n1);

    int arr[n1];
    printf("Enter sorted elements for arr:\n");
    for(int i = 0; i < n1; i++){
        scanf("%d",  &arr[i]);
    }

    int n2;
    printf("Enter n2 size = ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter sorted elements for arr2:\n");
    for(int i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
    }

    int mer[n1+n2];

    int i = 0, j = 0, k = 0;

    // Merge
    while(i < n1 && j < n2){
        if(arr[i] < arr2[j]){
            mer[k] = arr[i];
            i++;
        }
        else{
            mer[k] = arr2[j];
            j++;
        }
        k++;
    }


    while(i < n1){
        mer[k] = arr[i];
        i++;
        k++;
    }

    while(j < n2){
        mer[k] = arr2[j];
        j++;
        k++;
    }

    // Print
    printf("Sorted merged array = ");
    for(int i = 0; i < n1+n2; i++){
        printf("%d ", mer[i]);
    }

    return 0;
}

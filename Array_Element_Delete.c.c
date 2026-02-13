#include<stdio.h>
int main(){
// n = Array size
int n;
printf("Enter array size = ");
scanf("%d" , &n);

// Declare an  Array ( arr)
int arr[n];
for(int i = 0 ; i < n ; i++){

    printf("Enter Element No %d =  " , i+1);
    scanf("%d" , &arr[i]);
}

// Array delete
int pos;
printf("Enter position to delete = \n");

scanf("%d" , &pos);

if(pos < 0 || pos >= n){

    printf("Invalaid Position");
}
else{
    for(int i = pos; i < n-1 ; i++){

        arr[i] = arr[i+1];

    }

    n--;
    printf("New array = \n");

    for(int i = 0 ; i < n ; i++){

    printf("%d\n" , arr[i]);
}

}

return 0;
}

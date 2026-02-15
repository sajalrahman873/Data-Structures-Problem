#include<stdio.h>
int main(){

int n;
printf("Enter size = ");
scanf("%d" , &n);

int arr[n];
for(int i = 0; i < n ; i++){

    printf("Enter %d No Element " , i+1);
    scanf("%d" , &arr[i]);

}
//Array print
printf("ARRAY = ");
for(int i = 0; i < n ; i++){

    printf("%d " , i+1);

}

// Take position and value
int pos, v;
printf("Enter position (0 to n-1 )");
scanf("%d" , &pos);
printf("Enter Value = ");
scanf("%d" , &v);

if(pos < 0 || pos >=  n){
    printf("Invaliad position");
}else{
arr[pos] = v;
printf("New Array  ");
for(int i = 0 ; i < n ; i++){

    printf("%d" , arr[i]);
}

}





return 0;
}

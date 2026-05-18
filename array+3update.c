#include <stdio.h>

int main() {
    int n;

    printf("Enter size = ");
    scanf("%d", &n);

    int arr[n];   // variable length array

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // update logic
    for(int i = 0; i < n; i++) {
        if(arr[i] % 3 == 0) {
            arr[i] += 4;
        }
    }

    printf("Updated array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

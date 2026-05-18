
#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], pos[n], neg[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int p = 0, ne = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            pos[p] = arr[i];
            p++;
        }
        else if(arr[i] < 0) {
            neg[ne] = arr[i];
            ne++;
        }
    }

    printf("Positive numbers:\n");
    for(int i = 0; i < p; i++) {
        printf("%d ", pos[i]);
    }

    printf("\nNegative numbers:\n");
    for(int i = 0; i < ne; i++) {
        printf("%d ", neg[i]);
    }

    return 0;
}

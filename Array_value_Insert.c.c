#include<stdio.h>
int main()
{
// n = size
    int n;
    printf("Enter Size = ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        printf("Enter Element no %d = ", i+1);
        scanf("%d", &arr[i]);
    }

//Position and Vlaue
    int pos, v;
    printf("Enter Position = ");
    scanf("%d", &pos);
    printf("Enter Value = ");
    scanf("%d", &v);

    if(pos < 0 || pos > n)
    {
        printf("Invalid Position");
    }
    else
    {
        for(int i = n ; i > pos ; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = v;
        n++;
        printf("Array after insertion:\n");
        for(int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }


    }
    return 0;
}

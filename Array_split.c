#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size = ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {

        printf("Enter %d no Element = " , i+1);
        scanf("%d", &arr[i]);

    }

    int even[n], odd[n];
    int evenCount = 0,oddCount = 0;

    for(int i = 0; i < n ; i++)
    {

        if(arr[i] %2 == 0)
        {
            even[evenCount] = arr[i];

            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }

    }
    printf("Even Number \n");
    for(int i = 0 ; i < evenCount; i++)
    {

        printf("%d\n",even[i]);}

        printf("odd Number \n");
        for(int i = 0 ; i < oddCount; i++)
        {

            printf("%d\n",odd[i]);
            }

            return 0;
        }

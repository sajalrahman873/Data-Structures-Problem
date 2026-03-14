#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter size of Array no 1 = ");
    scanf("%d", &n1);

    int a[n1];
    for(int i = 0; i <n1 ; i++)
    {

        printf("Enter %d no element = ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter size of Array 2 = ");
    scanf("%d", &n2);
    int b[n2];
    for(int j = 0 ; j < n2 ; j++)
    {

        printf("Enter %d no element = ", j+1);
        scanf("%d", &b[j]);
    }

    int merged[n1+n2];
    for(int i = 0; i <n1; i++)
    {
        merged[i] = a[i];

    }
    for(int j = 0; j < n2; j++)
    {

        merged[n1+j] = b[j];
    }

    printf("Print Merged Array\n");
    for(int i = 0; i < n1+n2; i++)
    {
        printf("%d\n", merged[i]);
    }

    return 0;
}

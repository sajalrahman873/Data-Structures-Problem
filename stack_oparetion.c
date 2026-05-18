#include <stdio.h>

int main() {
    int n, choice, value;
    int top = -1;

    printf("Enter stack size: ");
    scanf("%d", &n);

    int stack[n];

    while(1) {
        printf("\n1.PUSH  2.POP  3.DISPLAY  4.EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(top == n - 1) {
                printf("Stack Overflow\n");
            } else {
                printf("Enter value: ");
                scanf("%d", &v);
                top++;
                stack[top] = v;
                printf("Inserted successfully\n");
            }
        }

        else if(choice == 2) {
            if(top == -1) {
                printf("Stack Underflow\n");
            } else {
                printf("Deleted value: %d\n", stack[top]);
                top--;
            }
        }


        else if(choice == 3) {
            if(top == -1) {
                printf("Stack is empty\n");
            } else {
                printf("Stack elements:\n");
                for(int i = top; i >= 0; i--) {
                    printf("%d\n", stack[i]);
                }
            }
        }


        else if(choice == 4) {
            break;
        }

        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}

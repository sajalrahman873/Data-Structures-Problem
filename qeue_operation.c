#include <stdio.h>

int main() {

    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int q[n];
    int front = -1, rear = -1;
    int choice, value;

    while(1) {

        printf("\n1.Enqueue 2.Dequeue 3.Display 0.Exit\n");
        scanf("%d", &choice);

        if(choice == 1) {

            if(rear == n - 1) {
                printf("Full\n");
            }
            else {
                printf("Enter value: ");
                scanf("%d", &value);

                if(front == -1) front = 0;

                rear++;
                q[rear] = value;
            }
        }


        else if(choice == 2) {

            if(front == -1) {
                printf("Empty\n");
            }
            else {
                printf("Deleted: %d\n", q[front]);
                front++;

                if(front > rear) {
                    front = rear = -1;
                }
            }
        }


        else if(choice == 3) {

            if(front == -1) {
                printf("Empty\n");
            }
            else {
                for(int i = front; i <= rear; i++) {
                    printf("%d ", q[i]);
                }
                printf("\n");
            }
        }

        else if(choice == 0) {
            break;
        }

        else {
            printf("Wrong choice\n");
        }
    }

    return 0;
}

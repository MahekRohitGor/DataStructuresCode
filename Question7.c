// Write a program to implement the concept of Stack with Push, Pop, Display and Exit operations.(Using Array)
#include<stdio.h>

int main(){

    

    int arr[5];
    int choice;
    int top = -1;
    int data;
    do{
        printf("\nEnter your choice ! \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nEnter data: ");
        scanf("%d", &data);
        if(top == 4){
            printf("Overflow !\n");
        }
        else{
             top++;
             arr[top] = data;
             printf("Data is succesfully pushed onto stack !\n");
        }
        break;

    case 2:
        if(top == -1){
            printf("Underflow !\n");
        }
        else{
             top--;
             printf("Data is succesfully popped from stack !\n");
        }
        break;

    case 3:
        if(top > -1){
            printf("\nElements of Stack : \n");
            for(int i=top; i>=0; i--){
                printf("\n %d ", arr[i]);
            }
        }
        break;
    
    default:
        break;
    }

    }while(choice != 4);
    
    

    return 0;
}
//Circular Queue
#include<stdio.h>
#define MAX 10 
int FRONT = -1;
int REAR = -1;
int queue[MAX];
void insert(int num);
void delete(void);
void peek(void);
void display(void);


int main(){
    int choice;
for(int i=0; i<10; i++)
{
    printf("**********Start Menu**********\n");
    printf("1. Insert an element\n");
    printf("2. Delete an element\n");
    printf("3. Peek an element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Enter a number to be inserted: ");
            int num;
            scanf("%d", &num);
            insert(num);
            printf("Number is inserted successfully !\n");
        break;
    
        case 2:
            delete();
            printf("Deleted an element !\n");
        break;

        case 3:
            peek();
        break;
    
        default:
            printf("Enter correct choice !");
        break;
    }
}
    return 0;

}    

void insert(int num){
    if(FRONT == 0 && REAR == MAX-1){
        printf("OVERFLOW\n");
    }
    else if(FRONT != 0 && REAR == MAX-1){
        REAR = 0;
        queue[REAR] = num;
    }
    else if(REAR != MAX-1){
        REAR = REAR + 1;
        queue[REAR] = num;
    }
    else{
        REAR++;
        queue[REAR] = num;
    }
}

void delete(void){
    if(FRONT == -1 && REAR == -1){
        printf("Underflow\n");
    }
    else if(FRONT == REAR){
        FRONT = REAR = -1;
    }
    else if(FRONT == MAX-1){
        FRONT = 0;
    }
    else{
        FRONT = FRONT + 1;
    }
}

void peek(void){
        if(FRONT == -1 && REAR == -1){
            printf("Queue is Empty \n");
        }
        else{
            printf("%d\n", queue[REAR]);
        }
}

// Write a program to create double linked list and sort the elements in the linked list.
#include<stdio.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *tail = NULL;

void addNode(int data){
    struct node *newNode = (struct node*)(malloc(sizeof(struct node)));
    newNode->data = data;
    if(head == NULL){
        head = newNode;
        tail = newNode;
        head->prev = NULL;
        tail->next = NULL;
    }
    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        tail->next = NULL;
    }
}

void sorting(){
    struct node *current = NULL, *index = NULL;
    int temp;
    if(head == NULL){
        return;
    }
    else{
        for(current = head; current->next != NULL; current = current->next){
            for(index = current->next; index != NULL; index = index->next){
                if(current->data > index->data){
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp; 
                }
            }
        }
    }

}

void display(){
    struct node *currentNode = head;
    if(head == NULL){
        printf("List is empty !");
    }
    else{
        while(currentNode != NULL){
            printf(" %d ", currentNode->data);
            currentNode = currentNode->next;
        }
        printf("\n");
    }
}

int main(){
    int n,n1;
    int key;
    printf("How many nodes you want to create ? \n");
    scanf("%d", &n);

    printf("Enter data for list: ");
    for(int i=0; i<n; i++){
        scanf("%d", &n1);
        addNode(n1);
    }

    sorting();
    display();



    return 0;
}
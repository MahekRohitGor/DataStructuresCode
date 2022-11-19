// Write a program to search the elements in the linked list and display the same
#include<stdio.h>
struct node{
    int data;
    struct node *next;
};

struct node *head,*tail = NULL;
void addNode(int data){
        struct node *newNode = (struct node*)(malloc(sizeof(struct node)));
        newNode->data = data;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        
    }

int searchElement(int item)
{
    struct node* current = head;  // Initialize current
    int index = 0;
    // traverse till then end of the linked list
    while (current != NULL)
    {
        if (current->data == item){
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
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

    printf("Enter element to search: ");
    scanf("%d", &key);
    int x = searchElement(key);
    if(x != -1){
        printf("Element found at %d", x);
    }
    else{
        printf("Element not found !");
    }

    return 0;
}
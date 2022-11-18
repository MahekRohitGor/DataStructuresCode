#include<stdio.h>

    struct node{
        int data;
        struct node *next;
    };

    struct node *head, *tail = NULL;

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

    void disp(){
        struct node *current = head;
        if(head == NULL){
            printf("List is empty !");
        }
        else{
            printf("Reversed Nodes are: \n");
            while(current != NULL){
                printf(" %d ", current->data);
                current = current->next;
            }
        }
    }

    void revDisp(){
        struct node *prevNode, *currentNode;
        if(head == NULL){
            printf("Empty List !");
        }
        else{
            prevNode = head;
            currentNode = head->next;
            head = head->next;
            prevNode->next = NULL;
            while(head != NULL){
                head = head->next;
                currentNode->next = prevNode;
                prevNode = currentNode;
                currentNode = head;
            }
            head = prevNode;

        }
    }
int main(){
    int n,n1;
    printf("How many nodes you want to create ? \n");
    scanf("%d", &n);

    printf("Enter data for list: ");
    for(int i=0; i<n; i++){
        scanf("%d", &n1);
        addNode(n1);
    }

    revDisp();
    disp();
    return 0;
}
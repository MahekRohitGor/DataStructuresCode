// 1.	Write a program to store the elements in 1-D array and perform the operations like searching, 
//      sorting and reversing the elements. [Menu Driven]
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5];

    // Storing elements
    printf("Enter elements in an array: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("Select from below: \n"); // Menu driven 
    printf("1. Searching\n");
    printf("2. Sorting\n");
    printf("3. Reversing \n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number you want to search: ");
        int key;
        scanf("%d", &key);
        search(arr, key);
        break;

    case 2:
       printf("Below is Sorted array increasing order: \n");
       sorting(arr);
       printf("\n Below is Sorted array decreasing order: \n");
       reverse(arr);
        break;

    case 3:
        printf("\n Below is Reversed array: \n");
        reverse(arr);
        break;
    
    default:
        printf("Enter correct Choice !");
        break;
    }
    return 0;
}

void search(int arr[5],int key){ //Searching an Element
    int flag = 0, k;
        for(int j=0; j<5; j++){
        if(arr[j] == key){
           flag = 1;
           k = j;
           break;
        }
    }

    if(flag == 1){
        printf("Element found at index %d \n", k);
    }
    else{
        printf("Element not found !\n");
    }
    
}

void sorting(int arr[5]){ // Sorting an array
        for(int i=0; i<5; i++){
            for(int j=0; j<5-i; j++){
                if(arr[j] > arr[j+1]){
                    int temp;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        for(int m=0; m<5; m++){
            printf(" %d ", arr[m]);
        }
}

void reverse(int arr[5]){ // Reversing an array
    int arr1[5];
    for(int i=0; i<5; i++){
        arr1[i] = arr[4-i];
    }

     for(int m=0; m<5; m++){
        printf(" %d ", arr1[m]);
    }
}

        
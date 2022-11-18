// Read the two arrays from the user and merge them and display the elements in sorted order.
#include<stdio.h>

int main(){
    int arr[5];
    int arr1[5];

    printf("Enter elements for array 1: \n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter elements for array 2: \n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr1[i]);
    }

    int arr2[10];

    for(int j = 0; j<5; j++){
        arr2[j] = arr[j];
        arr2[j+5] = arr1[j];
    }
    // for(int j = 5; j<10; j++){
    //     arr2[j] = arr1[5-j];
    // }

    // printf("Merged Array: \n");
    // for (int k = 0; k < 10; k++)
    // {
    //     printf(" %d ", arr2[k]);
    // }
    // printf("\nSorted Array: \n");
    // sorting(arr2);
    printf("Select from below: \n"); // Menu driven 
    printf("1. Merge array\n");
    printf("2. Sorting\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Merged Array: \n");
        for (int k = 0; k < 10; k++)
        {
            printf(" %d ", arr2[k]);
        }
        break;

    case 2:
       printf("Below is Sorted array increasing order: \n");
       sorting(arr2);
       break;

    default:
        printf("Enter correct choice");
        break;
    }
    return 0;
}

void sorting(int arr[10]){ // Sorting an array
        for(int i=0; i<10; i++){
            for(int j=0; j<10-i; j++){
                if(arr[j] > arr[j+1]){
                    int temp;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        for(int m=0; m<10; m++){
            printf(" %d ", arr[m]);
        }
}
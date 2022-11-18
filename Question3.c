// Write a program to perform the Matrix addition, Multiplication and Transpose Operation. [Menu Driven]
#include<stdio.h>

int main(){

    printf("Enter elements for Matrix-1: \n");
    int mat1[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements for Matrix-2: \n");
    int mat2[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Matrix-1: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           printf(" %d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix-2: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("Choose your option: \n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Transpose\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Addition of two matrices is: \n");
        Addition(mat1, mat2);
        break;
    
    case 2:
        printf("Multiplication of two matrices is: \n");
        Multiplication(mat1, mat2);
        break; 

    case 3:
        printf("Transpose of matrix 1: \n");
        Transpose(mat1);
        printf("Transpose of matrix 2: \n");
        Transpose(mat2);
        break; 

    default:
        break;
    }

    return 0;
}

void Addition(int mat1[3][3], int mat2[3][3]){
        int result[3][3];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
               result[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }

}

void Multiplication(int mat1[3][3], int mat2[3][3]){
    int result = 0,i,j;
    int mat3[3][3];
    for(i=0;i<3;i++)    
    {    
        for(j=0;j<3;j++)    
        {    
        mat3[i][j]=0;    
        for(int k=0;k<3;k++)    
        {    
        mat3[i][j]+= mat1[i][k]*mat2[k][j];    
        }    
        }    
        }    

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %d ", mat3[i][j]);
        }
        printf("\n");
    }
}

void Transpose(int mat[3][3]){
    int mat2[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mat2[i][j] = mat[j][i];
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %d ", mat2[i][j]);
        }
        printf("\n");
    }
}
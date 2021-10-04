// #include<stdio.h>

// int main(){

//     int marks[5];

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter marks of Student %d\n", i+1);
//         scanf("%d", &marks[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Marks of Student %d is %d\n", i+1, marks[i]);
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     // int a[] = {1,2,3};
//     // printf("Value of a[0] is %d\n", a[0]);
//     // printf("Value of a[1] is %d\n", a[1]);
//     // printf("Value of a[2] is %d\n", a[2]);

//     float a[] = {1.7,4.22,9.343};
//     printf("Value of a[0] is %f\n", a[0]);
//     printf("Value of a[1] is %f\n", a[1]);
//     printf("Value of a[2] is %f\n", a[2]);
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int i = 34;
//     int *ptr = &i;
//     printf("Value of ptr is %u\n", ptr);
//     // ptr++;
//     // ptr++;
//     ptr--
//     printf("Value of ptr is %u\n", ptr);
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int a = 34;
//     int *ptr1, *ptr2;
//     ptr1 = &a;
//     ptr2 = &a;
//     printf("Value of ptr1 is %u\n", ptr1);
    
//     printf("Value of ptr2 is %u\n", ptr2);

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int marks[4];
//     int *ptr;
//     ptr = &marks[0];
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter marks of Student %d\n", i+1);
//         scanf("%d", ptr);
//         ptr++;
//     }

//     for(int i=0; i<4; i++)
//     {
//         printf("Marks of Student %d is %d\n", i+1, marks[i]);
//     }
    
//     return 0;
// }

// #include<stdio.h>

// void printArray(int *ptr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("Value of Elment %d is %d\n", i+1, *(ptr+i));
//     }
    
// }

// int main(){

//     int arr[] = {1,2,3,4,5,6,7};
//     printArray(arr, 7);
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int n_students = 3;
//     int n_subjects = 5;

//     int marks[3][5];
//     for (int i = 0; i < n_students; i++)
//     {
//         for (int j = 0; j < n_subjects; j++)
//         {
//             printf("Enter Marks of Student %d in Subject %d\n", i+1, j+1);
//             scanf("%d", &marks[i][j]);
//         }
        
//     }

//     for (int i = 0; i < n_students; i++)
//     {
//         for (int j = 0; j < n_subjects; j++)
//         {
//             printf(" Marks of Student %d in Subject %d is %d\n", i+1, j+1, marks[i][j]);
            
//         }
        
//     }
    
//     return 0;
// }


// #include<stdio.h>

// void display(int a,int b,int (*)arr[a][b]){
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             printf("{ %d  %d \n}", *(arr[i][j]), *(arr[i][j+1]));
//         }
        
//     }
    
// }

// int main(){

//     int a= 3;
//     int b= 2;
//     int arr[3][2];
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             printf("Enter Row %d element", i+1);
//             scanf("%d", &arr[i][j]);
//         }
        
//     }
//     display(a, b, arr[a][b]);
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int arr[]= {34,53,4,25,25,64,1,24,64,95};
//     int *ptr;
//     ptr = arr;
//     ptr = ptr + 2;
//     printf("Adress of 3rd element is %u\n", ptr);
//     printf("Adress of 3rd element is %u\n", &arr[2]);
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int arr[10];
//     for (int i = 0; i < 10; i++)
//     {   
//         arr[i] = (i+1)*5;
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int arr[10];
//     int n;
//     printf("Enter Number\n");
//     scanf("%d", &n);
//     for (int i = 0; i < 10; i++)
//     {   
//         arr[i] = (i+1)*n;
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
    
//     return 0;
// }


// #include<stdio.h>

// void reverseArray(int *ptr, int n){
   
//    for (int i = 0; i < (int)n/2; i++)

//    {
//        int temp;
//        temp = *(ptr + i);
//        *(ptr + i) = *(ptr + (n -1 - i));
//        *(ptr + (n -1 - i)) = temp;
//    }

//    for (int j = 0; j < n; j++)
//    {
//        printf("%d ", *(ptr+j));
//    }
   
   
    
// }

// int main(){

//     int arr[] = {1,2,3,4,5,6,7,8,9};
    
//     reverseArray(arr, 9);
//     return 0;
// }

// #include<stdio.h>

// int positive_count(int arr[], int n){
//     int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>=0){
//             count++;
//         }
//     }
//     return count;
    
// }

// int main(){

//     int arr[] = {1,2,3,4,5,-34,-56,23,-12};
//     int pos;
//     pos = positive_count(arr, 8);
//     printf("Positive Numbers in Array is %d\n ", pos);
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int arr[3][10];
//     for (int i = 0; i < 10; i++)
//     {
//         arr[0][i] = 2*(i+1);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         arr[1][i] = 7*(i+1);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         arr[2][i] = 9*(i+1);
//     }

//     for (int j = 0; j < 10; j++)
//     {
//         printf("2 X %d is %d\n", j+1, arr[0][j]);
//     }
//     for (int j = 0; j < 10; j++)
//     {
//         printf("7 X %d is %d\n", j+1, arr[1][j]);
//     }
//     for (int j = 0; j < 10; j++)
//     {
//         printf("9 X %d is %d\n", j+1, arr[2][j]);
//     }
    
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int arr[3][3][3] = {{1,2,3}, {4,5,6},{7,8,9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 3; k++)
//             {
//                 printf("Address of Element at position %d,%d,%d is %u\n",i,j,k, &arr[i][j][k]);
//             }
            
//         }
        
//     }
    

//     return 0;
// }
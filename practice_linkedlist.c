#include<stdio.h>
#include<stdlib.h>

struct linkedlist{
    int data;
    struct linkedlist *next;
};
struct linkedlist *start;

void insert();
void display();

void AtBeg();
void AtEnd();


int main(){

   
    int ch;
    char choice = 'y';
    start = NULL;

    do
    {
        printf("\n\n 1. Insert");
        printf("\n 2. Display");
        printf("\n 8. Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d", &ch);
        
        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            display();
            break;
        case 8:
            choice = 'n';
            break;
        
        default:
            printf("\n Invalid Input....");
        }
    } while (choice == 'y');
    return 0;
}

void display(){
    struct linkedlist *temp;
    temp = start;
    while(temp != NULL){
        printf("%d ---> ", temp->data);
        temp = temp->next;
    }
}

void insert()
{
    int ch2;
    char choice2;

    do
    {
        printf("\n\n 1. At Beginning");
        printf("\n 2. At End");
        printf("\n 6. Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            AtBeg();
            break;
        case 2:
            AtEnd();
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("\nInvalid choice");
        }
    } while(choice2 == 'y');
    
}

void AtBeg(){
    struct linkedlist *node, *temp;
    node = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    printf("\n\nEnter Value : ");
    scanf("%d", &node->data);
    node->next = NULL;

    if (start == NULL){
        start = node;
        return ;
    }
    else{
        temp = start;
        start = node;
        node->next = temp;
    }
}

void AtEnd(){
    struct linkedlist *node, *temp;
    node = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    printf("\n\nEnter Value : ");
    scanf("%d", &node->data);
    node->next = NULL;

    if (start == NULL){
        start = node;
        return;
    }
    else{
        temp = start;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = node;
    }
}
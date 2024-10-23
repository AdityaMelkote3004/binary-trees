#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{   
    int data;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data (-1 for no node): ");
    scanf("%d", &data);
    if (data == -1)
    {
        return NULL;
    }
    newnode->data = data;
    printf("Enter left child of %d\n", data);
    newnode->left = create();
    printf("Enter right child of %d\n", data);
    newnode->right = create();
    return newnode;
}

int main()
{
    struct node *root = NULL;
    root = create();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *create();

int main() {
    struct node *root;
    root = create();
    return 0;
}

struct node *create() {
    struct node *temp;
    int data, choice;

    printf("Press 0 to exit\n");
    printf("Press 1 for new node\n");
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input\n");
        return NULL;
    }

    if (choice == 0) {
        return NULL;
    } else if (choice == 1) {
        temp = (struct node *)malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return NULL;
        }

        printf("Enter the data: ");
        if (scanf("%d", &data) != 1) {
            printf("Invalid input\n");
            free(temp);
            return NULL;
        }

        temp->data = data;

        printf("Enter the left child of %d\n", data);
        temp->left = create();

        printf("Enter the right child of %d\n", data);
        temp->right = create();

        return temp;
    } else {
        printf("Invalid choice\n");
        return NULL;
    }
}
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


struct Node* search(struct Node* root, int key) {
    
    if (root == NULL || root->data == key)
        return root;

    
    if (root->data < key)
        return search(root->right, key);

    
    return search(root->left, key);
}

int main() {
   
    struct Node* root = createNode(50);
    root->left = createNode(30);
    root->right = createNode(70);
    root->left->left = createNode(20);
    root->left->right = createNode(40);
    root->right->left = createNode(60);
    root->right->right = createNode(80);

    int key = 70;
    struct Node* result = search(root, key);

    if (result != NULL)
        printf("Element %d found in the BST.\n", result->data);
    else
        printf("Element %d not found in the BST.\n", key);

    return 0;
}

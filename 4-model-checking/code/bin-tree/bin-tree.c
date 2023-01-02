#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node Node;
struct node {
    int value;
    Node *left;
    Node *right;
};
#define SIZE 7 

Node* insert(Node *root, int v) {
    if (root == NULL) {
        root = malloc(sizeof (Node));
        root->value = v;
        root->left = NULL;
        root->right = NULL;
    } else if (v < root->value) {
        root->left = insert(root->left, v);
    } else {
        root->right = insert(root->right, v);
    }
    return root;
}

void traverse(Node *root) {
    if (root == NULL || (root->left==NULL && root->right==NULL)) {
        return;
    }
	
    assert(root->value >= root->left->value);
assert(root->value <= root->right->value);

    traverse(root->left);
    traverse(root->right);
}

int main(int argc, char** argv) {
    Node *root = NULL;
int a[SIZE];  

for (int i = 0; i < SIZE; i++) {
        a[i] = non_det();  
    }

    for (int i = 0; i < SIZE; i++) {
        root = insert(root, a[i]);
    }
}

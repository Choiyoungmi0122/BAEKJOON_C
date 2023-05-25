//
//  1991.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2023/05/25.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    char value;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// 이진 트리 노드 생성
TreeNode* createNode(char value) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// 이진 트리에 노드 삽입
void insertNode(TreeNode* parent, char value, char leftChild, char rightChild) {
    if (leftChild != '.') {
        parent->left = createNode(leftChild);
    }
    if (rightChild != '.') {
        parent->right = createNode(rightChild);
    }
}

// 전위 순회
void pre(TreeNode* node) {
    if (node == NULL) return;
    printf("%c", node->value);
    pre(node->left);
    pre(node->right);
}

// 중위 순회
void inorder(TreeNode* node) {
    if (node == NULL) return;
    inorder(node->left);
    printf("%c", node->value);
    inorder(node->right);
}

// 후위 순회
void post(TreeNode* node) {
    if (node == NULL) return;
    post(node->left);
    post(node->right);
    printf("%c", node->value);
}

int main(void) {
    int num;
    scanf("%d", &num);

    // 이진 트리 노드 생성 및 입력
    TreeNode* root = createNode('A');
    for (int i = 0; i < num; i++) {
        char parentValue, leftValue, rightValue;
        scanf(" %c %c %c", &parentValue, &leftValue, &rightValue);
        TreeNode* parent = root;
        while (parent->value != parentValue) {
            if (parent->left != NULL && parent->left->value == parentValue) {
                parent = parent->left;
            } else if (parent->right != NULL && parent->right->value == parentValue) {
                parent = parent->right;
            }
        }
        insertNode(parent, parentValue, leftValue, rightValue);
    }

    // 전위 순회
    pre(root);
    printf("\n");

    // 중위 순회
    inorder(root);
    printf("\n");

    // 후위 순회
    post(root);
    printf("\n");

    // 동적 할당된 메모리 해제
    free(root);

    return 0;
}

#include "BinaryTree.h"

#include <stdio.h>
#include <stdlib.h>


TreeNode*createTree(char*tree,int*index) {
    //必须用指针传递index，这样才可以影响上一层的调用，不然index一直都是同一个值
    TreeNode*T;
    char ch;
    ch=tree[*index];
    (*index)++;
    // scanf("%c",&ch);
    if (ch=='#') {
        T=NULL;
    }
    else {
        T=(TreeNode*)malloc(sizeof(TreeNode));
        if (T==NULL) {
            printf("Out of space!\n");
            return NULL;
        }
        T->data=ch;
        T->Lchild=createTree(tree,index);
        T->Rchild=createTree(tree,index);
    }
    return T;
}


void preOrder(TreeNode*T) {
    if (T==NULL)return;
    printf("%c",T->data);
    preOrder(T->Lchild);
    preOrder(T->Rchild);
}

void inOrder(TreeNode*T) {
    if (T==NULL)return;
    inOrder(T->Lchild);
    printf("%c",T->data);
    inOrder(T->Rchild);
}

void postOrder(TreeNode*T) {
    if (T==NULL)return;
    postOrder(T->Lchild);
    postOrder(T->Rchild);
    printf("%c",T->data);

}




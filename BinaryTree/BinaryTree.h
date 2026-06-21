
#ifndef C23_BINARYTREE_H
#define C23_BINARYTREE_H

typedef struct TreeNode {
    char data;
    struct TreeNode* Lchild;
    struct TreeNode* Rchild;
}TreeNode;

TreeNode*createTree(char*tree,int *index);

void preOrder(TreeNode*T) ;

void inOrder(TreeNode*T);

void postOrder(TreeNode*T);

#endif //C23_BINARYTREE_H

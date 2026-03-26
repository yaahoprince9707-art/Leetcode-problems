#include <iostream>
using namespace std;
typedef struct TreeTag
{
    int val;
    TreeTag *right;
    TreeTag *left;
} TreeNode;
TreeNode *createTreeNode(int d)
{
    TreeNode *nptr;
    nptr = (TreeNode *)malloc(sizeof(TreeNode));
    if (nptr != NULL)
    {
        nptr->val = d;
        nptr->left = NULL;
        nptr->right = NULL;
    }
    return nptr;
}
TreeNode *buildTree(TreeNode *root)
{
    int d;
    scanf("%d", &d);
    root = createTreeNode(d);
    if (d == 0)
    {
        return NULL;
    }
    printf("enter data for inserting in left of %d : ", root->val);
    root->left = buildTree(root->left);
    printf("enter data for inserting in right of %d : ", root->val);
    root->right = buildTree(root->right);
    return root;
}
bool validBST(TreeNode *root)
{

    if (root == NULL)
    {
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    if (root->left == NULL)
    { if(root->right->val > root ->val)
       validBST(root->right);
       else{
        return false;
       }
    }
    if(root->right == NULL)
    { if(root->left->val < root->val)
       validBST(root->left);
       else{
        return false;
       }
    }
    else{
        if((root->left)->val < root->val && (root->right)->val > root->val){
        return true;
    }
    else{
        return false;
    } 
    }
   
    return validBST(root->left) && validBST(root->right);
}
int main()
{
    TreeNode *root = NULL;
    root = buildTree(root);
    bool ans = validBST(root);
    if (ans)
    {
        cout << "tree is BST" << endl;
    }
    else
    {
        cout << "tree is not a BST" << endl;
    }
    return 0;
}
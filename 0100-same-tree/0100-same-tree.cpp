/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    /*void inorder(TreeNode* root, vector<int>&v)
    {
        if(root == NULL)
            return;
        inorder(root->left,v);//inorder
        v.push_back(root->val);//inorder
        inorder(root->right,v);//inorder
    }

   /* void inorder(TreeNode* root, vector<int>&v)
    {
        if(root == NULL)
            return;

        v.push_back(root->val);//preorder
        inorder(root->left,v);//preorder
        inorder(root->right,v);//preorder
    }*/


//Approach..1
   /* void inorder(TreeNode* root, vector<int>&v)
    {
        if(root == NULL){
            v.push_back(-10001);
            return;
    }
        v.push_back(root->val);
        inorder(root->right,v);
        inorder(root->left,v);
    }*/

    bool isSameTree(TreeNode* p, TreeNode* q) {
       /*vector<int> vp,vq;
        inorder(p,vp);
        inorder(q,vq);
        if(vp==vq)
            return true;
        else
            return false;*/

        if(p==NULL && q== NULL)
        {
            return true;
        }
        if(p==NULL || q == NULL)
        {
            return false;
        } 
        return ((p-> val == q-> val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));     
    }

    //T.C. O(N) due to Recursice Call
};
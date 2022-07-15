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
    
    bool isValidBST1(TreeNode* root,bool &b,int &k,int &a,int &c) {

        if(root==NULL){
            return b ;
        }
        if(k==1){
           b=false;
           return(false);
        }

        isValidBST1(root->left,b,k,a,c);
        if(root->val>a || c==0){
            a=root->val;
            c=1;
        }
        else{
            k=1;
            b=false;
            return(b);
          
        }
        isValidBST1(root->right,b,k,a,c);
        return b;
    }
          
    bool isValidBST(TreeNode* root) { 
    
        int a;
        int c=0;
        int k=0;
        bool b=true;
        return(isValidBST1(root,b,k,a,c));
        
    }
};
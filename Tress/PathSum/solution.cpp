// Some work remaining

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
    int pathSum(TreeNode* root, int targetSum, int remSum) {
        int total=0;
        if(root == NULL) {
            return total;
        }
        if(root->val == remSum) {
            cout<<root->val<<" ";
            total++;
        }
        if(root->left != NULL) {
            cout<<"LEFT "<<root->val<<" ";
            int x = pathSum(root->left,targetSum,remSum - root->val);
            if(remSum - root->val!=0) {
                total += pathSum(root->left,targetSum,targetSum);
            }
            total += x;
        }
        if(root->right != NULL) {
            cout<<"RIGHT "<<root->val<<" ";
            int x = pathSum(root->right,targetSum,remSum - root->val);
            if(remSum - root->val!=0) {
                total += pathSum(root->right,targetSum,targetSum);
            }
            total += x;
        }
        return total;
    }

    int pathSum(TreeNode* root, int targetSum) {
        return pathSum(root,targetSum,targetSum);
    }
};
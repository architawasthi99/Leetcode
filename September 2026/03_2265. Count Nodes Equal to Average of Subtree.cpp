/* Given the root of a binary tree, return the number of nodes where the value of the node is equal to the average of the values in its subtree.

Note:

The average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.
A subtree of root is a tree consisting of root and all of its descendants.  */

class Solution {
public:
    int ans=0;
    pair<int,int>dfs(TreeNode* root){
        if(root==NULL){
            return {0,0};
        }
        auto left=dfs(root->left);
        auto right=dfs(root->right);
        int sum=root->val+left.first+right.first;
        int count=1+left.second+right.second;
        if(root->val==sum/count){
            ans++;
        }
        return {sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};

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

    // Recursively

    // void preOrder(TreeNode* root, vector<int>& result){
    //     if(root==NULL) return;
    //     result.push_back(root->val);
    //     preOrder(root->left, result); 
    //     preOrder(root->right, result); 
    // }

    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int> result;
    //     preOrder(root, result);
    //     return result;
    // }

    // Iteratively
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            if(node->right!=NULL) st.push(node->right);
            if(node->left!=NULL) st.push(node->left);
            ans.push_back(node->val);
        }
        return ans;
    }

};
class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        if (root == NULL) 
        return true;
           stack<Node*> st;
           Node* pre = NULL;
           while (root != NULL || !st.empty()) 	    
           {
              while (root != NULL) 
              {
                 st.push(root);
                 root = root->left;
              }
              root = st.top();
              st.pop(); 
              if(pre != NULL && root->data <= pre->data) return false;
              pre = root;
              root = root->right;
           }
           return true;
    }
};

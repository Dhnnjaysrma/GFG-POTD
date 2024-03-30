class Solution {
public:   
    int minValue(Node* root)
    {
        if (!root)
            return -1;
        if (root->left)
        {
            root=root->left;
            minValue(root);
        }
        else return root->data;
    }
};

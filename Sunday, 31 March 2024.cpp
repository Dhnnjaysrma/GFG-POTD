class Solution {
public:
    int findMaxForN(Node* root, int n) {
        if (!root)
            return -1;

        if (root->key <= n)
            return max(root->key, findMaxForN(root->right, n));

        return findMaxForN(root->left, n);
    }
};

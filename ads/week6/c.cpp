
    int ans;
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1;
        depth(root);
        return ans - 1;
    }
    int depth(TreeNode * node) {
        if (node == NULL) return 0;
        int L = depth(node -> left);
        int R = depth(node -> right);
        ans = max(ans, L + R + 1);
        return max(L, R) + 1;
    }
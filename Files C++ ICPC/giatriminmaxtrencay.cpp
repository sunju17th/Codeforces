#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BST {
public:
    TreeNode* insert(TreeNode* root, int val) {
        if (!root) return new TreeNode(val);
        if (val < root->val)
            root->left = insert(root->left, val);
        else
            root->right = insert(root->right, val);
        return root;
    }

    TreeNode* findLCA(TreeNode* root, int A, int B) {
        if (!root) return NULL;
        if (root->val > A && root->val > B)
            return findLCA(root->left, A, B);
        if (root->val < A && root->val < B)
            return findLCA(root->right, A, B);
        return root;
    }

    void findPath(TreeNode* root, int val, vector<int>& path) {
        while (root->val != val) {
            path.push_back(root->val);
            if (val < root->val)
                root = root->left;
            else
                root = root->right;
        }
        path.push_back(root->val);
    }

    pair<int, int> findMinMaxOnPath(TreeNode* root, int A, int B) {
        TreeNode* lca = findLCA(root, A, B);
        vector<int> pathA, pathB;

        findPath(lca, A, pathA);
        findPath(lca, B, pathB);

        vector<int> fullPath(pathA);
        fullPath.insert(fullPath.end(), pathB.rbegin(), pathB.rend());

        int minVal = *min_element(fullPath.begin(), fullPath.end());
        int maxVal = *max_element(fullPath.begin(), fullPath.end());

        return {minVal, maxVal};
    }
};

int main() {
    int N;
    cin >> N;

    vector<int> values(N);
    for (int i = 0; i < N; ++i) {
        cin >> values[i];
    }

    int A, B;
    cin >> A >> B;

    BST bst;
    TreeNode* root = NULL;
    for (int i=0;i<N;i++) {
    	int val = values[i];
        root = bst.insert(root, val);
    }

    pair<int, int> result = bst.findMinMaxOnPath(root, A, B);
    cout << result.first << " " << result.second << endl;

    return 0;
}


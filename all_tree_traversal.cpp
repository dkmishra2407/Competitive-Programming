#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left, *right;

    // Constructor for easier initialization
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

void level_order(TreeNode* root) {
    if (!root) return; // Check if the tree is empty

    queue<TreeNode*> q;
    q.push(root);
    q.push(nullptr); // Level delimiter

    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();

        if (temp == nullptr) {
            cout << endl; // End of current level

            if (!q.empty()) {
                q.push(nullptr); // Add level delimiter for next level
            }
        } else {
            cout << temp->data << " ";

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

int main() {
    cout << "Enter the Root Node: ";
    int root_data;
    cin >> root_data;

    // Create the root node
    TreeNode* root = new TreeNode(root_data);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();

        cout << "Enter Left Data for " << temp->data << " (-1 for no left child): ";
        int left_data;
        cin >> left_data;

        if (left_data != -1) {
            temp->left = new TreeNode(left_data);
            q.push(temp->left);
        }

        cout << "Enter Right Data for " << temp->data << " (-1 for no right child): ";
        int right_data;
        cin >> right_data;

        if (right_data != -1) {
            temp->right = new TreeNode(right_data);
            q.push(temp->right);
        }
    }

    cout << "Level-order Traversal (line by line):" << endl;
    level_order(root);

    return 0;
}

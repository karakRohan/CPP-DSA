#include <bits/stdc++.h>
using namespace std;

// Tree Node Structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to return Top View
vector<int> topView(Node* root) {

    vector<int> ans;

    if (root == NULL)
        return ans;

    map<int, int> mp;   // Horizontal Distance -> Node value
    queue<pair<Node*, int>> q;

    // Push root with horizontal distance 0
    q.push({root, 0});

    while (!q.empty()) {

        Node* node = q.front().first;
        int hd = q.front().second;
        q.pop();

        // If this horizontal distance is not visited before
        if (mp.count(hd) == 0) {
            mp[hd] = node->data;
        }

        if (node->left) {
            q.push({node->left, hd - 1});
        }

        if (node->right) {
            q.push({node->right, hd + 1});
        }
    }

    // Store result in sorted order of horizontal distance
    for (auto it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}

int main() {

    // Building your tree manually

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    root->left->right->left = new Node(7);
    root->left->right->right = new Node(8);

    vector<int> result = topView(root);

    cout << "Top View: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
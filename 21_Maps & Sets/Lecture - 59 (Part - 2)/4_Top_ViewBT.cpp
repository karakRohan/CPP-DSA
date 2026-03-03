#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Level Order Print
void printLevelOrder(Node* root) {

    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {

        int size = q.size();

        for (int i = 0; i < size; i++) {

            Node* node = q.front();
            q.pop();

            cout << node->data << " ";

            if (node->left)
                q.push(node->left);

            if (node->right)
                q.push(node->right);
        }

        cout << endl;
    }
}

// Top View Function
vector<int> topView(Node* root) {

    vector<int> ans;
    if (!root) return ans;

    map<int, int> mp;
    queue<pair<Node*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {

        Node* node = q.front().first;
        int hd = q.front().second;
        q.pop();

        if (mp.count(hd) == 0)
            mp[hd] = node->data;

        if (node->left)
            q.push({node->left, hd - 1});

        if (node->right)
            q.push({node->right, hd + 1});
    }

    for (auto it : mp)
        ans.push_back(it.second);

    return ans;
}

int main() {

    // Building your tree

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    root->left->right->left = new Node(7);
    root->left->right->right = new Node(8);

    // Print Level Order
    printLevelOrder(root);

    // Print Top View
    vector<int> result = topView(root);

    cout << "Top View: ";
    for (int x : result)
        cout << x << " ";

    return 0;
}
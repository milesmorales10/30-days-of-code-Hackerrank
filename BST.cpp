#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:

  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

    		int getHeight(Node* root){
              if(root == NULL){
                  return -1;
              }else{
                  return 1 + max(getHeight(root->left), getHeight(root->right));
              }
            }

        int Size(Node* root){
          if(root == NULL){
            return 0;
          }else{
            return 1 + Size(root->left) + Size(root->right);
          }
        }

        // DFS and BFS

        void levelTraversal(Node * root){
          queue<Node*> q;
          Node* c;
          if (root != NULL) {
            q.push(root);
          }
          while (!q.empty()) {
            c = q.front();
            q.pop();
            cout << c->data << " ";
            if (c->left!=NULL) q.push(c->left);
            if (c->right!=NULL) q.push(c->right);
	       }
      }

        void inOrderTraversal(Node* root){
          if(root == NULL){
            return;
          }else{
            inOrderTraversal(root->left);
            cout<<root->data<<" ";
            inOrderTraversal(root->right);
          }
        }

        void preOrderTraversal(Node* root){
          if(root == NULL){
            return;
          }else{
            cout<<root->data<<" ";
            preOrderTraversal(root->left);
            preOrderTraversal(root->right);
          }
        }

        void postOrderTraversal(Node* root){
          if(root == NULL){
            return;
          }else{
            postOrderTraversal(root->left);
            postOrderTraversal(root->right);
            cout<<root->data<<" ";
          }
        }


}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    int size = myTree.Size(root);
    cout << height <<endl;
    cout<< size <<endl;

    return 0;
}

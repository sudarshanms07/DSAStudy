#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data= data;
        this->left= NULL;
        this->right= NULL;
    }
};

Node* constructTree(){
    cout<<"enter data:"<<endl;
    int val;
    cin>>val;
    if(val == -1) return nullptr;
    Node* root = new Node(val);
    root->left = constructTree();
    root->right = constructTree();
    return root;
}

void leftView(Node* root, int level, vector<int>& arr){
    if(!root) return;
    if(level == arr.size()) arr.push_back(root->data);
    leftView(root->left, level+1, arr);
    leftView(root->right,level+1,arr);
}

void rightView(Node* root, int level, vector<int>& arr){
    if(!root) return;
    if(level == arr.size()) arr.push_back(root->data);
    rightView(root->right,level+1,arr);
    rightView(root->left, level+1, arr);
}
int main(){
    Node* root = constructTree();
   // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1 
    int level=0;
    vector<int>arr;
    // leftView(root,level,arr);
    rightView(root,level,arr);
    cout << "Printing rightView: " << endl;
	for(int i=0; i<arr.size(); i++) {
	cout << arr[i] << " ";
	}
}
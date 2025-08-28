#include <iostream>
#include <queue>
using namespace std;

class Node
{

public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data= data;
        this->left=NULL;
        this->right= NULL;
    }
};



Node* insertIntoBST(Node* root,int data){
    if(root==NULL){
        root= new Node(data);
        return root;
    }

    if(data> root->data){
        root->right= insertIntoBST(root->right,data);
    }
    else{
        root->left= insertIntoBST(root->left,data);
    }
}

void createBST(Node* &root) {
	cout << "Enter data:" << endl;
	int data;
	cin >> data;

	while(data != -1) {
		root = insertIntoBST(root, data);
		cout << "Enter data:" << endl;
		cin >> data;
	}
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << temp->data << " ";
			if(temp->left != NULL) {
				q.push(temp->left);
			}
			if(temp->right != NULL) {
				q.push(temp->right);
			}
		}
    }
}

Node* minValue(Node* root) {
	if(root == NULL) {
		cout << "NO MIN VALUE" << endl;
		return NULL; 
	}
	Node* temp = root;

	while(temp->left != NULL) {
		temp = temp->left;
	}
	return temp;
}

Node* maxValue(Node* root) {
	if(root == NULL) {
		return NULL;
	}

	//if tree has nodes > 0 count
	Node* temp = root;
	while(temp->right != NULL) {
		temp = temp->right;
	}
	return temp;
}

bool searchBST(Node* root,int target){
    if(root == NULL){
        return false;
    }
    if(target == root->data){
        return true;
    }

    bool leftAns= false;
    bool rightAns= false;

    if(target > root->data){
        rightAns = searchBST(root->right,target);
    }
    else{
        leftAns = searchBST(root->left, target);
    }

    return leftAns || rightAns;
}


int main(){
    Node* root = NULL;
	createBST(root);

	levelOrderTraversal(root);

    	Node* minNode = minValue(root);
	if(minNode == NULL) {
		cout << "There is no node in tree, so no min value" << endl;
	}
	else {
		cout << "Min Value: " << minNode->data << endl;
	}

	cout << endl;
	Node* maxNode = maxValue(root);
	if(maxNode == NULL) {
		cout << "There is no node in tree, so no max value" << endl;
	}
	else {
		cout << "Max Value: " << maxNode->data << endl;
	}

    int t;
	cout << "Enter the target: " << endl;
	cin >> t;

	while(t != -1) {
		bool ans = searchBST(root, t);
		if(ans == true) {
			cout << "Found" << endl;
		}
		else {
			cout << "Not Found" << endl;
		}
}
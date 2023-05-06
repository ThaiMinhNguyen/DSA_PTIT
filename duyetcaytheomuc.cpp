#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left, *right;
	
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};


void insert(Node *root, int n1, int n2, char c){
	if(root == NULL){
		return;
	}
	if(root->data == n1){
		if(c == 'L'){
			root->left = new Node(n2);
		} else {
			root->right = new Node(n2);	
		}	
	} else {
		insert(root->left, n1, n2, c);
		insert(root->right, n1, n2, c);
	}
}


void levelOrder(Node *root){
	queue<Node *>Q;
	Q.push(root);
	while(!Q.empty()){
		Node *n = Q.front();
		Q.pop();
		cout << n->data << ' ';
		if(n->left != NULL){
			Q.push(n->left);
		}
		if(n->right != NULL){
			Q.push(n->right);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int n1, n2;
		char c;
		Node *root = NULL;
		while(n--){
			cin >> n1 >> n2 >> c;
			if(root == NULL){
				root = new Node(n1);
			}
			insert(root, n1, n2, c);
		}
		levelOrder(root);
		cout << endl;
	}
}

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


int countNode(Node *root){
	if(root ==  NULL){
		return 0;
	}
	if(root->left == NULL && root->right == NULL){
		return 1;
	}
	if(!(root->left != NULL && root->right != NULL)){
		isPerfect = false;
		return 0;
	}
	return countNode(root->left) + countNode(root->right);
}


int main(){
	int t;
	cin >> t;
	while(t--){
		isPerfect = true;
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
		int cntLeft = countNode(root->left);
		int cntRight = countNode(root->right);
		if(isPerfect && cntLeft == cntRight){
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}

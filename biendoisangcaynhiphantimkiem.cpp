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


void insert(Node* &root, int n1, int n2, char c){
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



int main(){
	int t;
	cin >> t;
	while(t--){
		set<int> s;
		int n;
		cin >> n;
		int n1, n2;
		char c;
		Node *root = NULL;
		while(n--){
			cin >> n1 >> n2 >> c;
			s.insert(n1);
			s.insert(n2);
		}
		for(auto x : s){
			cout << x << " ";
		}
		cout << endl;
	}
}

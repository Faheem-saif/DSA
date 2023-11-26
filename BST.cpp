#include<iostream>
using namespace std;
struct Tnode{
	int data;
	Tnode *lef,*right;
	
};
struct RT{
	Tnode *par,*node;
	
};
class Bst{
	private:
		Tnode *root;
		public:
			Bst(){
			createTree();
				
			}
	RT *find(int item){
		RT *r=new Rt;
		if(root==NULL){
		r->par=Null,r->node=Null;
		return r;}
		else if (item==root->data){
			r->node=root,r->par=null;
			return r;
		}
		
	}		
		Tnode* ptr;
	        if (item<root->data){
			ptr=root->right;
			r->par=root;
		}
		while(ptr!=NULL){
			if(ptr->data==item){
			r->node=ptr;
			return r;
			}
			if(item<ptr){
				ptr->left;
			}
			else(){
				r->par=ptr;
				ptr=ptr->right;
			}
		}
			
};
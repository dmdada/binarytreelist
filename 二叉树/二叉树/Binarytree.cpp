
#include "Binarytree.h"
bool BinaryTree::IsEmpty()
{
	return root == NULL ? 1 : 0;
}
Binarynode* BinaryTree::find(DataType& item)
{
	if (item != NULL)
	{
		Binarynode *tmp = root;
		Binarynode*tmpl = tmp->leftchild;
		Binarynode*tmpr = tmp->rightchild;
		DataType temp = root->data;
		while (tmpl)
		{
			if (temp != item)
			{
				tmpl = tmpl->leftchild;
			}
			cout << "i find it";
			return tmpl;
		}
		while (tmpr)
		{
			if (temp != item)
			{
				tmpr = tmpr->rightchild;
			}
			cout << "i find it ";
			return tmpr;
		}


	}
	cout << "can't find it";
	return  NULL;
}
void BinaryTree::PreOrder()
{
	PreOrder(root);
}
void BinaryTree::PreOrder(Binarynode*subTree)
{
	if (subTree != NULL)
	{
		cout << subTree->data;
		PreOrder(subTree->leftchild);
		PreOrder(subTree->rightchild);
	}
}
void BinaryTree::InOrder()
{
	InOrder(root);
}
void BinaryTree::InOrder(Binarynode* subTree)
{
	if (subTree != NULL)
	{
		InOrder(subTree->leftchild);
		cout << subTree->data;
		InOrder(subTree->rightchild);
	}
}void BinaryTree::PostOrder()
{
	PostOrder(root);
}
void BinaryTree::PostOrder(Binarynode*subTree)
{
	if (subTree != NULL)
	{
		PostOrder(subTree->leftchild);
		PostOrder(subTree->rightchild);
		cout << subTree->data;
	}
}
int BinaryTree::Hight()
{
	return Hight(root);
}
int BinaryTree::Hight(Binarynode* subTree)
{
	if (subTree == NULL)
	{
		return 0;
	}
	else
	{
		int dep1 = Hight(subTree->leftchild);
		int dep2 = Hight(subTree->rightchild);
		if (dep1>dep2)
		{
			return dep1 + 1;
		}
		else
		{
			return dep2 + 1;
		}
	}
}
int BinaryTree::count()
{
	return count(root);
}

int BinaryTree::count(Binarynode*subTree)
{
	if (subTree != NULL)
	{
		return 1 + count(subTree->leftchild) + count(subTree->rightchild);
	}
	return 0;
}

void BinaryTree::copy()
{
	copy(root);
}
Binarynode* BinaryTree::copy(Binarynode*&Tree)
{
	if (Tree == NULL)
	{
		return NULL;

	}
	else
	{
		Binarynode *tmp = new Binarynode;
		tmp->data = Tree->data;
		tmp->leftchild = copy(Tree->leftchild);
		tmp->rightchild = copy(Tree->rightchild);
		return tmp;
	}
}
void BinaryTree::creatBinTree(Binarynode*&subTree)
{
	DataType item;

	cin >> item;
	if (item != RefValue)
	{
		subTree = new Binarynode;
		subTree->data = item;
		if (subTree == NULL)
		{
			cout << "´æ´¢·ÖÅä´íÎó";
			exit(1);

		}
		creatBinTree(subTree->leftchild);
		creatBinTree(subTree->rightchild);

	}
	else
	{
		subTree = NULL;
	}
}
void BinaryTree::creatBinTree()
{
	creatBinTree(root);
}


void BinaryTree::destory(Binarynode*&Tree)
{

	if (Tree != NULL)
	{
		return;
	}
	destory(Tree->leftchild);
	destory(Tree->rightchild);
	delete Tree;
}

BinaryTree::~BinaryTree()
{
	destory(root);
}


BinaryTree::BinaryTree(BinaryTree &s)
{
	root = copy(s.root);
}

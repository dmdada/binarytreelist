#ifndef _INC_STRUCTURE
#define _INC_STRUCTURE
#include <iostream>
using namespace std;
typedef char  DataType;
static DataType RefValue = '#';//输入结束符

typedef struct BinTreeNode
{
	DataType data;
	BinTreeNode *leftchild, *rightchild;
}Binarynode;

class BinaryTree
{
public:
	BinaryTree()
		:root(NULL){}
	BinaryTree(BinaryTree& s);
	~BinaryTree();
	bool IsEmpty();
	Binarynode *find(DataType &item);//搜索
	void creatBinTree();
	void creatBinTree(Binarynode*&subTree);
	void PreOrder();
	void PreOrder(Binarynode *subTree);//前序遍历
	void InOrder();
	void InOrder(Binarynode *subTree);//中序
	void PostOrder();
	void PostOrder(Binarynode *subTree);//后序
	int count(Binarynode* subTree);//统计节点个数
	int count();
	int Hight();
	int Hight(Binarynode* subTree);//求树高度
	void copy();
	Binarynode* copy(Binarynode*&Tree);//复制二叉树
	void destory(Binarynode*&Tree);//销毁
private:
	Binarynode *root;
};




#endif

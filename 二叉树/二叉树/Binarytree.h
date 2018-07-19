#ifndef _INC_STRUCTURE
#define _INC_STRUCTURE
#include <iostream>
using namespace std;
typedef char  DataType;
static DataType RefValue = '#';//���������

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
	Binarynode *find(DataType &item);//����
	void creatBinTree();
	void creatBinTree(Binarynode*&subTree);
	void PreOrder();
	void PreOrder(Binarynode *subTree);//ǰ�����
	void InOrder();
	void InOrder(Binarynode *subTree);//����
	void PostOrder();
	void PostOrder(Binarynode *subTree);//����
	int count(Binarynode* subTree);//ͳ�ƽڵ����
	int count();
	int Hight();
	int Hight(Binarynode* subTree);//�����߶�
	void copy();
	Binarynode* copy(Binarynode*&Tree);//���ƶ�����
	void destory(Binarynode*&Tree);//����
private:
	Binarynode *root;
};




#endif

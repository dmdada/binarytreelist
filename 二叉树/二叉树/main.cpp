
#include "BinaryTree.h"
//#include "BinaryTree.cpp"
/*using namespace std;
#define max 15
typedef char  data;

typedef struct binarytree
{
	data _arr[max];
	int sz;

}bintree;

void initbinarytree(binarytree& s)
{

	for (int i = 0; i < max; i++) {
		s._arr[i] = '0';
		s.sz = 0;
	}

}

int insertroot(binarytree&s, data e)
{
	s._arr[0] = e;
	s.sz++;
	return 1;
}

int insert_left(binarytree& s, int i, data e)
{
	if (2 * i + 1>max || i<0)
	{
		return -1;
	}
	if (s._arr[2 * i + 1] == '0'){
		s._arr[(2 * i + 1)] = e;
		s.sz++;
		return 1;
	}
	return -1;
}

int insert_right(binarytree &s, int i, data e)
{
	if (2 * i + 2>max || i<0) {
		return -1;
	}
	if (s._arr[2 * i + 2] == '0'){
		s._arr[2 * i + 2] = e;
		s.sz++;
		return 1;
	}
	return -1;
}
void  printftree(binarytree &s)
{
	if (s.sz == 0) {
		cout << "����";
	}
	for (int i = 0; i<s.sz; i++)
	{
		cout << s._arr[i];
		if (i==2||i==6||i==0)
		{
			cout << "" << endl;
		}
		
	}
	cout << endl;
}

void creat_binarytree(binarytree &s)
{
	data n = 0;
	cout << "����ϵ��´��������������ֵ���ս���á�0������������������" << max << "�����" << endl;
	while (cin >> n)
	{
         s._arr[s.sz] = n;
		s.sz++;
		if (s.sz == 15)
		{
			return;
		}
	}
}
void preorder(binarytree s, int i)//�ݹ�ǰ�����
{
	if (i < max)
	{	
	cout << s._arr[i] << " ";
	if (s._arr[2 * i + 1] != '0')
		preorder(s, 2 * i + 1);
	if (s._arr[2 * i + 2] != '0')
		preorder(s, 2 * i + 2);
    }
}
void inorder(binarytree s, int i)//����ݹ�
{
	if (i < max)
	{	
	if (s._arr[2 * i + 1] != '0')
		preorder(s, 2 * i + 1);
	cout << s._arr[i] << " ";
	if (s._arr[2 * i + 2] != '0')
		preorder(s, 2 * i + 2);
    }
}
void postorder(binarytree s, int i)//�����ݹ�
{
	if (i < max)
	{
		if (s._arr[2 * i + 2] != '0')
			preorder(s, 2 * i + 2);
		cout << s._arr[i] << " ";
		if (s._arr[2 * i + 1] != '0')
			preorder(s, 2 * i + 1);
		
		
	}
}
int main() {

	binarytree s;
	initbinarytree(s);
	creat_binarytree(s);
	cout << "���ṹ"<<endl;
	printftree(s);
	cout << "ǰ�������";
	preorder(s, 0);
	cout <<endl;
	cout << "���������";
	inorder(s, 0);
	cout << endl;
	cout << "���������";
	postorder(s, 0);
	cout << endl;
	system("pause");
	return 0;
}
*/

int main()
{
	BinaryTree subTree;
	cout << "����ڵ㣬�ս����#����:";
	subTree.creatBinTree();
	cout << "ǰ�������";
	subTree.PreOrder();
	cout << endl<<"���������";
	subTree.InOrder();
	cout << endl << "���������";
	subTree.PostOrder();
	cout<<endl<<"��������"<<subTree.count()<<endl;
	cout << "���ĸ߶ȣ�"<<subTree.Hight()<<endl;
	system("pause");
	return 0;
}
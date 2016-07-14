#include "TreeInterFace.h"
#include <iostream>
using namespace std;


TreeInterFace::TreeInterFace()
{
	data = 0;
	left = right = NULL;
}

TreeInterFace::TreeInterFace(int data)
{
	this->data = data;
	left = right = NULL;
}


TreeInterFace::~TreeInterFace()
{
}

void TreeInterFace::AddNode(TreeInterFace * node)
{
	//セーフティ
	if (node == NULL)
	{
		cout << "ヌルポインタ" << endl;
		return;
	}

	//データが同じ:エラー
	if(data == node->data)
	{
		cout << "すでにこのデータはあります！" << endl;
		return;
	}

	//データが大きい
	if(data < node->data)
	{
		//右が無ければ追加
		if (right == NULL)
			right = node;
		//あればその先に追加
		else
			right->AddNode(node);
		return;
	}

	//データが小さい
	//左が無ければ追加
	if (left == NULL)
		left = node;
	//あればその先に追加
	else
		left->AddNode(node);
}

void TreeInterFace::SetData(int data)
{
	this->data = data;
}

void TreeInterFace::Show()
{
	//書式  "{データ : 左 , 右 }"
	cout << "  {" << data << ":";

	//左
	if (left == NULL)
		cout << "NULL";
	else
		left->Show();
	cout << ",";
	
	//右
	if (right == NULL)
		cout << "NULL";
	else
		right->Show();

	cout << "}  ";
}

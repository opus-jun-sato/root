#pragma once

//二分木の節
class TreeInterFace
{
	//右
	TreeInterFace* right;
	//左
	TreeInterFace* left;

	//データ
	int data;
public:
	TreeInterFace();
	TreeInterFace(int data);
	virtual ~TreeInterFace();

	virtual void AddNode(TreeInterFace* node);

	virtual void SetData(int data);

	//左右を表示
	virtual void Show();
};


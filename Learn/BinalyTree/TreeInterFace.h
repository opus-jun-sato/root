#pragma once

//�񕪖؂̐�
class TreeInterFace
{
	//�E
	TreeInterFace* right;
	//��
	TreeInterFace* left;

	//�f�[�^
	int data;
public:
	TreeInterFace();
	TreeInterFace(int data);
	virtual ~TreeInterFace();

	virtual void AddNode(TreeInterFace* node);

	virtual void SetData(int data);

	//���E��\��
	virtual void Show();
};


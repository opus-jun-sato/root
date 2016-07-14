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
	//�Z�[�t�e�B
	if (node == NULL)
	{
		cout << "�k���|�C���^" << endl;
		return;
	}

	//�f�[�^������:�G���[
	if(data == node->data)
	{
		cout << "���łɂ��̃f�[�^�͂���܂��I" << endl;
		return;
	}

	//�f�[�^���傫��
	if(data < node->data)
	{
		//�E��������Βǉ�
		if (right == NULL)
			right = node;
		//����΂��̐�ɒǉ�
		else
			right->AddNode(node);
		return;
	}

	//�f�[�^��������
	//����������Βǉ�
	if (left == NULL)
		left = node;
	//����΂��̐�ɒǉ�
	else
		left->AddNode(node);
}

void TreeInterFace::SetData(int data)
{
	this->data = data;
}

void TreeInterFace::Show()
{
	//����  "{�f�[�^ : �� , �E }"
	cout << "  {" << data << ":";

	//��
	if (left == NULL)
		cout << "NULL";
	else
		left->Show();
	cout << ",";
	
	//�E
	if (right == NULL)
		cout << "NULL";
	else
		right->Show();

	cout << "}  ";
}

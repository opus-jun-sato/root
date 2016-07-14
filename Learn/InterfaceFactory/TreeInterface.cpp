#include "TreeInterface.h"
#include <iostream>

template<typename TYPE>
TreeInterface::TreeInterface()
{
	right = left = NULL;
}

template<typename TYPE>
TreeInterface<TYPE>::TreeInterface(TYPE & data)
{
	this->data = data;
	right = left = NULL;
}

template<typename TYPE>
TreeInterface::~TreeInterface()
{
}

template<typename TYPE>
void TreeInterface<TYPE>::SetData(TYPE & data)
{
	this->data = data;
}

template<typename TYPE>
void TreeInterface<TYPE>::AddRight(TreeInterface * node)
{
	//���łɂ���Ȃ炻�̐�ɂȂ�
	if (right != NULL)
		right->AddNode(node);

	//�Ȃ���΂��̐߂ɂȂ�
	right = node;
}

template<typename TYPE>
void TreeInterface<TYPE>::AddLeft(TreeInterface * node)
{
	//���łɂ���Ȃ炻�̐�ɂȂ�
	if (left != NULL)
		left->AddNode(node);

	//�Ȃ���΂��̐߂ɂȂ�
	left = node;
}

template<typename TYPE>
void TreeInterface<TYPE>::Show()
{

}


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
	//すでにあるならその先につなぐ
	if (right != NULL)
		right->AddNode(node);

	//なければこの節につなぐ
	right = node;
}

template<typename TYPE>
void TreeInterface<TYPE>::AddLeft(TreeInterface * node)
{
	//すでにあるならその先につなぐ
	if (left != NULL)
		left->AddNode(node);

	//なければこの節につなぐ
	left = node;
}

template<typename TYPE>
void TreeInterface<TYPE>::Show()
{

}


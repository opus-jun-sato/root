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
	//Ç∑Ç≈Ç…Ç†ÇÈÇ»ÇÁÇªÇÃêÊÇ…Ç¬Ç»ÇÆ
	if (right != NULL)
		right->AddNode(node);

	//Ç»ÇØÇÍÇŒÇ±ÇÃêﬂÇ…Ç¬Ç»ÇÆ
	right = node;
}

template<typename TYPE>
void TreeInterface<TYPE>::AddLeft(TreeInterface * node)
{
	//Ç∑Ç≈Ç…Ç†ÇÈÇ»ÇÁÇªÇÃêÊÇ…Ç¬Ç»ÇÆ
	if (left != NULL)
		left->AddNode(node);

	//Ç»ÇØÇÍÇŒÇ±ÇÃêﬂÇ…Ç¬Ç»ÇÆ
	left = node;
}

template<typename TYPE>
void TreeInterface<TYPE>::Show()
{

}


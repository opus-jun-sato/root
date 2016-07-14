//“ñ•ª–Ø

#include <iostream>
#include "TreeInterFace.h"

void main()
{
	TreeInterFace root;
	root.SetData(5);

	TreeInterFace nodes[9];
	int datas[9] = { 3,8,1,9,0,2,7,6,4 };

	for (int i = 0; i < 9; i++)
	{
		nodes[i].SetData(datas[i]);
		root.AddNode(&nodes[i]);
	}

	TreeInterFace node(20);

	root.AddNode(&node);

	root.Show();
	std::cout << std::endl;
}
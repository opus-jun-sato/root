#pragma once
//木構造の節のインターフェース

template <typename TYPE>
class TreeInterface
{
protected:
	//データ
	TYPE data;

	//これ以下の節
	//右
	TreeInterface* right;
	//左
	TreeInterface* left;

public:
	//コンストラクタ
	TreeInterface();
	//データ指定型コンストラクタ
	TreeInterface(TYPE& data);
	//デストラクタ
	virtual ~TreeInterface();

	//データセット
	void SetData(TYPE& data);

	//節をこの節以下につなげる
	virtual void AddNode(TreeInterface* node) = 0;
	//右につなげる
	virtual void AddRight(TreeInterface* node);
	//左につなげる
	virtual void AddLeft(TreeInterface* node);

	//表示する
	virtual void Show();
};


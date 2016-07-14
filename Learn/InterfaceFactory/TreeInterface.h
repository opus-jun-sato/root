#pragma once
//�؍\���̐߂̃C���^�[�t�F�[�X

template <typename TYPE>
class TreeInterface
{
protected:
	//�f�[�^
	TYPE data;

	//����ȉ��̐�
	//�E
	TreeInterface* right;
	//��
	TreeInterface* left;

public:
	//�R���X�g���N�^
	TreeInterface();
	//�f�[�^�w��^�R���X�g���N�^
	TreeInterface(TYPE& data);
	//�f�X�g���N�^
	virtual ~TreeInterface();

	//�f�[�^�Z�b�g
	void SetData(TYPE& data);

	//�߂����̐߈ȉ��ɂȂ���
	virtual void AddNode(TreeInterface* node) = 0;
	//�E�ɂȂ���
	virtual void AddRight(TreeInterface* node);
	//���ɂȂ���
	virtual void AddLeft(TreeInterface* node);

	//�\������
	virtual void Show();
};


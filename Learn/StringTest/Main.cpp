//string�m�F

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

//�X�g���[������Ȃ��ƃt�H�[�}�b�g������Ȃ�

void main()
{
	std::stringstream ss;
	ss.clear();

	//�t�H�[�}�b�g�ɂ��킹��
	ss << std::fixed << std::setprecision(2) << 3.1415;

	//fixed	:	�Œ菬���_
	//setprecision(i) :	������i�ʂ܂�
	//setfill('')	:	�󂫖���('')�̕�����
	//setw(i)	:	i��

	std::cout << ss.str() << std::endl;

	ss.str("");

	ss << std::setw(5) << std::setfill('0') << std::setprecision(3) << 3.14;
	//�_�����5���@�󂢂���0�@�V�ӂ�3��
	std::cout << ss.str() << std::endl;

}
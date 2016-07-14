//string確認

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

//ストリームじゃないとフォーマットを入れれない

void main()
{
	std::stringstream ss;
	ss.clear();

	//フォーマットにあわせる
	ss << std::fixed << std::setprecision(2) << 3.1415;

	//fixed	:	固定小数点
	//setprecision(i) :	少数第i位まで
	//setfill('')	:	空き埋め('')の文字で
	//setw(i)	:	i桁

	std::cout << ss.str() << std::endl;

	ss.str("");

	ss << std::setw(5) << std::setfill('0') << std::setprecision(3) << 3.14;
	//点入れて5桁　空いたら0　天意か3桁
	std::cout << ss.str() << std::endl;

}
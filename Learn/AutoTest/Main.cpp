//autoŒ^‚ÌƒeƒXƒg

#include <iostream>

void main() 
{
	struct Vector2
	{
		float x, y;
		Vector2()
		{
			x = y = 0.0f;
		}
	};

	auto vec = Vector2();
	vec.x = 3.0f;
	vec.y = 2.0f;

	std::cout << "x:" << vec.x << " y:" << vec.y << std::endl;
}
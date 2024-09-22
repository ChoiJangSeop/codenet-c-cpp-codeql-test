//	-*- mode: C++ -*-
//	Greatest Common Divisor
//		Write a program which finds the greatest common divisor of two natural numbers a and b
//
//	Input
//		a and b are given in a line sparated by a single space.
//
//	Output
//		Output the greatest common divisor of a and b.
//
//	Constrants
//		1 ≤ a, b ≤ 109
//
//	Hint
//		You can use the following observation:
//
//		For integers x and y, if x ≥ y, then gcd(x, y) = gcd(y, x%y)
//
//	Sample Input 1
//		54 20
//	Sample Output 1
//		2
//	Sample Input 2
//		147 105
//	Sample Output 2
//		21

#include <iostream>

int	main(int	argc,
		 char*	argv[])
{
	unsigned int	x	{0};
	unsigned int	y	{0};

	std::cin >> x >> y;

	if(x < y){
		auto tmp	= y;
		y			= x;
		x			= y;
	}

	// ユークリッドの互除法
	unsigned int	r	= x % y;
	while(r != 0){
		x = y;
		y = r;
		r = x % y;
	}

	std::cout << y << '\n';

    return 0;
}


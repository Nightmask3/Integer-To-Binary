#include <string>
#include <iostream>
std::string str_to_bin(const std::string& str)
{
	std::string binarystr = ""; // Output string

	int remainder;
	int numberint = std::stoi(str);
	bool flagnegative = false;
	// If negative number, beginning of binary equivalent is 1
	if (numberint < 0)
	{
		numberint = abs(numberint);
		flagnegative = true;
	}
	// If number is 0, don't perform conversion simply return 0
	if (numberint == 0)
	{
		binarystr = "0";
		return binarystr;
	}
	std::cout << numberint << "\n";

	while (numberint != 1)
	{
		remainder = numberint % 2;
		numberint /= 2;
		std::ostringstream convert; // stream used for the conversion
		convert << remainder;      // insert the textual representation of 'remainder' in the characters in the stream
		binarystr += convert.str();
	}
	std::ostringstream final;
	final << numberint;			// To insert the last (or rather first once reversed) binary number
	binarystr += final.str();
	if (flagnegative == true)
		binarystr += "-";
	std::reverse(binarystr.begin(), binarystr.end());
	return binarystr;
}

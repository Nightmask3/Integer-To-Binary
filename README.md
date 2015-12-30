# Integer-To-Binary
A program meant to, you guessed it, convert Integer to Binary. With one caveat, the Integer is originally represented as a string.

Okay let's break down the process you require here. (only one of an infinite number of ways to do this)

1) Conversion of a number represented as a string type into an integer type.

2) Conversion of the intermediary integer type into a binary number which is held in another string type. (judging by the return type of your function, which could just as easily return an integer by the way and save the headache of representing the binary equivalent as a string)

For step 1: Use the standard library function stoi. It does what you might imagine, extracts the numerical data from the string and stores it in an integer. http://www.cplusplus.com/reference/string/stoi/

    std::string numberstr = "123";
    int numberint = std::stoi(numberstr);
    std::cout << numberint << "\n";
    Now you have the number as an integer.

For step 2:

1) This process involves the conversion of a number from base 10 (decimal) to base 2 (binary).

2) Divide the number by 2.

3) Store the remainder and the quotient of this division operation for further use.

4) The remainder becomes part of the binary representation, while the quotient is used as the next dividend.

5) This process repeats until the dividend becomes 1, at which point it too is included in the binary representation.

6) Reverse the string, and voila! You now have the binary representation of a number.

7) If you want to handle negative numbers (which I imagine you might), simply perform a check before the conversion to see if the converted integer is negative, and set a flag to true if it is.

8) Check this flag before reversing, and add a negative sign to end of the string before reversing.

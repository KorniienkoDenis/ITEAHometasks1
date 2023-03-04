#include <iostream>

/*
	
	UKRAINIAN VERSION COMMENT.
	================================================================================
	�������������� ��������� ���������� �����, �������� ��������, ��� ������� �����
	������� ����� (1 - 6). ������� ������� �����, ��� ���� ������� � ������� ��
	���������� ������� �������� ����� �������. ������� ��������� � �������.
	������� �������, �� ������ ����� �� �����.
	================================================================================

	--------------------------------------------------------------------------------

	ENGLISH VERSION COMMENT.
	==================================================================================
	Using a random number generator, write a program that throws a toss glans (1 - 6).
	Make the number of throws that was entered into the console and count the numbers
	of drops of each side. Output the result to the console.
	Output the sides that fell more and less.
	==================================================================================
*/

int main()
{
	srand(time(NULL));

	unsigned short countOfThrow;
	unsigned short countOfOne = 0,
		countOfTwo = 0,
		countOfThree = 0,
		countOfFour = 0,
		countOfFive = 0,
		countOfSix = 0;

	std::cout << "Input count of throw (1 to 6): ";
	std::cin >> countOfThrow;
	std::cout << std::endl;

	for (int index = 1; index <= countOfThrow; index++)
	{
		short number = rand() % 6 + 1;

		std::cout << " " << index << ". throw is " << number << std::endl;

		if (number == 1)
			countOfOne++;
		else if (number == 2)
			countOfTwo++;
		else if (number == 3)
			countOfThree++;
		else if (number == 4)
			countOfFour++;
		else if (number == 5)
			countOfFive++;
		else if (number == 6)
			countOfSix++;

	}

	std::cout << "\n--- Count of hits on each side ---\n";

	std::cout << " Count of number 1: " << countOfOne << std::endl;
	std::cout << " Count of number 2: " << countOfTwo << std::endl;
	std::cout << " Count of number 3: " << countOfThree << std::endl;
	std::cout << " Count of number 4: " << countOfFour << std::endl;
	std::cout << " Count of number 5: " << countOfFive << std::endl;
	std::cout << " Count of number 6: " << countOfSix << std::endl;



	return 0;
}
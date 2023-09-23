#include "CompMain.h"

int main()
{
	CompMain();
}

CompMain::CompMain()
{
	cout << "How do you want to generate the random data sett?" << endl;
	dataSettChoice();

	cout << "What sorting algorithm do you want to use?" << endl;
	sortingChoice();
}

void CompMain::dataSettChoice()
{
	cout << "1. User defined" << endl;
	cout << "2. Random" << endl;
	cout << "1-2: ";
	cin >> choice;

	switch (choice)
	{
	case 0:
		cout << endl;
		cout << "Incorrect Data type" << endl;
		cout << "Exit on Code " << choice << endl;

		exit(choice);
	case 1:
		cout << "User Defined" << endl;
		cout << endl;
		userDefineVector();

		break;
	case 2:
		cout << "Random" << endl;
		cout << endl;
		randomDefineVector(randomNumbers);

		break;
	default:
		cout << endl;
		cout << "That input was not 1 or 2" << endl;
		cout << endl;

		dataSettChoice();
	}
}

void CompMain::userDefineVector()
{
	cout << "Input how many elements you want: ";
	cin >> elements;
	if (elements <= 0)
	{
		cout << endl;
		cout << elements << " Elements means there will be no output" << endl;
		cout << endl;
		userDefineVector();
	}
	else
	{
		cout << endl;
		cout << "Input your elements in a random order" << endl;
		for (int i = 0; i < elements; i++)
		{
			float input;
			cout << "Element " << i + 1 << ": ";
			cin >> input;
			randomNumbers.push_back(input);
		}
		cout << endl;
	}
}

void CompMain::randomDefineVector(vector<float>& nums)
{
	cout << "Input how many elements you want: ";
	cin >> elements;
	cout << endl;

	if (elements <= 0)
	{
		cout << endl;
		cout << "Less than 0 elements means there will be no output" << endl;
		cout << endl;
		randomDefineVector(nums);
	}
	else
	{
		cout << endl;
		for (int i = 0; i < elements; i++)
		{
			float n = GetRandomFloat(elements);

			nums.push_back(n);
		}
	}
}

float CompMain::GetRandomFloat(int numbersToGenerate)
{
	int pos = rand() % 10;
	float n = rand() % (numbersToGenerate * 2);
	if (pos == 1)
		n = -n;
	return n;
}

void CompMain::sortingChoice()
{
	cout << "1. Iterative Bubble Sort" << endl;
	cout << "2. Recursive Merge Sort" << endl;
	cout << "3. Recursive Quick Sort" << endl;
	cout << "1-3: ";
	cin >> choice;

	switch (choice)
	{
	case 0:
		cout << endl;
		cout << "Incorrect Data type" << endl;
		cout << "Exit on Code " << choice << endl;

		exit(choice);
	case 1:
		cout << "Iterative Bubble Sort" << endl;
		cout << endl;
		sort_bubble(randomNumbers);

		break;
	case 2:
		cout << "Recursive Merge Sort" << endl;
		cout << endl;
		sort_merge(randomNumbers, elements);

		break;
	case 3:
		cout << "Recursive Quick Sort" << endl;
		cout << endl;
		sort_quick(randomNumbers, elements);

		break;
	default:
		cout << endl;
		cout << "That input was not 1 or 2" << endl;
		cout << endl;

		sortingChoice();
	}
}

void CompMain::sort_bubble(vector<float>& nums)
{
	cout << "Input elements: ";
	print(nums);

	b_sort->sort(nums);
	cout << endl;
	cout << endl;

	cout << "Bubble Sort: ";
	print(nums);
	cout << endl;
	cout << endl;

	redoChoice();
}

void CompMain::sort_merge(vector<float>& nums, int size)
{
	cout << "Input elements: ";
	print(nums);

	m_sort->sort(nums, 0, size - 1);
	cout << endl;
	cout << endl;

	cout << "Merge Sort: ";
	print(nums);
	cout << endl;
	cout << endl;

	redoChoice();
}

void CompMain::sort_quick(vector<float>& nums, int size)
{
	cout << "Input elements: ";
	print(nums);

	q_sort->sort(nums, 0, size - 1);
	cout << endl;
	cout << endl;

	cout << "Quick Sort: ";
	print(nums);
	cout << endl;
	cout << endl;

	redoChoice();
}

void CompMain::redoChoice()
{
	cout << "Do you want to do it again?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << "1-2: ";
	cin >> choice;

	switch (choice)
	{
	case 0:
		cout << endl;
		cout << "Incorrect Data type" << endl;
		cout << "Exit on Code " << choice << endl;

		exit(choice);
	case 1:
		cout << endl;
		CompMain();

		break;
	case 2:
		exit(choice);

	default:
		cout << endl;
		cout << "That input was not 1 or 2" << endl;
		cout << endl;

		redoChoice();
	}
}

void CompMain::print(vector<float>& nums, size_t index)
{
	cout << endl;
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
}

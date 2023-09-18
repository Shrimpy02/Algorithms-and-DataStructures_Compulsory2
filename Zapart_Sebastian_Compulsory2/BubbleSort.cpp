
#include <iostream>
#include "BubbleSort.h"

// To Do: Should be lists for much less complexity when you cant do it recursively. 

int main()
{

	int elements = 0;
	stack<float> UnorganizedNums;

	cout << "Input how many elements you want: ";
	cin >> elements;
	cout << " " << endl;
	cout << "Write your elements in random order" << endl;
	for(int i = 0; i < elements; i++)
	{
		float input;
		cout << "Element " << i+1 << ": ";
		cin >> input;
		UnorganizedNums.push(input);
	}

	cout << "These are the input elements" << endl;
	PrintStack(UnorganizedNums);

	cout << "These are the input elements sorted by; Bubble Sort" << endl;
	//BubbleSort(UnorganizedNums);
	PrintStack(UnorganizedNums);
	
}

void PrintStack(stack<float> st)
{
	int n = st.size();
	stack<float> st2;

	for (int i = 0; i < n; i++)
	{
		st2.push(st.top());
		st.pop();
	}

	for (int i = 0; i < n; i++)
	{
		cout << st2.top();
		st2.pop();
	}

	cout << " " << endl;
}

void BubbleSort(stack<float> st)
{
	int n = st.size();

	for (int i = 0; i < n; i++)
	{
		if (st2.top)
	}
}


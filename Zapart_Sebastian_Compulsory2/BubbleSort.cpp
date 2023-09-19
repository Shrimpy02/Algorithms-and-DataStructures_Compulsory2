
#include "BubbleSort.h"

BubbleSort::BubbleSort()
{
}

void BubbleSort::sort(vector<float>& nums)
{
	// Ends the sorting function if there is nothing to sort
	if (nums.empty()) return;

	// Checks elements one by one and swaps them if unsorted
	for (int i = 0; i < (nums.size() - 1); i++)
	{
		if (nums[i] > nums[i + 1])
			swap(nums, i);
	}

	// Checks if the order is correct, if not sort again
	if (!CheckOrder(nums))
		sort(nums);
}

void BubbleSort::swap(vector<float>& nums, int i)
{
	float temp = nums[i];
	nums[i] = nums[i + 1];
	nums[i + 1] = temp;
}

bool BubbleSort::CheckOrder(vector<float>& nums)
{
	// Iteratively trough the vector, returns true if sorted
	for (int i = 0; i < (nums.size() - 1); i++)
	{
		if (nums[i] > nums[i + 1])
			return false;
	}
	return true;
}


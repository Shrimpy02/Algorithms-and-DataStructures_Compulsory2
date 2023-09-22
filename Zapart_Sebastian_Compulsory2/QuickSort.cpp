#include "QuickSort.h"

QuickSort::QuickSort()
{
}

void QuickSort::sort(vector<float>& nums, int start, int end)
{
	// Ends sort if there are no elements
	if (nums.empty()) return;

	if (start < end){
		int pivotIndex = partition(nums, start, end);
		sort(nums, start, pivotIndex - 1);
		sort(nums, pivotIndex + 1, end);
	}
}

int QuickSort::partition(vector<float>& nums, int start, int end)
{
	float pivot = nums[end];
	int index = start - 1;

	for (int j = start; j < end; j++) {
		if (nums[j] < pivot) {
			index++;
			swap(nums[index], nums[j]);
		}
	}
	index++;
	swap(nums[index], nums[end]);
	return index;
}

void QuickSort::swap(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

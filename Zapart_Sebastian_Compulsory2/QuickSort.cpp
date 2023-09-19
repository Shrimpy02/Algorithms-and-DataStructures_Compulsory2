#include "QuickSort.h"

QuickSort::QuickSort()
{
}

void QuickSort::Sort(vector<float>& nums, int start, int end)
{
	// Ends sort if there are no elements
	if (nums.empty()) return;

	// Divides vector by the pivot index
	if (start < end) {
		int pivotIndex = Partition(nums, start, end, nums[end]);
		Sort(nums, start, pivotIndex - 1);
		Sort(nums, pivotIndex + 1, end);
	}
	inverseVector(nums,start,end);
}

int QuickSort::Partition(vector<float>& nums, int start, int end, float pivot)
{
	// Returns itself as pivot index 
	if (start >= end) 
		return start;
	
	if (nums[start] <= pivot) {
		Swap(&nums[start], &nums[end]);
		return Partition(nums, start + 1, end - 1, pivot);
	}
	else {
		return Partition(nums, start, end - 1, pivot);
	}
}

void QuickSort::Swap(float* a, float* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void QuickSort::inverseVector(vector<float>& nums, int start, int end)
{
	if (start >= end) 
		return;  // Base case: When start meets or exceeds end, stop recursion.
	

	// Swap elements at the start and end positions.
	Swap(&nums[start], &nums[end]);

	// Recursively reverse the subarray from start + 1 to end - 1.
	inverseVector(nums, start + 1, end - 1);
}

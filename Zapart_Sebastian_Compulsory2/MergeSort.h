
#pragma once
// include libraries
#include <vector>

using namespace std;


class MergeSort
{
public:
	/**
	* \brief Constructor for the Merge sorting algorithm
	*/
	MergeSort();

	/**
	* \brief 
	* \param nums The vector to be sorted
	* \param start The start index of the vector
	* \param end The end index of the vector
	 */
	void sort(vector<float>& nums, int start, int end);

	/**
	 * \brief swaps values a with b through the values address
	 * \param a Location a
	 * \param b Location b
	 */
	void swap(float& a, float& b);
};

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
	* \brief recursively breaks down a vector
	* into sub vectors then sorts them while merging back
	* \param nums The vector to be sorted
	* \param start The start index of the vector
	* \param end The end index of the vector
	 */
	void sort(vector<float>& nums, int start, int end);

	/**
	 * \brief Sub function of merge sort, this is what
	 * actually sorts and re merges the vectors.
	 * \param nums the input vector for merging 
	 * \param start the starting index of input vector
	 * \param middle the middle index of input vector
	 * \param end the end index of input vector
	 */
	void merge(vector<float>& nums, int start, int middle, int end);
};
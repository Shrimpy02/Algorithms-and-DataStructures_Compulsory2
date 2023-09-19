
#pragma once
// include libraries
#include <vector>

using namespace std;


class QuickSort
{
public:
	/**
	 * \brief Constructor for the Quick sorting algorithm
	*/
	QuickSort();


	/**
	 * \brief Sorts the input recursively by dividing the data-sett between a pivot
	 * then sorting the smaller sections with the same method
	 * \param nums The vector to be sorted
	 * \param low The start position of the vector
	 * \param heigh The end position of the vector
	 */
	void Sort(vector<float>& nums, int low, int heigh);

	/**
	 * \brief Moves elements less then or equal to the pivot point to the left of it
	 * and elements higher than the pivot point to the right of it
	 * \param nums The vector to be divided
	 * \param start The starting position of the vector
	 * \param end The ending position of the vector
	 * \param pivot The chosen pivot point of the vector
	 * \return Returns itself as the pivot index
	 */
	int Partition(vector<float>& nums, int start, int end, float pivot);

	/**
	 * \brief swaps address location a with b
	 * \param a Location a
	 * \param b Location b
	 */
	void Swap(float* a, float* b);

	/**
	 * \brief inverses the vector after it has been sorted
	 * \param nums Address to the vector that needs to be inverted
	 */
	void inverseVector(vector<float>& nums, int start, int end);
};
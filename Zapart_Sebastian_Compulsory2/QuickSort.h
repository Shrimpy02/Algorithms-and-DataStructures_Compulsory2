
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
	 * \param start The start index of the vector
	 * \param end The end index of the vector
	 */
	void sort(vector<float>& nums, int start, int end);

	/**
	 * \brief Moves elements less then or equal to the pivot point to the left of it
	 * and elements higher than the pivot point to the right of it
	 * \param nums The vector to be divided
	 * \param start The starting position of the vector
	 * \param end The ending position of the vector
	 * \return Returns itself as the pivot index
	 */
	int partition(vector<float>& nums, int start, int end);

	/**
	 * \brief swaps values a with b through the values address
	 * \param a Location a
	 * \param b Location b
	 */
	void swap(float& a, float& b);
};
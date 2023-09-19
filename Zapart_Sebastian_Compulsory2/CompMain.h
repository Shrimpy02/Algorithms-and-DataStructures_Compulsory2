#pragma once

// C++ libraries
#include <vector>
#include <random>
#include <iostream>

// Sorting classes include
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

// pre defined namespace "std"
using namespace std;

class CompMain
{
public:
	/**
	 * \brief Main Constructor
	 */
	CompMain();

	/**
	 * \brief Smart pointer to the Bubble sort class,
	 * containing merge sort logic
	 */
	shared_ptr<BubbleSort>	b_sort = make_shared<BubbleSort>();
	/**
	 * \brief Smart pointer to the Merge sort class,
	 * containing merge sort logic
	 */
	shared_ptr<MergeSort>	m_sort = make_shared<MergeSort>();
	/**
	 * \brief Smart pointer to the Quick sort class,
	* containing merge sort logic
	*/
	shared_ptr<QuickSort>	q_sort = make_shared<QuickSort>();

	// Constant for choice cases
	int choice;
	// Constant for vector size
	int elements;
	// The vector used for sorting
	vector<float> randomNumbers;

	/**
	 * \brief User logic for choosing how to create a random vector
	 */
	void dataSettChoice();

		/**
		 * \brief User function for generating a vector
		 */
		void userDefineVector();

		/**
		 * \brief Function that adds random elements to input vector
		 * \param nums Address to the vector that will get random values
		 * \param bottom The bottom limit for the number randomizer
		 * \param top The top limit for the number randomizer 
		 */
		void randomDefineVector(vector<float>& nums, int bottom, int top);

	/**
	 * \brief User logic for choosing witch sorting algorithm to use
	 */
	void sortingChoice();

		/**
		 * \brief A function that calls user logic before
		 * the merge sort algorithm
		 * \param nums Address to the vector that will be sorted
		 */
		void sort_bubble(vector<float>& nums);

		/**
		 * \brief A function that calls user logic before
		 * the merge sort algorithm 
		 * \param nums Address to the vector that will be sorted
		 * \param size Size of the vector as int
		 */
		void sort_merge(vector<float>& nums, int size);

		/**
		 * \brief A function that calls user logic before
		 * the quick sort algorithm 
		 * \param nums Address to the vector that will be sorted
		 * \param size Size of the vector as int
		 */
		void sort_quick(vector<float>& nums, int size);

		/**
		* \brief
		* Prints each element of a vector iteratively.
		* \param nums
		* Address to the vector that will be printed
		*/
		void print(vector<float>& nums);

	/**
	* \brief User logic that resets the program if user wants to use it again
	*/
		void redoChoice();
};


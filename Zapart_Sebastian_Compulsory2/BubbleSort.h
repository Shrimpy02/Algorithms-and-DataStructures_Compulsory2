
#pragma once
// Include Library
#include <vector>

using namespace std;


class BubbleSort
{
public:
	/**
	 * \brief Constructor for the bubble sorting algorithm
	 */
	BubbleSort();

		/**
		 * \brief Bubble sorts input iteratively 
		 * \param nums Address to the vector that gets sorted
		 */
		void sort(vector<float>& nums);

			/**
			 * \brief Swaps two elements in the given vector
			 * \param nums Address to the array that gets it's elements swapped
			 * \param i The indexes that should be swapped
			 */
			void swap(vector<float>& nums, int i);

		/**
		 * \brief Checks if input is sorted in ascending order
		 * \param nums Address to he vector that has been sorted
		 * \return returns true if input successfully sorted
		 */
		bool CheckOrder(vector<float>& nums);
};





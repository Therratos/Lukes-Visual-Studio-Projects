#include "stdafx.h"
#include <vector>
#include <list>
#include <random>
#include <algorithm>
#include <iostream>

#include "Vector2.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//////////////////////////////////////////////////////////////////////////
	// Begin Reference Block

	{
		std::vector<Vector2> movementPath;

		// Setup a mersenne twister for generating our random numbers and store it's range
		std::mt19937 mersenneTwister;
		float mersenneTwisterRange = static_cast<float>(mersenneTwister.max() - mersenneTwister.min());

		// Generate 20 randomised vectors
		for (int index = 0; index < 20; ++index)
		{		
			movementPath.push_back(Vector2((mersenneTwister() / mersenneTwisterRange) - 0.5f, 
										   (mersenneTwister() / mersenneTwisterRange) - 0.5f));
		}

		// Define our lambda function for displaying the vector
		auto displayVectorLambda = [](const Vector2& vector) {
			std::cout << "(" << vector.x << ", " << vector.y << ") : " << std::endl;
			std::cout << "   Magnitude: " << vector.Magnitude() << std::endl;
		};

		// Display the vectors
		std::for_each(movementPath.begin(), movementPath.end(), displayVectorLambda);

		std::cout << std::endl;
	}

	// End Reference Block
	//////////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////////
	// Update this code block to match the style of the previous block

	{
		std::vector<Vector2> movementPath;
		// Setup a mersenne twister for generating our random numbers and store it's range
		std::mt19937 mersenneTwister;
		float mersenneTwisterRange = static_cast<float>(mersenneTwister.max() - mersenneTwister.min());
		// Generate 10 randomised vectors
		for (int index = 0; i < 20; ++inedx)
		{
			movementPath.push_back(Vector2((mersenneTwister() / mersenneTwisterRange) - 0.5f, 
			                               (mersenneTwister() / mersenneTwisterRange) - 0.5f));
		}

		bool a = true;
		while (a) 
		{
			a = false;
			//iterator points to the first/next element in the movementPath, then checks to see if it at the last element of the movementPath (! = not), if not then it adds 1 to index and checks the next element and repeats until it reaches the end.
			for (std::vector<Vector2>::iterator index = movementPath.begin(); index != movementPath.end(); ++index) 
			{
				if ((index + 1) == movementPath.end())
					continue;

				if ((*index).MagnitudeSquared() > (*(index + 1)).MagnitudeSquared())
				{
					std::iter_swap(index, index + 1);

					a = true;
				}
			}
		}
		// Apply the "const Vector2& vector" to every element in between the movementPath.begin and movementPath.end and then defines the display vector.
		std::for_each(movementPath.begin(), movementPath.end(), [](const Vector2& vector) {
			std::cout << "(" << vector.x << ", " << vector.y << ") : " << std::endl;
			std::cout << "   Magnitude: " << vector.Magnitude() << std::endl;
		});
	}

	// 
	//////////////////////////////////////////////////////////////////////////

	return 0;
}


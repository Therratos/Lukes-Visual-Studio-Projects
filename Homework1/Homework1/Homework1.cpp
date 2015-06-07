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
		for (int index = 0; i < 10; ++inedx)
		{
			movementPath.push_back(Vector2((mersenneTwister() / mersenneTwisterRange) - 0.5f, 
			                               (mersenneTwister() / mersenneTwisterRange) - 0.5f));
		}

		bool a = true;
		while (a) 
		{
			a = false;

			for (std::vector<Vector2>::iterator index = path.begin(); index != path.end(); ++index) 
			{
				if ((index + 1) == path.end())
					continue;

				if ((*index).MagnitudeSquared() > (*(index + 1)).MagnitudeSquared())
				{
					std::iter_swap(index, index + 1);

					a = true;
				}
			}
		}

		std::for_each(path.begin(), path.end(), [](const Vector2& vector) {
			std::cout << "(" << vector.x << ", " << vector.y << ") : " << std::endl;
			std::cout << "   Magnitude: " << vector.Magnitude() << std::endl;
		});
	}

	// 
	//////////////////////////////////////////////////////////////////////////

	return 0;
}


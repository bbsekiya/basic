
#include <iostream>
#include <vector>
#include "seasons.h"
struct Winter : public Seasons
{
	int semester;
	std::vector<int> x;
};
#include <iostream>
#include "headers/helpers.h"

#include <vector>

using namespace std;		

void gravityFunction() {
	int initialHeight;
	int height;
	int seconds;

	cout << "Enter the height of the tower in meters: ";
	cin >> initialHeight;

	height = initialHeight;

	while(height > 0) {
		height = distanceFallen(initialHeight, seconds);
		
		if(height < 0) {
			height = 0;
		}

		cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters" << endl;
		seconds++;
	}
}

enum MonsterType { Ogre, Dragon, Orc, GiantSpider, Slime, Unknown };

class Monster {
	public:
	MonsterType type;
	string name;
	int health;

	Monster(MonsterType aType, string aName, int aHealth) {
		name = aName;
		health = aHealth;

		if (aType == Ogre || aType == Dragon || aType == Orc || aType == GiantSpider || aType == Slime) {
			type = aType;
		} else {
			type = Unknown;
		}
	}
};

int main() {

	// gravityFunction();
	// Monster m1 = Monster(Ogre, "cl", 100);

	vector<int> myArray { 7 ,2, 5, 10, 1 };
	cout << myArray.size() << endl;

	sort(myArray.begin(), myArray.end());

	for(const auto &n : myArray) {
		cout << n << endl;
	}

	// cout << "hisd" << endl;

	// int array[] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

	// const int arrayLength = sizeof(array) / sizeof(*array);		
	// sort(array, array + arrayLength);

	// for(const auto &i : array) {
	// 	cout<< i << endl;
	// }


	return 0;
}

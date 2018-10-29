#include <iostream>
#include <math.h> 
#include "headers/add.h"
#include "headers/constants.h"

using namespace std;

// class Book {
// 	private: 
// 		int price;
// 		string title;
// 		string author;
// 		int pages;
// 	public: 

// 		Book(string aTitle, string aAuthor, int aPages, int aPrice) {
// 			title = aTitle;
// 			author = aAuthor;
// 			pages = aPages;
// 			price = aPrice;
// 		}

// 		bool isExpensive() {
// 			if(price >= 100) {
// 				return true;
// 			}
// 			return false;
// 		}

// 		void setAuthor(string aAuthor) {
// 			author = aAuthor;
// 		}

// 		string getAuthor() {
// 			return author;
// 		}
// };

int distanceFallen(int initialHeight, int time) {
	return initialHeight - (constants::gravity * pow(time, 2))/2;
}

int main() {

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

	return 0;
}

#include <iostream>
#include "headers/add.h"

using namespace std;

class Book {
	private: 
		int price;
		string title;
		string author;
		int pages;
	public: 

		Book(string aTitle, string aAuthor, int aPages, int aPrice) {
			title = aTitle;
			author = aAuthor;
			pages = aPages;
			price = aPrice;
		}

		bool isExpensive() {
			if(price >= 100) {
				return true;
			}
			return false;
		}

		void setAuthor(string aAuthor) {
			author = aAuthor;
		}

		string getAuthor() {
			return author;
		}
};

void sayHi(string name, int age) {
	cout << "Hello User" << name << "age:" << age << endl;
}

int main() {

	// Book book1("harry", "clrence", 500, 10000);

	// book1.setAuthor("reset the author of basdook 1");

	// Book book2("asd", "test", 5, 5);

	// cout << book1.getAuthor() << endl;

	int x = 3;
	int y = 5;

    cout << "The sum is: \n" << add(x, y) << endl;


	return 0;
}
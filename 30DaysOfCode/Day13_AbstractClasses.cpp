#include <iostream>
#include <string>
using namespace std;

class Book
{
	protected:
		string title;
		string author;
	public:
		Book(string t,string a)
		{
			title=t;
			author=a;
		}
		virtual void display()=0;

};

// Write your MyBook class here

	//   Class Constructor
	//   
	//   Parameters:
	//   title - The book's title.
	//   author - The book's author.
	//   price - The book's price.
	//
	// Write your constructor here
	
	
	//   Function Name: display
	//   Print the title, author, and price in the specified format.
	//
	// Write your method here
	
// End class

class MyBook: public Book
{
	int price;
public:
	MyBook(string t, string a, int p): Book(t, a), price(p) {};
	void display() {
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Price: " << price << endl;
	}
};

int main()
{
	string title,author;
	int price;
	getline(cin,title);
	getline(cin,author);
	cin>>price;
	MyBook novel(title,author,price);
	novel.display();
	return 0;
}

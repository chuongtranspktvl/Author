#include "Author.cpp"
#include"Book.cpp"
int main()
{
	vector<Author>authors;
	authors.push_back(Author("Chuong", "chuongtrancltv"));
	authors.push_back(Author("Cuong", "chuongtranspkt"));
	authors.push_back(Author("Cuc", "chuongtrantv"));
	Book book1("lap tring c++", authors, 1000);
	cout << book1.getAuthorNames();

}

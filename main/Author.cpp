#ifndef AUTHOR_CPP
#define AUTHOR_CPP
#include<iostream>
using namespace std;
class Author {
private:
	string name;
	string email;
public:
	Author(string name, string emai) {
		this->name = name;
		this->email = email;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void setEmail(string email) {
		this->email = email;
	}
	string getEmail() {
		return email;
	}
};
#endif // !AUTHOR_CPP

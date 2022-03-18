#ifndef STEK_H
#define STEK_H
#include <string>
using namespace std;

class Stek
{
public:
	Stek(string, int);
	bool add_elem(int);
	bool del_elem();
	int get_elem();
	int get_size();
	string get_name();
	int get_n_elem();
private:
	string name;
	int size;
	vector<int> stek_mas;
};

#endif // !STEK_H

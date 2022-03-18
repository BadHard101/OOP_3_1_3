#include <vector>
#include <string>
#include "Stek.h"
using namespace std;

Stek::Stek(string name, int size)
{
	this->name = name;
	this->size = size;
}

bool Stek::add_elem(int elem)
{
	if (stek_mas.size() < size)
	{
		stek_mas.push_back(elem);
		return true;
	}
	else
		return false;
}

bool Stek::del_elem()
{
	int s = stek_mas.size();
	if (s != 0)
	{
		s = stek_mas[s - 1];
		stek_mas.pop_back();
		return true;
	}
	return false;
}

int Stek::get_elem()
{
	return stek_mas[stek_mas.size() - 1];
}

int Stek::get_size()
{
	return size;
}

string Stek::get_name()
{
	return name;
}

int Stek::get_n_elem()
{
	return stek_mas.size();
}
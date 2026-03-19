#pragma once
#include<string>
#include<iostream>
using namespace std;
class Store
{
private:
	string name;
	string promocode;
	float discountprom;
	int receiptnumber=1;
public:
	Store(string n, string p, float d);
	string Getname();
	float Discount(double total, string Enterpromo);
	int Getnextnumber();





};

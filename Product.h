#pragma once
#include<string>
#include<iostream>
using namespace std;
class Product
{
protected:
	string name;
	float price;
public:
	Product(string n, float p);
	virtual float Calculatediscountprice() = 0;
	virtual string Gettype() = 0;
	~Product(); 
	string Getname();
	float Getprice();


};


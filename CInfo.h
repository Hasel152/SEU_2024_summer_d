#pragma once
#include"pch.h"
#include<fstream>
#include<iostream>
using namespace std;

class CInfo
{
public:
	int m_pos;
	int m_data;
	CInfo();
	CInfo(int pos, int data);
	void Load(ifstream& in);
//	void Save(ofstream& out);
};


#pragma once
#include"Node.h"
#include"CInfo.h"
#include <afx.h>  

class CDataInterface
{
public:
 	bool Open(CString FilePath);
	void Insert(CInfo Info);
	void Delete(int pos);
	void Seek(int data);
	bool Save(CString FilePath);

	List L;
};


#include "pch.h"
#include "CInfo.h"

CInfo::CInfo() {

}

CInfo::CInfo(int pos, int data)
{
	m_pos = pos;
	m_data = data;
}

void CInfo::Load(ifstream& in)
{
	in >> m_pos;
	in >> m_data;

}



#include "pch.h"

#include "CInfo.h"

bool CDataInterface::Open(CString FilePath)
{
		ifstream in(FilePath, ios::in);
		
		if (in.is_open()) {
			int num;
		
			in >> num;
		
			for (int i = 0; i < num; i++) {
				CInfo MyInfo;
				MyInfo.Load(in);
				Insert(MyInfo);
		
			}
		
			in.close();

			return true;

		}
		else {
	
			return false;
		}

	}


void CDataInterface::Insert(CInfo Info)
{
	L.Insert(Info.m_pos, Info.m_data);
}

void CDataInterface::Delete(int pos)
{
	L.Delete(pos);
}

void CDataInterface::Seek(int data)
{
	int i = L.Seek(data);
	if (i == -1) {
		MessageBox(NULL,TEXT("该链表没有要寻找的值"),TEXT("寻找"),MB_OK);
	}
	else {
		CString str;
		str.Format(_T("位置是：%d"), i);

		MessageBox(NULL, str, TEXT("寻找"), MB_OK);
	}
}

bool CDataInterface::Save(CString FilePath) {
	ofstream out(FilePath,ios::out);
	if (out.is_open()) {
		out << L.GetNum()<<endl;
		Node* temp = L.GetHead();
		for (int i = 0; i < L.GetNum(); i++) {
			out << i << "\t";
			out << temp->data << endl;;
			temp = temp->next;
		}
		out.close();
		return true;
	}
	return false;
}



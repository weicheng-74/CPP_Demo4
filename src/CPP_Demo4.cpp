//============================================================================
// Name        : CPP_Demo4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
#include <stdio.h>
using namespace std;
class CEmployee {
public:
	int m_ID;
	char m_Name[128];
	char m_Depart[128];
	CEmployee() {
		memset(m_Name, 0, 128);
		memset(m_Depart, 0, 128);
	}
	virtual void OutputName() {
		cout << "员工姓名" << m_Name << endl;
	}
};
class COperator: public CEmployee {
public:
	char m_Password[128];
	void OutputName() {
		cout << "操作员姓名" << m_Name << endl;
	}
};

int main() {
	CEmployee *pWorker=new COperator();
	strcpy(pWorker->m_Name,"MR");
	pWorker->OutputName();
	delete pWorker;

	return 0;
}

#pragma once
//#import "C:\Program Files\Common Files\System\ado\msado15.dll"  rename("EOF","adoEOF"), rename("BOF","adoBOF")  
#import "D:\Toolkits\ado-XP\msado15.dll"  rename("EOF","adoEOF"), rename("BOF","adoBOF")         
using   namespace   ADODB;

// ͨ�����������ǵ��뻹�ǵ���
#ifdef DATACONN_EXPORTS
#define DATACONN_API __declspec(dllexport)
#else
#define DATACONN_API __declspec(dllimport)
#endif

class DATACONN_API CDataBase
{
public:
	CDataBase();
	~CDataBase();
	int Open(char* CnnStr);
	int Close();
	_RecordsetPtr GetRecordset(_bstr_t sql);
	_RecordsetPtr ExecuteSQL(_bstr_t sql);
private:
	char m_sConnection[256];
	_ConnectionPtr m_pConnection;
};
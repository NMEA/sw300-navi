#pragma once
#include <afxsock.h>
class CListenSocket :
	public CAsyncSocket
{
public:
	CListenSocket();
	virtual ~CListenSocket();

public:
	// Ŭ���̾�Ʈ�� �����ϴ� ����Ʈ
	CPtrList m_ptrClientSocketList;
	// ����-Ŭ���̾�Ʈ�� ������ ���
	void onAccept(int nErrorCode);
	// Ŭ���̾�Ʈ�� ������ ����
	void closeClientSocket(CSocket* pClient);
	// Ŭ���̾�Ʈ�� �޽����� �ٸ� Ŭ���̾�Ʈ���� ����
	void sendAllMessage(TCHAR* pszMessage);
};


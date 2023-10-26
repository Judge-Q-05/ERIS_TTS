#pragma once
#include <sapi.h>
#include<iostream>
#include <string>
using namespace std;
class Basic_Voice{
protected:
	int choice;
	ISpVoice* pVoice;
	HRESULT hr, a; 
	wstring input; 

public:
	Basic_Voice() {
		pVoice = NULL;
		input = L"";
		a = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
		if (FAILED(a))
		{
			cout << "ERROR 404 FAILED INITIALIZING COM\n";
			exit(1);
		}
		hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&pVoice);

	}
	virtual void setSpeech();
	virtual void byeSpeech() = 0;
	virtual void outSpeech();
	virtual ~Basic_Voice() {
		//cout << "Basic Voice Deleted\n";
		//pVoice = NULL;
		::CoUninitialize();
		delete pVoice;
	}
};

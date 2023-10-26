#include "Male_Voice.h"

void Male_Voice::setSpeech()
{
	if (SUCCEEDED(hr))
	{
		cout << "Enter text:\n";
		cin.ignore(1, '\n');
		getline(wcin, input);
	}
	else
	{
		cout << "NOt Initalized";
		exit(-1);
	}
	system("cls");
	cout << "At What Speed you want to Play your Voice\n1 for Normal \n2 for -2x\n3 for 2x";
	cin >> choice;

	if (choice == 2)
		hr = pVoice->Speak((L"<rate absspeed='-2'>" + input).c_str(), 0, NULL);
	else if (choice == 3)
		hr = pVoice->Speak((L"<rate absspeed='2'>" + input).c_str(), 0, NULL);
	else
		hr = pVoice->Speak(input.c_str(), 0, NULL);

}

void Male_Voice::outSpeech()
{
	pVoice->Release();
	pVoice = NULL;
	::CoUninitialize();

}

void Male_Voice::byeSpeech()
{
}
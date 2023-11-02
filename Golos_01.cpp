#include "Basic_Voice.h"
#include "Male_Voice.h"
#include "Famele_Voice.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); //Работа с русскими буквами
	Basic_Voice* b1 = NULL;
	b1 = new Male_Voice;
	int choice;
	do {
		cout << "Çäðàâñòâóéòå, âàñ ïðèâåòñòâóåò Ýðèñ\n Íàæèìèòå 1, ÷òî áû èñïîëüçîâàòü ìóæñêîé ãîëîñ\n Íàæìèòå 2, ÷òî áû èñïîëüçîâàòü æåíñêèé ãîëîñ\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			b1 = new Male_Voice; //  we create a new malevoice object.
			b1->setSpeech();
			b1->outSpeech();
			delete b1; //after outputing that voice , we delete that object
			break;
		case 2:
			b1 = new Female_Voice;// we create a new femalevoice
			b1->setSpeech();
			b1->outSpeech();
			delete b1;//after outputing that voice , we delete that object
			break;
		case 3:
			b1 = new Female_Voice;
			b1->byeSpeech();
			b1->outSpeech();
			delete b1;
			break;
		default:
			break;
		}
	} while (choice != 3);
	system("pause");
	return 0;
}

/*�������� �������, ��������� �� ����� ���������� �� ��������� �����*/
#include <iostream>
#include <iomanip>
using namespace std;

void ShowCard(char telo, char num ) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 6; j++) {
            if ((i == 0) || (j == 0) || (i == 15 - 1) || (j == 6 - 1))
                cout << setw(3) << "* "; // ����� "�����" �����

            else if (((i == 1) && (j == 6 - 2)) || ((i == 15 - 2) && (j == 1))) {
                cout << telo; // ����� �����

                if (num == '0') 
                    cout << "1" << num; // ��� ������ "10"

                else 
                    cout << num  << " ";
            }

			else
				cout << setw(3) << "| ";
		}
		cout << endl;
	}
}

    int main()
    {
        setlocale(LC_ALL, "Rus");

        int suit_of_cards;
        int card_index;
        char nums_of_card[] = { ' ', 'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
        int exit;

        do {
        suit: // 1
            cout << "������� ����� �����: " << endl
                << "����� = 3" << endl
                << "����� = 4" << endl
                << "����� = 5" << endl
                << "���� = 6" << endl;
            cin >> suit_of_cards;

            if (suit_of_cards < 1 || suit_of_cards > 4) {
                cout << "������ ������" << endl;
                goto suit; // 1
            }

        index: // 2
            cout << "�������� ������ �����: " << endl
                << " 1 - ��� \t  2 - ������ \t  3 - ������" << endl
                << " 4 - �������� \t  5 - ������� \t  6 - ��������" << endl
                << " 7 - ������� \t  8 - ���������   9 - �������" << endl
                << "10 - ������� \t 11 - ����� \t 12 - ����" << endl
                << "13 - ������" << endl;
            cin >> card_index;

            if (card_index < 1 || card_index > 13) {
                cout << "������ ������" << endl;
                goto index; // 2
            }

            ShowCard(suit_of_cards, nums_of_card[card_index]);

            cout << endl << "���� ������ ���������� ������� 1, ����� 0: ";
            cin >> exit; cout << endl;

        } while (exit != 0);

	return 0;
}
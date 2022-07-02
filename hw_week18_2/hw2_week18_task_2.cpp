/*����������� ��������� ������������ (�����, 
������� (������ �������), ����� ���������, �������� 
���������, ������� �����, ����, ��� ������� �������). 
�������� ������� ��� ������� ��������, ����������� 
��������, ������ ��������.*/
#include <iostream>
using namespace std;

struct Car
{
    int car_length;
    int car_ground_clearance;
    double car_engine_volume;
    int car_wheel_diameter;
    char car_color[20];
    short car_gearbox_type;


    Car(int length, int ground_clearance, double engine_volume, int wheel_diameter, char color, short gearbox_type)
        : car_length{ length }, car_ground_clearance{ ground_clearance }, car_engine_volume{engine_volume}, 
        car_wheel_diameter{ wheel_diameter }, car_color{ color }, car_gearbox_type{ gearbox_type } {}


    Car() : Car{ 0, 0, 0, 0, ' ', 0} {}

    ~Car() {}

    void read()
    {
        cout << "������� ������ ����������(� �����������): ";
        cin >> car_length;
        cout << "������� �������� ������� ����������(� �����������): ";
        cin >> car_ground_clearance;
        cout << "������� ����� ��������� ����������(� ������): ";
        cin >> car_engine_volume;
        cout << "������� ������� ����� ����������(� �����������): ";
        cin >> car_wheel_diameter;
        cout << "������� ���� ����������: ";
        cin >> car_color;
        do {
            cout << "������� ��� ������� ������� ����������(0 - ����, 1 - ����): ";
            cin >> car_gearbox_type;
        } while (car_gearbox_type != 0 && car_gearbox_type != 1);
        cout << endl;

        return;
    }

    void print()
    {
        cout << "������ ����������: " << car_length << " (��)\n"
            << "�������� ������� ����������: " << car_ground_clearance << " (��)\n"
            << "����� ��������� ����������: " << car_engine_volume << " (�)\n"
            << "������� ����� ����������: " << car_wheel_diameter << " (��)\n"
            << "���� ����������: " << car_color << endl
            << "��� ������� ������� ����������: " << (car_gearbox_type == 0 ? "����" : "����") << endl;
        cout << endl;
        return;
    }
};

int menu()
{
    int answer;
    cout << "\t���� ����������\n"
        << "1 - ������� ��������� ����������\n"
        << "2 - �������� ��������� ����������\n"
        << "3 - ����� �� ���������� ����������\n"
        << "0 - ����� �� ���������\n"; 
    cin >> answer;
    cout << endl;
   
    return answer;
}

int settings_car_menu()
{
    int answer;
    cout << "\t��������� ����������\n"
        << "1 - ������ ����������\n"
        << "2 - �������� ������� ����������\n"
        << "3 - ����� ��������� ����������\n"
        << "4 - ������� ����� ����������\n"
        << "5 - ���� ����������\n"
        << "6 - ��� ������� ������� ����������\n"
        << "7 - ����� �� ����\n";
    cin >> answer;
    cout << endl;

    return answer;
}


int main() {
    setlocale(LC_ALL, "");

    Car first_car;
    int answer;

    do {
        answer = menu();

        switch (answer) {
        case 0:
            break;
        case 1:
            first_car.read();
            break;
        case 2:
            first_car.print();
            break;
        case 3:
            do {
                answer = settings_car_menu();

                switch (answer) {
                
                case 1:
                    cout << "������ ����������: " << first_car.car_length << " (��)\n";
                    cout << endl;
                    break;
                case 2:
                    cout << "�������� ������� ����������: " << first_car.car_ground_clearance << " (��)\n";
                    cout << endl;
                    break;
                case 3:
                    cout << "����� ��������� ����������: " << first_car.car_engine_volume << " (�)\n";
                    cout << endl;
                    break;
                case 4:
                    cout << "������� ����� ����������: " << first_car.car_wheel_diameter << " (��)\n";
                    cout << endl;
                    break;
                case 5:
                    cout << "���� ����������: " << first_car.car_color << endl;
                    cout << endl;
                    break;
                case 6:
                    cout << "��� ������� ������� ����������: " << (first_car.car_gearbox_type == 0 ? "����" : "����") << endl;
                    cout << endl;
                    break;
                case 7:
                    break;
                default:
                    break;
                }
            } while (answer != 7);
            break;
        default:
            break;
        }
    } while (answer != 0);

    return 0;
}
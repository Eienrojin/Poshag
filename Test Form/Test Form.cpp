#include <iostream>
#include <string>
#include "windows.h"
using namespace std;

//variables
char answer;
int hp = 32;
int fatigue = 100;

//functions
void mainMenu();
void acttest();
void actattack();


int main()
{
    setlocale(LC_ALL, "rus");
    
    mainMenu();

    acttest();
    actattack();
}

void mainMenu()
{
    for (int i = 0; i < 49; i++)
    {
        cout << "/";
    }
    cout << endl << "/\t\t" << "\t\t\t\t/";
    cout << endl << "/\t" << "Добро пожаловать в тестовый говнокод." << "\t/";
    cout << endl << "/\t\t" << "\t\t\t\t/" << endl;
    for (int i = 0; i < 49; i++)
    {
        cout << "/";
    }


    for (;;)
    {
        cout << endl << "\n1 Начать пошаг" <<
            "\n2 Правила"
            "\n3 Выход" << endl;

        cin >> answer;
        
        if (answer == '1')
        {
            break;
        }
        if (answer == '2')
        {
            cout << endl << "Правила таковы:" <<
                "\n1. Все ответы вводяться цифрами"
                "\n2. Все ответы только ОДНОЙ цифрой. Если ошиблись - можно стереть и перезаписать"
                "\n3. Не пишите буквами"
                "\n4. Иногда можно";
        }
        if (answer == '3')
        {
            exit('3');
        }

    }

}

void acttest()
{
    cout << "Ваш корабль сломался во время шторма, вас выбросило на берег, где вы нашли пещеру. \nОставшись на ночёвку, вы развели костёр и мелкий проход, через который вы забрались в пещеру - завалило. \nОстается идти только вперед через глубины.";
    Sleep(5000);
    cout << endl << "\nВы смотрите по сторонам. Сзади вас заваленный проход. По бокам только стены и костёр. Спереди - неизвестность.";
        cout << endl << "\nЧто вы хотите сделать? \n1. Посмотреть на костёр \n2. Идти вперёд." << endl;
    initChoise:
        cin >> answer;

            switch (answer)
            {
            default:
                cout << endl << "Похоже у вас своя дорога. Но нужно выбрать правильный путь" << endl;
                goto initChoise;
            case '1':
                cout << "Вы смотрите на костёр. Он почти потух. Вы долго смотрели на костёр, да так, что ваши глаза распухли" << endl;
            case '2':
                cout << "Вы идёте дальше по пещере. Похоже, это старое построение. Вокруг вас каменные стены." << endl;
                break;
            }
}

void actattack()
{
    int ratHP = 20;
    int ratFatigue = 10;

    cout << "\nПройдя вперёд вы видите крысу. Люди в этих краях называют их Моргенами. \nВас заметили, придётся драться с Моргеном" << endl;

            for (;;)
            {
                cout << endl << "\nЧто вы хотите сделать? \n1. Сделать сильный удар\n2. Ударить слабо." << endl;
                cin >> answer;

                cout << "Ваше здоровье = " << hp << endl;
                cout << "Здоровье врага = " << ratHP << endl;

                switch (answer)
                {
                default:
                    cout << endl << "Да, запрещенные приёмы всё еще под запретом. Выбирайте из того, что у вас есть." << endl;
                case '1':
                    cout << "Вы сделали ОДИН удар и крыса упала замертво. Неудивительно" << endl;
                    ratHP -= ratHP;
                    break;
                case '2':
                    cout << "Вы, кажется, погладили крысу. Ей понравилось" << endl;
                    hp = hp - (rand() % 3);
                    ratHP = ratHP - (rand() % 5);
                    break;
                }
                    if (hp <= 0)
                    {
                        cout << "\nДа... Вас победил Морген. И зачем вас взяли на задание?" << endl;
                        break;
                    }
                    if (ratHP <= 0)
                    {
                        cout << "\nЧтож, крыса валяется как таракан. Кажется, она мертва." << endl;
                        break;
                    }
            }
}
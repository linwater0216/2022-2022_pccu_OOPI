#include "GAME.h"
using namespace std;
int main(void)
{
    Game A;
    int choice;
    int count = 5;
    srand(time(NULL));
    cout << "�w��Ө줤���Ƥj�ǡI\n";
    cout << "�@�Ӿ��v�y�[���j�ǡA�P�򦳬�����A�����󪺮��䦳�@���a�A�̭����Фl�M�H�C\n���@�Ǫ���" << endl;
    cout << "�٦���L��h������.\n\n";
    cout << "���ѭn���ƻ�n�O?" << endl;
    cout << "��L�B���}�C��" << endl;
    cout << "1�B��ı" << endl;
    cout << "2�B�B��" << endl;
    cout << "3�B�]��" << endl;
    cout << "4�B���C��" << endl;
    cout << "5�B�ۧڧ�o" << endl;
    cout << "6�B�ҷ~�ǲ�" << endl;
    cout << "7�B�\Ū��L���y" << endl;
    cout << "8�B���ά���" << endl;
    cout << "9�B�ѥ[�p��" << endl;
    cout << "10�B���" << endl;
    for (; count > 0; count--)
    {
        //choice = rand() % 2 + 1;
        choice = count+5;
        switch (choice)
        {
        case 1:
            A.Sleep();
            break;
        case 2:
            A.Sport();
            break;
        case 3:
            A.Nightsing();
            break;
        case 4:
            A.Playgame();
            break;
        case 5:
            A.Selfexpression();
            break;
        case 6:
            A.Academicstudy();
            break;
        case 7:
            A.Readbook();
            break;
        case 8:
            A.Socialactivity();
            break;
        case 9:
            A.Friendship();
            break;
        case 10:
            A.Practice();
            break;
        default:
            count = 0;
            break;
        }
    }
}
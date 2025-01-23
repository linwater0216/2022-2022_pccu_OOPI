#include "GAME.h"
using namespace std;
int main(void)
{
    Game A;
    int choice;
    int count = 5;
    srand(time(NULL));
    cout << "歡迎來到中國文化大學！\n";
    cout << "一個歷史悠久的大學，周圍有美食街，美食街的旁邊有一片地，裡面有房子和人。\n有一些社團" << endl;
    cout << "還有其他更多的活動.\n\n";
    cout << "今天要做甚麼好呢?" << endl;
    cout << "其他、離開遊戲" << endl;
    cout << "1、睡覺" << endl;
    cout << "2、運動" << endl;
    cout << "3、夜唱" << endl;
    cout << "4、打遊戲" << endl;
    cout << "5、自我抒發" << endl;
    cout << "6、課業學習" << endl;
    cout << "7、閱讀其他書籍" << endl;
    cout << "8、社團活動" << endl;
    cout << "9、參加聯誼" << endl;
    cout << "10、實習" << endl;
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
#ifndef GAME_H
#define GAME_H
#include<iostream>
#include <stdlib.h> /* �üƬ������ */
#include <time.h>   /* �ɶ�������� */
using namespace std;

class Game
{
private:
    int Healthy;//���d
    int Mood;    //�߱�
    int Wisdom;    //���z
public:
    Game();
    void setHealthy();//���d=5
    void setMood();//�߱�=5
    void setWisdom();//���z=5
    void Sleep();//��ı
    void Sport();//�B��
    void Nightsing();//�]��
    void Playgame();//���C��
    void Selfexpression();//�ۧڧ�o
    void Academicstudy();//�ҷ~�ǲ�
    void Readbook();//�\Ū��L���y
    void Socialactivity();//���ά���
    void Friendship();//�ѥ[�p��
    void Practice();//���
};
#endif
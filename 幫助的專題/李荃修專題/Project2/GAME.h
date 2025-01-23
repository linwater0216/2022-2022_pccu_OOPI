#ifndef GAME_H
#define GAME_H
#include<iostream>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
using namespace std;

class Game
{
private:
    int Healthy;//健康
    int Mood;    //心情
    int Wisdom;    //智慧
public:
    Game();
    void setHealthy();//健康=5
    void setMood();//心情=5
    void setWisdom();//智慧=5
    void Sleep();//睡覺
    void Sport();//運動
    void Nightsing();//夜唱
    void Playgame();//打遊戲
    void Selfexpression();//自我抒發
    void Academicstudy();//課業學習
    void Readbook();//閱讀其他書籍
    void Socialactivity();//社團活動
    void Friendship();//參加聯誼
    void Practice();//實習
};
#endif
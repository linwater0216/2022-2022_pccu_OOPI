#include "GAME.h"
using namespace std;

Game::Game()
{
	setHealthy();
	setMood();
	setWisdom();
}
void Game::setHealthy()
{
	Healthy = 5;
}
void Game::setMood()
{
	Mood = 5;
}
void Game::setWisdom()
{
	Wisdom = 5;
}
void Game::Sleep()
{
	cout << "隨機事件：是否睡覺？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{

		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇睡覺" << endl << "恭喜！健康+2 智商-1" << endl << endl;
		Healthy = Healthy + 2;
		Wisdom = Wisdom - 1;
	}
	else
	{
		cout << "你選擇不睡覺" << endl << "恭喜！智商+1" << endl << endl;
		Wisdom = Wisdom + 1;
	}

}
void Game::Sport()
{
	cout << "隨機事件：是否運動？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇運動" << endl << "恭喜！健康+2 健康+1" << endl << endl;
		Healthy = Healthy + 2;
		Mood = Mood + 1;
	}
	else
	{
		cout << "你選擇不運動" << endl << "恭喜！健康-1" << endl << endl;
		Mood = Mood - 1;
	}
}
void Game::Nightsing()
{
	cout << "隨機事件：是否夜唱？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇夜唱" << endl << "恭喜！心情+2 健康-2" << endl << endl;
		Mood = Mood + 2;
		Healthy = Healthy - 2;

	}
	else
	{
		cout << "你選擇不夜唱" << endl << "恭喜！心情-1 健康+1" << endl << endl;
		Mood = Mood - 1;
		Healthy = Healthy + 1;
	}
}
void Game::Playgame()
{
	cout << "隨機事件：是否打遊戲？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇打遊戲" << endl << "恭喜！心情+3 健康-1	智商-2" << endl << endl;
		Mood = Mood + 3;
		Healthy = Healthy - 1;
		Wisdom = Wisdom - 2;
	}
	else
	{
		cout << "你選擇不打遊戲" << endl << "恭喜！心情-1	智商+1" << endl << endl;
		Mood = Mood - 1;
		Wisdom = Wisdom + 1;
	}
}
void Game::Selfexpression()
{
	cout << "隨機事件：是否自我抒發？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇自我抒發" << endl << "恭喜！心情+2	健康+1" << endl << endl;
		Mood = Mood + 2;
		Healthy = Healthy + 1;
	}
	else
	{
		cout << "你選擇不自我抒發" << endl << "恭喜！心情-1 智商+1" << endl << endl;
		Mood = Mood - 1;
		Wisdom = Wisdom + 1;
	}
}
void Game::Academicstudy()
{
	cout << "隨機事件：是否課業學習？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇課業學習" << endl << "恭喜！智商+3	心情-2" << endl << endl;
		Wisdom = Wisdom + 3;
		Mood = Mood - 2;
	}
	else
	{
		cout << "你選擇不課業學習" << endl << "恭喜！智商-1	心情+1" << endl << endl;
		Wisdom = Wisdom - 1;
		Mood = Mood + 1;
	}
}
void Game::Readbook()
{
	cout << "隨機事件：是否閱讀其他書籍？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇閱讀其他書籍" << endl << "恭喜！智商+1" << endl << endl;
		Wisdom = Wisdom + 1;
	}
	else
	{
		cout << "你選擇不閱讀其他書籍" << endl << "恭喜！健康+2" << endl << endl;
		Healthy = Healthy + 2;
	}
}
void Game::Socialactivity()
{
	cout << "隨機事件：是否社團活動？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇社團活動" << endl << "恭喜！心情+1 健康+1" << endl << endl;
		Mood = Mood + 1;
		Healthy = Healthy + 1;
	}
	else
	{
		cout << "你選擇打工" << endl << "恭喜！健康-1" << endl << endl;
		Healthy = Healthy - 1;
	}
}
void Game::Friendship()
{
	cout << "隨機事件：是否參加聯誼？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇參加聯誼" << endl << "恭喜！心情+2	智商-1" << endl << endl;
		Mood = Mood + 1;
		Wisdom = Wisdom - 1;
	}
	else
	{
		cout << "你選擇不參加聯誼" << endl << "恭喜！智商+1" << endl << endl;
		Wisdom = Wisdom + 1;
	}
}
void Game::Practice()
{
	cout << "隨機事件：是否實習？" << endl << "1.要		2.不要" << endl << endl;
	int x = 0;//放回答YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "你選擇實習" << endl << "恭喜！智商+2	健康-2" << endl << endl;
		Wisdom = Wisdom + 2;
		Healthy = Healthy - 2;
	}
	else
	{
		cout << "你選擇不實習" << endl << "恭喜！心情+1" << endl << endl;
		Healthy = Healthy + 1;
	}
}
/*
睡眠Y(健+2 智-1) N(智+1)、
運動Y(健+2 心+1) N(健-1)、
夜唱Y(心+2 健-2) N(心-1 健+1)、
打遊戲Y(心+3 健-1智-2) N(智+1 心-1)、
自我抒發#自慰Y(心+2 健+1) N(心-1 智+1)、
課業學習Y(智+3 心-2) N(智-1 心+1)、
閱讀其他書籍Y(智+1) N(健+2)、
社團活動Y(健+1 心+1) N打工(健-1 )、
參加聯誼Y(心+2 智-1) N(智+1)、
實習Y(智+2 健-2) N(心+1)
*/

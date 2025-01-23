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
	cout << "�H���ƥ�G�O�_��ı�H" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{

		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܺ�ı" << endl << "���ߡI���d+2 ����-1" << endl << endl;
		Healthy = Healthy + 2;
		Wisdom = Wisdom - 1;
	}
	else
	{
		cout << "�A��ܤ���ı" << endl << "���ߡI����+1" << endl << endl;
		Wisdom = Wisdom + 1;
	}

}
void Game::Sport()
{
	cout << "�H���ƥ�G�O�_�B�ʡH" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܹB��" << endl << "���ߡI���d+2 ���d+1" << endl << endl;
		Healthy = Healthy + 2;
		Mood = Mood + 1;
	}
	else
	{
		cout << "�A��ܤ��B��" << endl << "���ߡI���d-1" << endl << endl;
		Mood = Mood - 1;
	}
}
void Game::Nightsing()
{
	cout << "�H���ƥ�G�O�_�]�ۡH" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܩ]��" << endl << "���ߡI�߱�+2 ���d-2" << endl << endl;
		Mood = Mood + 2;
		Healthy = Healthy - 2;

	}
	else
	{
		cout << "�A��ܤ��]��" << endl << "���ߡI�߱�-1 ���d+1" << endl << endl;
		Mood = Mood - 1;
		Healthy = Healthy + 1;
	}
}
void Game::Playgame()
{
	cout << "�H���ƥ�G�O�_���C���H" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܥ��C��" << endl << "���ߡI�߱�+3 ���d-1	����-2" << endl << endl;
		Mood = Mood + 3;
		Healthy = Healthy - 1;
		Wisdom = Wisdom - 2;
	}
	else
	{
		cout << "�A��ܤ����C��" << endl << "���ߡI�߱�-1	����+1" << endl << endl;
		Mood = Mood - 1;
		Wisdom = Wisdom + 1;
	}
}
void Game::Selfexpression()
{
	cout << "�H���ƥ�G�O�_�ۧڧ�o�H" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܦۧڧ�o" << endl << "���ߡI�߱�+2	���d+1" << endl << endl;
		Mood = Mood + 2;
		Healthy = Healthy + 1;
	}
	else
	{
		cout << "�A��ܤ��ۧڧ�o" << endl << "���ߡI�߱�-1 ����+1" << endl << endl;
		Mood = Mood - 1;
		Wisdom = Wisdom + 1;
	}
}
void Game::Academicstudy()
{
	cout << "�H���ƥ�G�O�_�ҷ~�ǲߡH" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܽҷ~�ǲ�" << endl << "���ߡI����+3	�߱�-2" << endl << endl;
		Wisdom = Wisdom + 3;
		Mood = Mood - 2;
	}
	else
	{
		cout << "�A��ܤ��ҷ~�ǲ�" << endl << "���ߡI����-1	�߱�+1" << endl << endl;
		Wisdom = Wisdom - 1;
		Mood = Mood + 1;
	}
}
void Game::Readbook()
{
	cout << "�H���ƥ�G�O�_�\Ū��L���y�H" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܾ\Ū��L���y" << endl << "���ߡI����+1" << endl << endl;
		Wisdom = Wisdom + 1;
	}
	else
	{
		cout << "�A��ܤ��\Ū��L���y" << endl << "���ߡI���d+2" << endl << endl;
		Healthy = Healthy + 2;
	}
}
void Game::Socialactivity()
{
	cout << "�H���ƥ�G�O�_���ά��ʡH" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܪ��ά���" << endl << "���ߡI�߱�+1 ���d+1" << endl << endl;
		Mood = Mood + 1;
		Healthy = Healthy + 1;
	}
	else
	{
		cout << "�A��ܥ��u" << endl << "���ߡI���d-1" << endl << endl;
		Healthy = Healthy - 1;
	}
}
void Game::Friendship()
{
	cout << "�H���ƥ�G�O�_�ѥ[�p�ˡH" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܰѥ[�p��" << endl << "���ߡI�߱�+2	����-1" << endl << endl;
		Mood = Mood + 1;
		Wisdom = Wisdom - 1;
	}
	else
	{
		cout << "�A��ܤ��ѥ[�p��" << endl << "���ߡI����+1" << endl << endl;
		Wisdom = Wisdom + 1;
	}
}
void Game::Practice()
{
	cout << "�H���ƥ�G�O�_��ߡH" << endl << "1.�n		2.���n" << endl << endl;
	int x = 0;//��^��YES OR NO
	for (; x != 1 && x != 2;)
	{
		cin >> x;
	}
	if (x == 1)
	{
		cout << "�A��ܹ��" << endl << "���ߡI����+2	���d-2" << endl << endl;
		Wisdom = Wisdom + 2;
		Healthy = Healthy - 2;
	}
	else
	{
		cout << "�A��ܤ����" << endl << "���ߡI�߱�+1" << endl << endl;
		Healthy = Healthy + 1;
	}
}
/*
�ίvY(��+2 ��-1) N(��+1)�B
�B��Y(��+2 ��+1) N(��-1)�B
�]��Y(��+2 ��-2) N(��-1 ��+1)�B
���C��Y(��+3 ��-1��-2) N(��+1 ��-1)�B
�ۧڧ�o#�ۼ�Y(��+2 ��+1) N(��-1 ��+1)�B
�ҷ~�ǲ�Y(��+3 ��-2) N(��-1 ��+1)�B
�\Ū��L���yY(��+1) N(��+2)�B
���ά���Y(��+1 ��+1) N���u(��-1 )�B
�ѥ[�p��Y(��+2 ��-1) N(��+1)�B
���Y(��+2 ��-2) N(��+1)
*/

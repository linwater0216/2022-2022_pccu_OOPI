#include <iostream>//C++��J��X�y�w
#include <cstdlib>//�ϥ�srand��ƭn�Ψ�o�Ӯw
#include <ctime>//�ϥ�time��ƭn�Ψ�o�Ӯw
#include <Windows.h>
#include <conio.h>
using namespace std;
void PrintDiePlayer(int m[], int s[])//���`�W�� 
{
	cout << "�}�`�W��G" << endl;
	for (int i = 1; i <= 15; i++)
	{
		if (m[i] == 0)
		{
			cout << i << "��,����:" << s[i] << " " << endl;
		}
	}
}
void OutNumberAndIdentity(int n, int s[])//��X�C���̽s���Ψ���
{
	cout << "�A�O" << n << "��" << endl;
	switch (s[n])
	{
	case 1:
		cout << "�A�O�T�H" << endl << endl;
		break;
	case 2:
		cout << "�A�O�w���a" << endl << endl;
		break;
	case 3:
		cout << "�A�O����" << endl << endl;
		break;
	case 4:
		cout << "�A�O�k��" << endl << endl;
		break;
	}
}
int random(int s[], int n)//�H������
{
	n = rand() % 15 + 1;
	int l = 0, w = 0, j = 0, p = 0;
	for (int i = 1; i <= 15; i++)
	{
		for (; s[i] == 0;) {
			int a = rand() % 4 + 1;//�üƨM�w����
			if (a == 1 && l < 2)//���� 
			{
				l++;
				s[i] = 1;
			}
			else if (a == 2 && w < 1)//�w���a 
			{
				w++;
				s[i] = 2;
			}
			else if (a == 4 && p < 1)//�k�� 
			{
				p++;
				s[i] = 4;
			}
			else if (a == 3 && j < 11)//���� 
			{
				j++;
				s[i] = 3;
			}
		}
	}
	//	s[n]=4;//���եγ]�w������ 
		//���t��������
	return n;
}
void playwolf(int m[], int s[], int n, int c)//���a��T ������1
{
	cout << "�A��ܱ���(�ȭ����H)" << endl;
	int a = 0;
	for (; m[a] != 1;)//m[]���s��
	{
		cin >> a;
	}
	m[a] = 0;
	cout << endl;
	cout << "�T�H���F" << a << "��" << endl << "�L�������O�G";
	switch (s[a]) {
	case 1:
		cout << "�T�H" << endl;
		break;
	case 2:
		cout << "�w���a" << endl;
		break;
	case 3:
		cout << "����" << endl;
		break;
	case 4:
		cout << "�k��" << endl;
		break;
	}
	c--;//�s���H�ƴ�1
}
void playProphet(int m[], int s[])//���a��w���a ������2 
{
	cout << "�A��ܹw���֪�����(�ȭ����H�A����w���ۤv)" << endl;
	int a = 99;
	for (; m[a] != 1 && s[a] != 2;)//m[]���s��
	{
		cin >> a;
	}
	if (s[a] == 1)
	{
		cout << "�Ъ`�N�I" << a << "���O����" << endl;
		Sleep(1000);
	}
	else
	{
		cout << a << "���O����" << endl;
	}
}
int playWitchSY(int m[], int s[], int sy, int c, int a)
{
	if (a == 1)//�ϥάr��
	{
		if (sy > 0)//�r�ļƶq 
		{
			sy--;//�r�Ĵ�� 
			cout << "�A��ܤF�ϥάr��" << endl;
			for (int i = 1; i <= 15; i++) {
				if (m[i] == 1) {
					cout << i << " ";
				}
			}
			cout << endl;
			int b;//�r�� 
			do
			{
				cin >> b;
			} while (m[b] == 0);
			//			cin>>b;
			cout << "�k�Ŭr�F" << b << "��" << endl << "�L�������O�G";
			switch (s[b])
			{
			case 1:
				cout << "����" << endl;

				break;
			case 2:
				cout << "�w���a" << endl;
				break;
			case 3:
				cout << "����" << endl;
				break;
			case 4:
				cout << "�k��" << endl;
				break;
			}
			m[b] = 0;//�]�w"���`"���A 
			c--; //�`�H�ƴ�@ 
		}
		else//�ιL�r�ī� 
		{
			cout << "�r�Ĥ���" << endl;
		}
	}
	return sy;
}
int playWitchJY(int m[], int s[], int jy, int c, int a)
{
	if (a == 2)//�ϥθ��� 
	{
		if (jy > 0)
		{
			jy--;
			cout << "�A��ܤF�_���Ĥ�" << endl;
			PrintDiePlayer(m, s);
			int b;
			do
			{
				cin >> b;
			} while (m[b] == 1);

			cout << "�k�Ŵ_���F" << b << "��" << endl << "�L�������O�G";
			switch (s[b])
			{
			case 1:
				cout << "����";
				break;
			case 2:
				cout << "�w���a";
				break;
			case 3:
				cout << "����";
				break;
			case 4:
				cout << "�k��";
				break;
			}
			cout << endl << endl;
			m[b] = 1;
			c++;
		}
		else
		{
			cout << "�_���Ĥ�����" << endl;
		}
	}

	return jy;
}
void playWitchNULL(int a)//���a��w���aNULL
{
	if (a == 3)//���ϥ�
	{
		cout << "�A��ܤ��ϥ��Ī�" << endl;

	}
}
void PrintSurvivePlayer(int m[])//��X�s�����a&�q�� 
{
	cout << "�ثe�s�����a�G";
	for (int j = 1; j <= 15; j++) {
		if (m[j] == 1) {//m[]���s��
			cout << j << " ";
		}
	}
	cout << endl << endl;
}
void PrintSurvivePlayerOfWolf(int m[], int s[])//��X�s�����a���F�T�H 
{
	cout << "�A�O�T�H" << endl;
	cout << "�ثe�s�����a�G";
	for (int j = 1; j <= 15; j++) {
		if (m[j] == 1 && s[j] != 1) {//m[]���s��
			cout << j << " ";
		}
	}
	cout << endl << endl;
}
void PrintSurvivePlayerOfProphet(int m[], int s[])//��X�s�����a���F�w���a 
{
	cout << "�A�O�w���a" << endl;
	cout << "�ثe�s�����a�G";
	for (int j = 1; j <= 15; j++) {
		if (m[j] == 1 && s[j] != 2) {//m[]���s��
			cout << j << " ";
		}
	}
	cout << endl << endl;
}
void PrintSurvivePlayerOfWitch(int m[])
{
	cout << "�A�����O�G�k��" << endl;
	cout << "�s�����p�G" << endl;
	for (int j = 1; j <= 15; j++) {
		if (m[j] == 1) {//s[]�����աBm[]�O�_�s��1�s��0���` 
			cout << j << " ";//�s���~�|��X 
		}
	}
	cout << endl;
}

//int identity,int Numbering
void COMwolf(int m[], int s[], int c)//�q���T�H  ������1
{
	int a;
	do//a�O�ݽֳQ�� 
	{
		a = rand() % 15 + 1;//����ݽ֤��� 
	}//m[a]==0�O�קK�����`��s[a]==1�O�קK������� 
	while (m[a] == 0 || s[a] == 1);//s[]�����աBm[]�O�_�s��1�s��0���`
	cout << "�T�H���F" << a << "��" << endl << "�L�������O�G";
	switch (s[a]) {//a�O��馺�`���X
	case 2:
		cout << "�w���a" << endl << endl;
		break;
	case 3:
		cout << "����" << endl << endl;
		break;
	case 4:
		cout << "�k��" << endl << endl;
		break;
	}
	m[a] = 0;
	c--;
}
void COMProphet(int m[], int s[], int yy[], int flag, int i)//�q���w���a  ������2
{
	if (flag == 0 || m[flag] == 0)//�q���w���a flag�����D�b�F�� 
	{
		int a;
		do
		{
			a = rand() % 15 + 1;//a��D���H�B���۪�
		} while (a == i || m[a] == 0);//s[]�����աBm[]�O�_�s��1�s��0���`
//		cout<<"test";
		if (s[a] == 1) {//���T�H 
			yy[a] = 1;//yy[]�إ߹q���{�������� �T 
		}
		if (s[a] == 3) {//��쥭�� 
			//�����벼�Χa !  
			yy[a] = 3;//yy[]�إ߹q���{�������� ���� 
		}
	}
}
int COMWitchSY(int m[], int s[], int sy, int c, int i, int a)//�q���k�Ŭr 
{
	if (a == 1)//�r�� 
	{
		if (sy > 0)//sy�r�ļƶq 
		{
			sy--;//sy�r�ļƶq 
			int b;
			do
			{
				b = rand() % 15 + 1;//b���Q�r�����X
			} while (b == i || m[b] == 0);//�ư��ۤv�Φ��`���H 
			m[b] = 0;//�]�w"���`"���A
			cout << "�k�Ŭr�F" << b << "��" << endl << "�L�������O�G";
			switch (s[b])
			{
			case 1:
				cout << "����";
				break;
			case 2:
				cout << "�w���a";
				break;
			case 3:
				cout << "����";
				break;
			}
			cout << endl << endl;
			c--;//�`�H�� 
		}
	}
	return sy;
}
int COMWitchJY(int m[], int s[], int jy, int c, int i, int a, int day)//�q���k�Ÿ� 
{
	if (a == 2 && day > 1)//���� day�j��1��ܽT�w�����`�� 
	{
		if (jy > 0)
		{
			jy--;//���� 
			int b;
			do
			{
				b = rand() % 15 + 1;//��Ͻ� 
			} while (b == i || m[b] == s[b] == 1);

			cout << "�k�Ŵ_���F" << b << "��" << endl << "�L�������O�G";
			switch (s[b])
			{
			case 1:
				cout << "����";
				break;
			case 2:
				cout << "�w���a";
				break;
			case 3:
				cout << "����";
				break;
			case 4:
				cout << "�k��";
				break;
			}
			cout << endl << endl;
			m[b] = 1;
			c++;
		}
	}
	return jy;
}
void COMWitchNULL(int a)//�q���k�ŵL 
{
	if (a == 3)//�L 
	{
		cout << "�k�ŵL�ϥ���" << endl << endl;
	}
}
void brc()
{
	system("cls");//�M���e�� 
	int jy = 2; //���ļƶq 
	int sy = 2; //�r�ļƶq 
	srand((int)time(0));
	int n=0;
	cout << "���b���t����" << endl;
	//Sleep(1500);
	int m[20];
	for (int i = 1; i <= 15; i++)
		m[i] = 1;
	int s[20] = { 0 };
	int yy[20] = { 0 };
	n = random(s, n);//���t�����դνs��
//	for(int j=1;j<15;j++){
//		if(s[j]==4){
//			cout<<"test "<<j<<" ";
//			s[j]=3;
//		}
//	}
//	s[n]=1;//���կT�H 
//	s[n]=2;//���չw���a 
//	s[n]=4;//���դk�� 

	OutNumberAndIdentity(n, s);//��X�s���Ψ���

	cout << "�C���N�b5���}�l" << endl;
	//	Sleep(5000);
	int c = 15;//�`�s���H�� 
	int f = 0, flag = 0;
	int day = 1;
	int wolf = 2;
	int tp[20] = { 0 };
	do
	{
		system("cls");//�M���e���Ҧ��F��
		OutNumberAndIdentity(n, s);//��X�s���Ψ��� 
		cout << "��" << day << "�߶}�l" << endl;
		//int x;
		for (int i = 1; i <= 15; i++) //i�O�C������ɨC�H���즸��
		{
			if (i == n && m[n] == 1)//���a���� �w���a �k�� 
			{
				if (s[n] == 1)//s[n]==1�ۤv������ 
				{
					PrintSurvivePlayerOfWolf(m, s);//��X�T�H�ݪ��ͦs�H��
					playwolf(m, s, n, c);//�T�H���H
				}

				if (s[n] == 2)//s[n]==2�ۤv���w���a 
				{
					PrintSurvivePlayerOfProphet(m, s);//��X�w���a�ݪ��ͦs�H��
					playProphet(m, s);//���a��w���a 
				}

				if (s[n] == 4)//�ۤv���k�� 
				{
					PrintSurvivePlayerOfWitch(m);
					//playWitch(m,s,jy,sy,c);
					cout << "�A���1.*�ϥάr��* 2.*�ϥθ���*�٬O 3.*�Ҥ��ϥ�*" << endl;
					int a;
					cin >> a;
					sy = playWitchSY(m, s, sy, c, a);
					jy = playWitchJY(m, s, jy, c, a);
					playWitchNULL(a);
				}

			}

			//�q���T�H�w���a�k�� 
			if (s[i] == 1 && m[i] == 1 && i != n)//s[]�����աBm[]�O�_�s��1�s��0���` i!=n�O�קK�C�����a�A�װ���@�� 
			{
				COMwolf(m, s, c);//s[]������1�T�H �q�� 
			}
			if (s[i] == 2 && m[i] == 1 && i != n)//s[]������2�w���a �q�� 
			{
				COMProphet(m, s, yy, flag, i);
			}
			if (s[i] == 4 && m[i] == 1 && i != n)//s[]������4�k�� �q�� 
			{

				int a;//��άr���ٸ���
				a = rand() % 3 + 1;
				sy = COMWitchSY(m, s, sy, c, i, a);
				jy = COMWitchJY(m, s, jy, c, i, a, day);
				COMWitchNULL(a);
			}
		}

		Sleep(1000);
		int p[20] = { 0 };//�벼 
		cout << "��" << day << "�ߵ���" << endl << endl;
		if (m[n] == 0)//�T�{�O�_�ͦs 
		{
			cout << "�A�w�g>>��<<�F";
			break;
		}
		PrintSurvivePlayer(m);
		cout << "�Ч벼...." << endl;
		for (int i = 1; i <= 15; i++)
		{

			if (i == n && m[n] == 1)//���a�벼 
			{
				cout << endl << "�A��ܧ�X��" << endl;
				int a;//�벼���X  
				do
				{
					cin >> a;
					if (a == 99)//���եάݳѤU���H������ 
					{
						for (int i = 1; i <= 15; i++)
						{
							if (m[i] == 1)
							{
								cout << i << "���������F " << s[i] << endl;
							}
						}
					}
				} while (m[a] == 0 || a == n || a == 99);//m[]�s�����A 
				if (s[i] == 3 && day > 4)//s[]=3�O���������ĥ|�ѫ�벼�Ⲽ,������ p[]����
				{
					p[a] += 2;
				}
				else
				{
					p[a]++;
				}
				cout << endl;
				cout << i << "���뵹" << a << "��" << endl;
				//				Sleep(3000);//����
			}





			if (s[i] == 1 && m[i] == 1 && i != n)//�����լO�T�H���q�� 
			{
				int a;
				do
				{
					a = rand() % 15 + 1;//�T�H���� 
				} while (m[a] == 0 || a == i || s[a] == 1);
				p[a]++;//�p�Ⲽ�� 
				cout << i << "���뵹" << a << "��" << endl;//�֧뵹�� 
//				if(s[a]==3)//�����լO�������q�� 
//				{
//					tp[a]=i;//�����D�b�F�� 
//				}
			}
			if (s[i] == 2 && m[i] == 1 && i != n)//�����լO�w���a���q�� 
			{
				int a;
				do
				{
					a = rand() % 15 + 1;
				} while (m[a] == 0 || a == i || yy[a] == 3 || yy[a] != 1);

				if (yy[a] == 1)
				{
					p[a]++;
					cout << i << "���뵹" << flag << "��" << endl;
				}
				else
				{

					p[a]++;//�p�Ⲽ��
					cout << i << "���뵹" << a << "��" << endl;
				}
			}
			if (s[i] == 3 && m[i] == 1 && i != n)//�����լO�������q�� 
			{
				int a;
				do
				{
					a = rand() % 15 + 1;
				} while (m[a] == 0 || a == i);
				p[a]++;//�벼 
				cout << i << "���뵹" << a << "��" << endl;
			}
			if (s[i] == 4 && m[i] == 1 && i != n)//�����լO�k�Ū��q�� 
			{
				int a;
				do
				{
					a = rand() % 15 + 1;
				} while (m[a] == 0 || a == i);
				p[a]++;//�벼 
				cout << i << "���뵹" << a << "��" << endl;
			}
		}
		system("cls");//�M���e�� 
		cout << "�벼���p�G" << endl;
		for (int i = 1; i <= 15; i++)
			if (m[i] == 1)
				cout << i << "��" << "  ���ơG" << p[i] << endl;
		int sw, max = -100;
		for (int i = 1; i <= 15; i++)
		{
			if (p[i] > max)
			{
				sw = i;
				max = p[i];
			}
		}
		m[sw] = 0;
		cout << sw << "���F" << endl;
		c--;
		cout << sw << "���������O";
		switch (s[sw])
		{
		case 1:
			cout << "����" << endl;
			break;
		case 2:
			cout << "�w���a" << endl;
			break;
		case 3:
			cout << "����" << endl;
			break;
		case 4:
			cout << "�k��" << endl;
			break;
		}
		day++;
		system("pause");
		cout << endl;
	} while (m[n] == 1 && c > 1 && wolf > 0);
	cout << "�C������" << endl;
}
int main()
{
	srand((int)time(0));
	char a = '1';
	while (1)
	{
		system("cls");
		cout << "����C��" << endl;
		cout << "1.�}�l�C��" << endl;
		cout << "2.�d�ݹC���W�h" << endl;
		a = _getch();
		if (a == '1')
		{
			cout << "1. 15�H��" << endl;
			cout << "2. 30�H�T�־�(10�y�H)<�q�д���>" << endl;
			a = '2';
			while (a == '2')
			{
				a = _getch();
				switch (a)
				{
				case '1':
					brc();
					break;
				}
				if (a == '1')
					break;
			}
			if (a == '1')
				break;
		}
		else if (a == '2')
		{
			cout << "�T�H�G�C��ߤW���ɭԥi�ϥα��H�v�����@�H" << endl;//1
			cout << "�w���a�G�C�ѱߤW�i�H���D�@�ӤH������" << endl;//2 
			cout << "�����G�L�ޯ�,���a�O�����ɡA�b��5�Ѿ֦�1.5�����벼�v" << endl;//3
			cout << "�k�šG����~�Ĥ��A�@�~���r�ġA�@�~���_����" << endl;//4
			cout << "�벼�ӫh�G\n�C�������F�A�H�~���O�ѹq���N��" << endl;
			cout << "�T�H���|�������͡A�����]�A�벼���`" << endl;
			cout << "�w���a�p�G�w�������N�@����L�벼�A�p�G�w���쥭���N�û����|��L�벼" << endl;
			cout << "********�Q�Φn�W��AI�C���W�h��X����**********" << endl;
			system("pause");
		}
	}
	return 0;
}

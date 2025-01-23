/*

�Ф��O���g��Ө禡�èϥ�Template�\��Ϩ禡�i�H���Ǧh�ث��O:

sortArray:�Ѥp��j�Ƨǰ}�C����(�i�H���N�ϥαƧǪk�A���ФŨϥΨ禡�w���إ\��(�Y�H�ϥ��D0���p��))

printArray:��X�}�C���Ҧ������A�ÿ�X�̤j�Ȥγ̤p��



��J����:

��J20�Ӿ��(int)�A20�ӯB�I��(double)�A20�Ӧr��(char��A-Za-z�զ� ))

��X����:

��XINT�BDOUBLE�BCHAR�g�L�Ƨǫ᪺�}�C�A�åB��ܥX�䤤���̤j�Ȥγ̤p��



�d�ҿ�J1:

98 16 56 97 14 40 5 64 55 1 84 27 25 16 31 82 96 64 98 20
91.48 28.4 55.61 50.52 45.77 99.7 48.15 3.47 7.03 15.58 84.9 19.45 63.78 51.77 59.92 16.26 43.4 4.67 13.93 41.35
p N B T A x h g Q o g Y D P e t z l W P

�d�ҿ�X1:

1 5 14 16 16 20 25 27 31 40 55 56 64 64 82 84 96 97 98 98
Min:1 Max:98
3.47 4.67 7.03 13.93 15.58 16.26 19.45 28.4 41.35 43.4 45.77 48.15 50.52 51.77 55.61 59.92 63.78 84.9 91.48 99.7
Min:3.47 Max:99.7
A B D N P P Q T W Y e g g h l o p t x z
Min:A Max:z



�d�ҿ�J2:

94 91 11 73 69 41 35 54 59 75 66 31 98 33 4 5 60 11 18 79
85.02 79.18 18.85 53.05 17.09 31.56 58.99 62.61 45.7 8.18 13.15 1.8 68.08 18.44 18.12 33.66 12.73 32.56 6.46 7.29
m j W q e F N z O y q d N M x e f B k p

�d�ҿ�X2:

4 5 11 11 18 31 33 35 41 54 59 60 66 69 73 75 79 91 94 98
Min:4 Max:98
1.8 6.46 7.29 8.18 12.73 13.15 17.09 18.12 18.44 18.85 31.56 32.56 33.66 45.7 53.05 58.99 62.61 68.08 79.18 85.02
Min:1.8 Max:85.02
B F M N N O W d e e f j k m p q q x y z
Min:B Max:z

*/

#include <iostream>
#include <iomanip>
using namespace std;

template<typename T>
T sortArray(T a[])
{
    double tmp=0;
    for (int i = 0; i < 20; i = i + 1)
    {
        for (int j = i + 1; j < 20; j = j + 1)
        {
            if (a[i] > a[j])
            {
                //�ܼƥ洫
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    return 0;
}

template<typename T>
T printArray(T a[])
{
    for (int i = 0; i < 20; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl << "Min:" << a[0] << " Max:" << a[19] << endl;
    return 0;
}

int main()
{
    int a[20];
    double b[20];
    char c[20];

    for (int i = 0; i < 20; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 20; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < 20; i++) {
        cin >> c[i];
    }

    sortArray(a);
    sortArray(b);
    sortArray(c);

    printArray(a);
    printArray(b);
    printArray(c);
    cout << b[2];
    return 0;
}
#include <iostream>  
#include <vector>  
using namespace std;

int min(vector < vector < int > >yoyo2) {
    int z=99;
    for (int i = 0; i < yoyo2.size(); i++)       //����o�ǬO��G���̪��F��L�X��  
    {
        for (int j = 0; j < yoyo2[i].size(); j++)
        {
            if (yoyo2[i][j] < z) {
                z = yoyo2[i][j];
            }
        }
        cout << endl;
    }
    return z;
}


int main()
{
    int c;
    vector<vector<int> > yoyo2;            //���O�@�ӤG�����}�C,���W��yoyo2  
    for (int i = 0; i < 4; i++)
    {
        vector<int>yoyo1;                  //���O�@��,���Wyoyo1,�򥻪��G���榡,�ƥ���@���]�w�n  

        for (int j = 0; j < 3; j++)
        {
            cin >> c;
            yoyo1.push_back(c);           //�ڬO���@�Ӫ�9�e5,�ҥH�Ĥ@�C�N�|�\9��0  
        }
        yoyo2.push_back(yoyo1);           //�ⰵ�n��9��0��b�Ĥ@�C,����^��i=1,�}�s�@�����@�˪���,  
    }                                         //����i=4����  
    cout<<min(yoyo2)<<endl;


    /*for (int i = 0; i < yoyo2.size(); i++)       //����o�ǬO��G���̪��F��L�X��  
    {
        for (int j = 0; j < yoyo2[i].size(); j++)
        {
            cout << yoyo2[i][j];
        }
        cout << endl;
    }*/
}
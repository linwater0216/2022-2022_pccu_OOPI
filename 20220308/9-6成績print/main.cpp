/*�ХH���}�ɮפ覡�]�pScore�ʸ˪���
data fields(private)�Gstring name, int math
function:setName, setMath, getName, getMath
�H�ΦA�[�W�@�� function
�W�� print�A��X �W�r�B�ƾǦ��Z

��J�����G�D�{���إߨ��Score����score1(John, 90)�Mscore2(Mary, 80)�A�M���J1�ӦW�r(string)�M1�ӼƾǦ��Z(int)�A���O�N��1�Ӫ���J�ȭק�score1���W�r�A��2�Ӫ���J�Ȭ��ק�score2���ƾǦ��Z�C

��X�����G��D�{���Q�� score1.print() �M score2.print() �i���X�C

�d�ҿ�J�G
Jerry 85

�d�ҿ�X�G
Jerry 90
Mary 85

�� .h �ɤ��аȥ��קK�h�����J(if no define)
*/
#include <iomanip>
#include <string>
#include "Score.h"
using namespace std;
int main()
{
	int b;
	string a;
	Score Score1;
	Score Score2;
	Score1.setName("John");
	Score1.setMath(90);
	Score2.setName("Mary");
	Score2.setMath(80);
	cin >> a >> b;
	Score1.setName(a);
	Score2.setMath(b);
	Score1.print();
	Score2.print();
}
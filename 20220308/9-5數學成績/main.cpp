/*�ХH���}�ɮפ覡�]�pScore�ʸ˪���
data fields(private)�Gstring name, int math
function:setName, setMath, getName, getMath

��J�����G�D�{���إߨ��Score����score1("John", 90)�Mscore2("Mary", 80)�A�M��M���J2�հѼơA�Nscore1���W�r�ק令�Ĥ@�ժ��󪺦W�r�H�αNscore2�����Z�ק令�ĤG�ժ��󪺦��Z�C

��X�����G��X�ק�᪺�⪫��W�r�P���Z�C

�d�ҿ�J�G
Jerry 70
May 85

�d�ҿ�X�G
Jerry 90
Mary 85

�� .h �ɤ��аȥ��קK�h�����J(if no define)
*/
#include "Score.h"
using namespace std;
int main()
{
	int b, d;
	string a, c;
	Score Score1;
	Score Score2;
	Score1.setName("John");
	Score1.setMath(90);
	Score2.setName("Mary");
	Score2.setMath(80);
	cin >> a >> b >> c >> d;
	Score1.setName(a);
	Score2.setMath(d);

	Score1.getName();
	Score1.getMath();
	Score2.getName();
	Score2.getMath();
}
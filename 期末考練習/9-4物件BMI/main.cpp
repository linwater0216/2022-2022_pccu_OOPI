/*�ХH���}�ɮפ覡�]�pBMI�ʸ˪���

data fields(private):
string name
double weight
double height

function: getBMI() -> weight / (height*height)

��J�����G�D�{���N��Jname�Bweight�Bheight�C

��X�����G�Nname�MBMI��X�A���� BMI �O�_����ơA�п�X��p���I����C

�d�ҿ�J�G
John 80 1.7

�d�ҿ�X�G
John 27.68

�� .h �ɤ��аȥ��קK�h�����J(if no define)
*/
#include <iomanip>
#include <string>
#include "BMI.h"
using namespace std;
int main()
{
	BMI BMI1;
	string a;
	double b, c;
	cin >> a;
	cin	>> b >> c;
	BMI1.setstring(a);
	BMI1.setweight(b);
	BMI1.setheight(c);
	cout << a <<fixed<<setprecision(2) <<" " << BMI1.getBMI() << endl;
	return 0;
}
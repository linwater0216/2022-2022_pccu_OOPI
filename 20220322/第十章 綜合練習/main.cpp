/*
�г]�p�T���OBirthday�BSalary�BStaff
�����D�ةһݬ��T�����O�]�p�A�� constructor

Birthday���O��data fields(private): year:int�Bmonth:int�Bday:int
Birthday���O��function�� setYear�BgetYear�BsetMonth�BgetMonth�BsetDay�BgetDay�Bprint
Birthday��print�禡���\�ର��X year/month/day

Salary���O��data fields(private): hours:int�BworkDay:int
Salary���O��function�� setHours�BgetHours�BsetWorkDay�BgetWorkDay�BgetMonthlySalary�Bprint
getMonthlySalary���p��覡: 168 * hours * workDay
Salary��print�禡���\�ର��X getMonthlySalary

Staff���O��data fields(private): name:string�Bbirthday:Birthday�Bsalary:Salary �BnumOfStaff:static int
Staff���O��function��setName�BgetName�BsetBirthday�BgetBirthday�BsetSalary�BgetSalary�BgetNumOfStaff�Bprint
Staff��print�禡���\�ର��X name/Birthday��print/Salary��print

Staff�غc�l�ȥ��ϥΪ���զX�����A�Ҧp�G
Staff("Kirito", Birthday(1999, 6, 1), Salary(8, 10))
������զX�榡


��J�����G
�D�{���إߤT��Staff����A��T�p�U�G

Staff1�Gname-Kirito�Bbirthday-2002�~3��2��Bhours -10�BworkDay-20

Staff2�Gname-Asuna�Bbirthday-2003�~5��4��Bhours -8�BworkDay-30

Staff3�Gname-Alice�Bbirthday-2000�~10��8��Bhours -3�BworkDay-4

��J1��name (string)�B1��year(int)�B1��day(int)�B1��hours (int)

��X�����G
��1�ӿ�J�ȭק�Staff1��name�A��2�ӿ�J�ȭק�Staff2��birthday�~���A��3�ӿ�J�ȭק�Staff3��birthday����A��4�ӿ�J�ȭק�Staff1�PStaff3��hours �A�Цb�D�{���Q��Staff����print�禡���ӽd�ҿ�X�榡��X�A�̫��XStaff��numOfStaff�Y�i�C

�d�ҿ�J�G
Eden 1995 10 4

�d�ҿ�X�G
Eden 2002/3/2 13440
Asuna 1995/5/4 40320
Alice 2000/10/10 2688
Staff: 3
*/
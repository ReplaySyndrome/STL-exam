#include <iostream>
#include <random>
#include <iomanip>


using namespace std;

enum Tier { common, rare, epic, legend };

uniform_int_distribution<> nameuid(30, 80);
uniform_int_distribution<> hpuid(-50, 200);
uniform_int_distribution<> tieruid(common, epic);
uniform_int_distribution<> charuid('a', 'z');
default_random_engine dre;



class Cookie
{
	string name;
	int hp;
	bool isdie = false;
	Tier tier;

public:
	
	Cookie()
	{
		for (int i = 0; i < nameuid(dre); ++i)
		{
			name += charuid(dre);
		}

		hp = hpuid(dre);

		tier = Tier(tieruid(dre)); // �ʷϻ� ������ ��Ÿ�� ���� ������ �����ϰ� ��������.
	}

	void show()
	{
		if (!isdie)
		{
			cout << left << setw(80) << name << " " << setw(4) << hp << " "; 
			showtier();
			return;
		}
		
		cout << "�� ��Ű�� �׾����ϴ�." << endl;
	}

	void showtier()
	{
		cout << tier << endl;
	}


};


int main()
{
	//������ �ذ��ϴµ� �ʿ��� �ڵ带 �߰��ؾ��Ѵٸ� �߰��ѵ� �ּ����� �߰��� �ڵ忡 ���� ������ ���ٿ��� �Ѵ�.

	//���� 1. ��Ű ������ ���� Cookie.data ���Ͽ� �����϶�

	//���� 2. ���� Cookie.data �� �о �ڷᱸ���� �����϶�.

	//���� 3. showtier()�� �̿��ؼ� ����ߴ��� ������ ���� �ʴ´�. tier�� ������ ��µȴ�. tier�� �ѱ۷� �������
	// common�̸� Ŀ��, rare�� ����, epic�̸� ����, legend�� ������
	// �� ���ǹ��� ������� �ʴ´�.

	//���� 4. sort �Լ��� �̿� ü�� ������������ �����϶�.

	//���� 5. ü���� 0 ������ ��Ű�� �� �׿�������.

	//���� 6. ���� �迭�� �̿��Ͽ� �̸����� ������ �ܾ�� �����ϴ� �̸����� ������ ���ϰ� ����϶�.
	// a - �
	// b - �
	// ...
	// ������� abcdef�� �̸��̶�� a�� �����ϹǷ� a�� �����ϴ� �̸��� ������ �ϳ� �߰��ȴ�.
	// �� ���� 5���� �ذ��ϴµ� 30����Ʈ �̻��� ����ؼ� �ȵȴ�.

	//���� 7. name�� �� �ޱ��ڰ� Z��� �� ��Ű�� ����� ������� �ٲ۴�.

}



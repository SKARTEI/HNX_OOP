#include <iostream>
#include <string>
using namespace std;



int total[3] = { 0,0,0 };
class student
{
	private:
		string name;
		int kor_score, eng_score, math_score;
	public:
        student() { kor_score = 0; eng_score = 0; math_score = 0; } // �⺻ ������
        student(int score1, int score2, int score3) { kor_score = score1; eng_score = score2; math_score = score3; } // �� �Է� ������
        void input_f();
        void print_f();
};
void student::input_f()
{
    cout << "�̸� �Է�: ";
    cin >> name;
    cout << "���� ���� �Է�: ";
    cin >> kor_score;
    cout << "���� ���� �Է�: ";
    cin >> eng_score;
    cout << "���� ���� �Է�: ";
    cin >> math_score;

    total[0] += kor_score;
    total[1] += eng_score;
    total[2] += math_score;
}

void student::print_f()
{
    cout << "�̸�: " << name
        << "\t����: " << kor_score
        << "\t����: " << eng_score
        << "\t����: " << math_score << endl;
}


int main() 
{
    student Group[5];
    
    cout << "���� 16�� Ǯ�� ����" << endl;
    cout << "�л� 5���� ������ ���� ó��" << endl;

    // �л� ���� �Է�
    for (int i = 0; i < 5; i++) {
        cout << "[" << i + 1 << "�� �л�]" << endl;
        Group[i].input_f();
    }

    // �л� ���� ���
    cout << "\n�Էµ� �л� ����:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "[" << i + 1 << "�� �л�] ";
        Group[i].print_f();
    }

    // ����, ���
    cout << "\n���� ������ " << total[0] << " ����� " << (double) total[0] / 5 << endl;
    cout << "���� ������ " << total[1] << " ����� " << (double) total[1] / 5 << endl;
    cout << "���� ������ " << total[2] << " ����� " << (double) total[2] / 5 << endl;

    return 0;
}

// 17�� ����
int main()
{
 
    int i, maxl=0, minl=10000, suml=0, array_s[] = { 19,2,25,92,36,45 };
    double averl =0, varl = 0;
    //17-1
    for (i = 0; i < 6; i++)
    {
        cout << array_s[i] << endl;
        suml += array_s[i];
        //17-2
        if (maxl < array_s[i])
            maxl = array_s[i];

        if (minl > array_s[i])
            minl = array_s[i];
        
    }
    averl = suml / 6;
    //�л� ��į...
    for (i = 0; i < 6; i++)
    {
        varl += (array_s[i] - averl) * (array_s[i] - averl);
        varl = varl / 6;
    }
    
    cout << "�ִ�: " << maxl << "  �ּ�: " << minl << "  ���: " << averl << "  �л�: " << varl << endl;
}
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
        student() { kor_score = 0; eng_score = 0; math_score = 0; } // 기본 생성자
        student(int score1, int score2, int score3) { kor_score = score1; eng_score = score2; math_score = score3; } // 값 입력 생성자
        void input_f();
        void print_f();
};
void student::input_f()
{
    cout << "이름 입력: ";
    cin >> name;
    cout << "국어 점수 입력: ";
    cin >> kor_score;
    cout << "영어 점수 입력: ";
    cin >> eng_score;
    cout << "수학 점수 입력: ";
    cin >> math_score;

    total[0] += kor_score;
    total[1] += eng_score;
    total[2] += math_score;
}

void student::print_f()
{
    cout << "이름: " << name
        << "\t국어: " << kor_score
        << "\t영어: " << eng_score
        << "\t수학: " << math_score << endl;
}


int main() 
{
    student Group[5];
    
    cout << "문제 16번 풀이 개시" << endl;
    cout << "학생 5명의 국영수 성적 처리" << endl;

    // 학생 정보 입력
    for (int i = 0; i < 5; i++) {
        cout << "[" << i + 1 << "번 학생]" << endl;
        Group[i].input_f();
    }

    // 학생 정보 출력
    cout << "\n입력된 학생 정보:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "[" << i + 1 << "번 학생] ";
        Group[i].print_f();
    }

    // 총점, 평균
    cout << "\n국어 총점은 " << total[0] << " 평균은 " << (double) total[0] / 5 << endl;
    cout << "영어 총점은 " << total[1] << " 평균은 " << (double) total[1] / 5 << endl;
    cout << "수학 총점은 " << total[2] << " 평균은 " << (double) total[2] / 5 << endl;

    return 0;
}

// 17번 문제
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
    //분산 어캄...
    for (i = 0; i < 6; i++)
    {
        varl += (array_s[i] - averl) * (array_s[i] - averl);
        varl = varl / 6;
    }
    
    cout << "최대: " << maxl << "  최소: " << minl << "  평균: " << averl << "  분산: " << varl << endl;
}
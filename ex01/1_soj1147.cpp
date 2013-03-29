#include <iostream>
using namespace std;

struct Stu {
    char name[21];
    int exam_score;
    int class_score;
    char isLeader;
    char isWest;
    int paper_counts;
    int bonus;
};

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    Stu stu_max, tmp;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> tmp.name >> tmp.exam_score 
            >> tmp.class_score >> tmp.isLeader 
            >> tmp.isWest >> tmp.paper_counts;

        tmp.bonus = 0;
        if(tmp.exam_score > 80 && tmp.paper_counts >= 1)
            tmp.bonus += 8000;
        if(tmp.exam_score > 85 && tmp.class_score > 80)
            tmp.bonus += 4000;
        if(tmp.exam_score > 90)
            tmp.bonus += 2000;
        if(tmp.exam_score > 85 && tmp.isWest == 'Y')
            tmp.bonus += 1000;
        if(tmp.class_score > 80 && tmp.isLeader == 'Y')
            tmp.bonus += 850;

        if(i == 0 || tmp.bonus > stu_max.bonus)
            stu_max = tmp;
        sum += tmp.bonus;
    }

    cout << stu_max.name << endl
         << stu_max.bonus << endl
         << sum << endl;
    return 0;
}                                 
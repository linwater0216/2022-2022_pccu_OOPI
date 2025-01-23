/*

學生的成績有三科全班共有5人
他們的成績如下：
80.0, 70.0, 90.0
85.0, 77.0, 95.0
83.0, 75.0, 70.0
73.0, 95.0, 67.0
88.0, 79.0, 71.0
請利用vector方式建立
並計算每個人的三科平均, 使用函數為stuAve(vector)
和全班每科平均, 可以用函數double* courseAve(vector)，也可以不用
最後輸出如下：
80.0, 70.0, 90.0, 80.0
85.0, 77.0, 95.0, 85.7
83.0, 75.0, 70.0, 76.0
73.0, 95.0, 67.0, 78.3
88.0, 79.0, 71.0, 79.3
Average: 81.8, 79.2, 78.6

*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
double stuAve(vector<double> newScoreArray) {
	double total = 0;
	for (int i = 0; i < newScoreArray.size(); i++)
		total += newScoreArray[i];
	return total / newScoreArray.size();
}
double* courseAve(vector<vector<double>> newCourseArray) {
	double static finAve[3] = { 0 };
	for (int i = 0; i < newCourseArray.size(); i++) {
		finAve[0] += newCourseArray[i][0];
		finAve[1] += newCourseArray[i][1];
		finAve[2] += newCourseArray[i][2];
	}
	finAve[0] /= newCourseArray.size();
	finAve[1] /= newCourseArray.size();
	finAve[2] /= newCourseArray.size();
	return finAve;
}
int main() {
	double exScoreArray[5][3] = {
	 {80.0, 70.0, 90.0},
	 {85.0, 77.0, 95.0},
	 {83.0, 75.0, 70.0},
	 {73.0, 95.0, 67.0},
	 {88.0, 79.0, 71.0} };
	vector<vector<double>> score(5);
	for (int i = 0; i < score.size(); i++) {
		score[i] = vector<double>(3);
	}
	
	for (int i = 0; i < score.size(); i++) {
		for (int j = 0; j < score[i].size(); j++) {
			score[i][j] = exScoreArray[i][j];
		}
	}
	
	for (int i = 0; i < score.size(); i++) {
		for (int j = 0; j < score[i].size(); j++) {
			cout << setprecision(1) << fixed << score[i][j] << ", ";
		}
		cout << stuAve(score[i]) << endl;
	}
	double* course = courseAve(score);
	cout << "Average: " << *(course) << ", " << *(course + 1) << ", " << *(course + 2) << endl;
	return 0;
}
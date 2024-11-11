#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split_sentence(string sen) {
    stringstream ss(sen);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}

void print(string n[], double runData[5][7], int count) {
    cout << "NAME         ";
    cout << "Day 1   ";
    cout << "Day 2   ";
    cout << "Day 3   ";
    cout << "Day 4   ";
    cout << "Day 5   ";
    cout << "Day 6   ";
    cout << "Day 7   " << endl;
    while (count < 5) {
        cout << n[count] << "        ";
        for (int i = 0; i < 7; i++) {
            cout << runData[count][i] << "   ";
        }
        cout << endl;

        count++;
    }
    
};

void calculateAverage(double runData[5][7], int count) {
    while(count < 5) {
        double row_sum = 0;
        for (int i = 0; i < 7; i++) {
            row_sum =  row_sum + runData[count][i];
        }
        // cout << "AVG! " << row_sum / 7 << endl;

        count++;
    }
};

void getData(ifstream& inf, string n[], double runData[5][7], int count) {
    string line_txt;
    vector<string> string_vec;


    while (getline(inf, line_txt, '\n')) {
        cout << "!" << line_txt << endl;
        string_vec = split_sentence(line_txt);

        // NAMES
        n[count] = string_vec[0];

        // RUNDATA 2D
        for (int i = 0; i < string_vec.size(); i++) {
            runData[count][i] = atof(string_vec[i+1].c_str());
            // cout << string_vec[i] << endl;
        }

        count++;
    }
    calculateAverage(runData, 0);
    print(n, runData, 0);
}
  
int main()
{
    ifstream inFile("ch8_Ex12Data.txt");
    string n[5];
    double runData[5][7];

    getData(inFile, n, runData, 0);

	return 0;
}
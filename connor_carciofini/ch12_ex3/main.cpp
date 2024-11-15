#include <iostream>
#include <iomanip>

using namespace std;


int countVotes(int* votes, int amntCandidates) {
    int sum = 0;
    for (int i = 0; i < amntCandidates; i++) {
        sum = sum + votes[i];
    }

    return sum;
}

void runElection(string* names, int* votes, int amntCandidates) {
    int totalVotes = countVotes(votes, amntCandidates);
    int highestVotes = 0;
    string winner;

    cout << "Candidate Votes Received % of Total Votes"<< endl;
    for (int i = 0; i < amntCandidates; i++) {
        if (votes[i] > highestVotes) {
            highestVotes = votes[i];
            winner = names[i];
        }
        cout << names[i] << " " << votes[i] << " " << 100 * (double(votes[i]) / double(totalVotes)) << endl;
    }
    cout << "Total " << totalVotes << endl;
    cout << "The Winner of the Election is : " << winner << endl;
}

int main() {
    string* names;
    int* votes;
    int amntCandidates;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "NUMBER OF CANDIDATES? ...   ";
    cin >> amntCandidates;
    cout << endl;

    names = new string[amntCandidates];
    votes = new int[amntCandidates];

    for(int i = 0; i < amntCandidates; i++) {
        cout << "ENTER CANDIDATE " << i + 1 << "...   ";
        cin >> names[i];
        cout << endl;
        cout << "ENTER NUMBER OF VOTES FOR " << names[i] << "...   ";
        cin >> votes[i];
        cout << endl;
    }

    runElection(names, votes, amntCandidates);

    return 0;
}
#include <iostream>
using namespace std;

class Election {
private:
    int candidates[5] = {1, 2, 3, 4, 5};
    int votes[5] = {0};
    int spoiltBallots = 0;

public:
    // Function to cast a vote
    bool castVote(int vote) {
        if (vote >= 1 && vote <= 5) {
            votes[vote - 1]++;
            return true;
        } else {
            spoiltBallots++;
            return false;
        }
    }

    // Function to display results
    string displayResults() {
        string result = "Election Results:\n";
        for (int i = 0; i < 5; i++) {
            result += "Candidate " + to_string(candidates[i]) + ": " + to_string(votes[i]) + " votes\n";
        }
        result += "Spoilt Ballots: " + to_string(spoiltBallots) + "\n";
        return result;
    }
};

int main() {
    Election election;
    int numVotes, vote;
    
    cout << "Enter number of votes: ";
    cin >> numVotes;
    
    for (int i = 0; i < numVotes; i++) {
        cout << "Enter vote (1-5): ";
        cin >> vote;
        election.castVote(vote);
    }
    
    cout << election.displayResults();
    return 0;
}

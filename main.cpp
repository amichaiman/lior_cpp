#include <iostream>
#include <sstream>
#include "BallotBox.h"
#include "Elections.h"

using namespace std;
const int EXIT = 5;

int main(int argc, char **argv) {
    Elections elections;
    string ballotName;
    int input;
    int numberOfParties;

    if (argc < 3){
        cerr << "ERROR: to few arguments" << endl;
    }

    numberOfParties = atoi(argv[1]);
    elections.setMaxNumberOfBallots(atoi(argv[2]));

    cin >> input;

    while (input != EXIT){
        switch (input){
            case 1: {
                cin >> ballotName;
                BallotBox *newballotBox = new BallotBox(ballotName,numberOfParties);
                newballotBox->addVotes();
                elections.addBallot(newballotBox);
                break;
            }
            case 2: {
                elections.printBallots();
                break;
            }
            case 3: {
                cout << "total number of votes from all ballots " << elections.getTotalNumberOfVotes() << endl;
                break;
            }

            default:
                cout << "ERROR: Invalid input" << endl;
        }
        cin >> input;
    }
    return 0;
}
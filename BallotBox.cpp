//
// Created by liorr on 25/0ElectionSizes::getNumberOfParties()/2018.
//

#include "BallotBox.h"

BallotBox::BallotBox(const string ballotName,const int parties)
:name(ballotName),votes(new int[numberOfParties]), numberOfParties(parties), totalNumberOfVotes(0)
{}

void BallotBox::addVotes() {
    for (int i=0; i<numberOfParties; i++){
        cin >> votes[i];
        totalNumberOfVotes += votes[i];
    }
}


const string &BallotBox::getName() const {
    return name;
}

void BallotBox::setName(const string &name) {
    BallotBox::name = name;
}

int *BallotBox::getVotes() const {
    return votes;
}

void BallotBox::setVotes(int *votes) {
    BallotBox::votes = votes;
}

void BallotBox::printVotes() {
    cout << name << '\t';
    for (int i=0; i<numberOfParties; i++){
        cout << votes[i] << '\t';
    }
    cout << endl;
}

int BallotBox::getNumberOfParties() const {
    return numberOfParties;
}

int BallotBox::getTotalNumberOfVotes() const {
    return totalNumberOfVotes;
}

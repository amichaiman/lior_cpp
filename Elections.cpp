//
// Created by liorr on 25/03/2018.
//

#include "Elections.h"

void Elections::addBallot(BallotBox *toAdd) {
    ballots.addBallot(toAdd);
}

void Elections::printBallots() {
    ballots.printBallots();
}

int Elections::getMaxNumberOfBallots() const {
    return ballots.getMaxNumberOfNodes();
}

void Elections::setMaxNumberOfBallots(int maxNumberOfBallots) {
    ballots.setMaxNumberOfNodes(maxNumberOfBallots);
}

Elections::Elections() {}

int Elections::getTotalNumberOfVotes() {
    return ballots.getTotalNumberOfVotes();
}

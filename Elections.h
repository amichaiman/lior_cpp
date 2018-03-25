//
// Created by liorr on 25/03/2018.
//

#ifndef UNTITLED1_ELECTIONS_H
#define UNTITLED1_ELECTIONS_H

#include "BallotBox.h"
#include "LinkedList.h"

class Elections {

public:
    Elections();
    void addBallot(BallotBox *toAdd);
    int getMaxNumberOfBallots() const;
    void printBallots();
    void setMaxNumberOfBallots(int maxNumberOfBallots);
    int getTotalNumberOfVotes() ;

private:
    LinkedList ballots;

};


#endif //UNTITLED1_ELECTIONS_H

//
// Created by liorr on 25/03/2018.
//

#ifndef UNTITLED1_ballotBOX_H
#define UNTITLED1_ballotBOX_H
#include <iostream>

using namespace std;

class BallotBox {

public:
    static const int MAX_BALLOT_NAME = 12;

    BallotBox(const string ballotName, const int parties);

    const string &getName() const;
    void setName(const string &name);
    int *getVotes() const;
    void setVotes(int *votes);
    int getNumberOfParties() const;

    void addVotes();
    void printVotes();

private:
    string name;
    int *votes;
    int numberOfParties;
    int totalNumberOfVotes;
public:
    int getTotalNumberOfVotes() const;
};

#endif //UNTITLED1_ballotBOX_H

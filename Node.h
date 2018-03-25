//
// Created by liorr on 25/03/2018.
//

#ifndef UNTITLED1_NODE_H
#define UNTITLED1_NODE_H


#include "BallotBox.h"

class Node {
public:
    Node();
    Node(BallotBox *ballot, Node *next);
    Node(BallotBox *theBallot);

    BallotBox *getBallot() const;
    void setBallot(BallotBox *ballot);
    Node *getNext() const;
    void setNext(Node *next);

private:
    BallotBox *ballot;
    Node *next;
};


#endif //UNTITLED1_NODE_H

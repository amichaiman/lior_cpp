//
// Created by liorr on 25/03/2018.
//

#include "Node.h"
Node::Node(BallotBox *ballot, Node *next) : ballot(ballot), next(next) {}

Node::Node() {}

Node::Node(BallotBox *theBallot) : ballot(theBallot), next(NULL) {}

BallotBox *Node::getBallot() const {
    return ballot;
}

void Node::setBallot(BallotBox *ballot) {
    Node::ballot = ballot;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

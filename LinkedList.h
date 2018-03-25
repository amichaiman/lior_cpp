//
// Created by liorr on 25/03/2018.
//

#ifndef UNTITLED1_LINKEDLIST_H
#define UNTITLED1_LINKEDLIST_H

#include "Node.h"
#include <cstdlib>
class LinkedList {
public:
    LinkedList();
    Node *getHead() const;
    void setHead(Node *head);
    int getNumOfNodes() const;
    void setNumOfNodes(int numOfNodes);
    Node *ballotExists(const string ballotName);
    void setMaxNumberOfNodes(int maxNumberOfNodes);
    void addBallot(BallotBox *toAdd);
    void printBallots();
private:
    Node *head;
    int numOfNodes;
    int maxNumberOfNodes;
public:
    int getMaxNumberOfNodes() const;

    int getTotalNumberOfVotes();
};

#endif //UNTITLED1_LINKEDLIST_H

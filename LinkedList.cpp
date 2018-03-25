//
// Created by liorr on 25/03/2018.
//

#include <cstdlib>
#include "LinkedList.h"

Node *LinkedList::getHead() const {
    return head;
}

void LinkedList::setHead(Node *head) {
    LinkedList::head = head;
}

int LinkedList::getNumOfNodes() const {
    return numOfNodes;
}

void LinkedList::setNumOfNodes(int numOfNodes) {
    LinkedList::numOfNodes = numOfNodes;
}

LinkedList::LinkedList():head(NULL),numOfNodes(0) {}

Node* LinkedList::ballotExists(const string ballotName) {
    Node *currentNode = head;

    while (currentNode != NULL){
        if (currentNode->getBallot()->getName() == ballotName){
            return currentNode;
        }
        currentNode = currentNode->getNext();
    }
    return NULL;
}

void LinkedList::addBallot(BallotBox *toAdd) {
    Node *nodeLocation = ballotExists(toAdd->getName());
    if (!nodeLocation){
        if (numOfNodes >= maxNumberOfNodes){
            cerr << "ERROR: max number of ballots exceeded" << endl;
            return;
        }
        Node *newNode = new Node(toAdd);
        newNode->setNext(head);
        head = newNode;
        numOfNodes++;
        return;
    }
    free(nodeLocation->getBallot());
    nodeLocation->setBallot(toAdd);
}

void LinkedList::printBallots() {
    Node *currentNode = head;

    while (currentNode != NULL){
        currentNode->getBallot()->printVotes();
        currentNode = currentNode->getNext();
    }
}

void LinkedList::setMaxNumberOfNodes(int maxNumberOfNodes) {
    LinkedList::maxNumberOfNodes = maxNumberOfNodes;
}

int LinkedList::getMaxNumberOfNodes() const {
    return maxNumberOfNodes;
}

int LinkedList::getTotalNumberOfVotes() {
    Node *current = head;
    int sumVotes = 0;

    while (current != NULL){
        sumVotes += current->getBallot()->getTotalNumberOfVotes();
        current = current->getNext();
    }
    return sumVotes;
}

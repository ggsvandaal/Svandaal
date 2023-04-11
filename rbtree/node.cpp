#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

Node::Node(int Value) {
  value = Value;
  right = NULL;
  left = NULL;
  parent = NULL;
  next = NULL;
  color = 'r';
};

void Node::setValue(int input) {
  value = input;
}
		     

int Node::getValue() {
  return value;  
}


Node* Node::getRight() {
  return right;
}

Node* Node::getLeft() {
  return left;
}

Node* Node::getParent() {
  return parent;
}

Node* Node::getNext() {
  return next;
}

void Node::setRight(Node* Right) {
  right = Right;
}

void Node::setLeft(Node* Left) {
  left = Left;
}

void Node::setParent(Node* Prev) {
  parent = Prev;
}

void Node::setNext(Node* Next) {
  next = Next;
}

Node* Node::getGrand(Node* input) {
  return input -> getParent() -> getParent();
}

Node* Node::getUnc(Node* input) {
  if (input -> getGrand(input) -> getRight() == input -> getParent()) {
    return input -> getGrand(input) -> getLeft();
  }
  return input -> getGrand(input) -> getRight();
}

Node* Node::getSib(Node* input) {
  if (input -> getParent() -> getRight() == input) {
    return input -> getParent() -> getLeft();
  }
  return input -> getParent() -> getLeft();
}

char Node::getColor() {
  return color;
}

void Node::setBlack() {
  color = 'b';
}

void Node::setRed() {
  color = 'r';
}

Node::~Node() {
}


#include<iostream>
using namespace std;

#include "ArrayStack.h"


bool ArrayStack::isFull(){
    if (this->topIndex == MAXSIZE - 1){ 
            return true;
        }
    else{
            return false;
    }
}

bool ArrayStack::isEmpty(){
    if (this->topIndex == -1){ 
            return true;
        }
    else {
            return false;
    }
}

int ArrayStack::pop(){
    this->topIndex--;
    return data[topIndex];

}

void ArrayStack::push(int item){
    if (isFull()){
        cout << "List is full" << endl;
    }
    else{
    this->topIndex++;
    this->data[topIndex] = item;
    cout << "Item added" << item << endl;
}
}

int ArrayStack::top(){
    return data[topIndex];
   
}

void ArrayStack::display(){
    int i;
    for( i = 0; i <= topIndex; i++){
        cout << data[i] << endl;
    }
}



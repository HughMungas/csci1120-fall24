
#include <iostream>
#include "unorderedArrayListType.h"
 
using namespace std; 

// Write code here
void unorderedArrayListType::insertAt(int location, int insertItem){
    list[location] = insertItem;
    length++;
}

void unorderedArrayListType::insertEnd(int insertItem){
    list[length] = insertItem;
    length++;
}

void unorderedArrayListType::replaceAt(int location, int repItem) {
    list[location] = repItem;
}

int unorderedArrayListType::seqSearch(int searchItem) const{
    return 0;
}

void unorderedArrayListType::remove(int removeItem) {

}
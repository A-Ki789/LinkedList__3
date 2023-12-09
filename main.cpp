#include <iostream>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

int main(){
    LinkedList newList;
    newList.prepend(32);
    newList.prepend(31);
    newList.prepend(3434);
    cout<<newList.get(1)<<endl;
    return 0;
}
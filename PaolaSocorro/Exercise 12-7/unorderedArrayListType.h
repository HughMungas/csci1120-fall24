#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType
 
#include "arrayListType.h"  

class unorderedArrayListType: public arrayListType
{
public:
     unorderedArrayListType(int size = 100);
     ~unorderedArrayListType();
     void removeAt(int location) override; 

    // Implement the missing pure virtual functions
    void insertAt(int location, int insertItem) override;
    void insertEnd(int insertItem) override;
    void replaceAt(int location, int repItem) override;
    int seqSearch(int searchItem) const override;
    void remove(int removeItem) override;
}; 


#endif

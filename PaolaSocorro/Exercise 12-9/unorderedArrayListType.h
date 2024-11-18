#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType
  
#include "arrayListType.h" 

class unorderedArrayListType: public arrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void remove(int removeItem);

    // Add the min function
     int min() const override;

    unorderedArrayListType(int size = 100);
      //Constructor
}; 


#endif

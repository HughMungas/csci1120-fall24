#ifndef H_arrayListType
#define H_arrayListType 
 
class arrayListType
{ 
public:
    bool isEmpty() const; 
    

    bool isFull() const;
   

    int listSize() const;
     

    int maxListSize() const;
      

    void print() const;
    

    bool isItemAtEqual(int location, int item) const;
      

    virtual void insertAt(int location, int insertItem) = 0;
      

    virtual void insertEnd(int insertItem) = 0;
      

    void removeAt(int location);
     

    void retrieveAt(int location, int& retItem) const;
      

    virtual void replaceAt(int location, int repItem) = 0;
    

    void clearList();
      

    virtual int seqSearch(int searchItem) const = 0;
      

    virtual void remove(int removeItem) = 0;
      

    arrayListType(int size = 100);
      

    arrayListType (const arrayListType& otherList);
      

    virtual ~arrayListType();
      
     

protected:
    int *list;    
    int length;   
    int maxSize;  
                  
};


#endif

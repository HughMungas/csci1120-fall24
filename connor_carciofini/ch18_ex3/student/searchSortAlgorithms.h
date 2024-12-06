    
template<class elemType>
int seqOrdSearch(const elemType list[], int length, const elemType& item)
{
    // Write the function definition here
    for (int i = 0; i < length; i++) {
        if (list[i] == item) return i;
    }
    return -1; // return -1 if item not found
} //end seqOrdSearch

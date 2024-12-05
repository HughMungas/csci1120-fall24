template <class elemType>
int recSeqSearch(const elemType list[], const elemType& item, 
                 int first, int last)
{
    if (first <= last)
    {
        if (list[first] == item)
            return first;
        else
            return recSeqSearch(list, item, first + 1, last);
    }
    else
        return -1;
} //end recSeqSearch

template <class elemType>
int recursiveSeqSearch(const elemType list[], int length, const elemType& item)
{
	return recSeqSearch(list, item, 0, length - 1);
} //end recursiveSeqSearch

template <class elemType>
int seqSearch(const elemType list[], int length, const elemType& item)
{
    int loc;
    bool found = false;

    loc = 0;

    while (loc < length && !found)
        if (list[loc] == item)
            found = true;
        else
            loc++;

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch


template <class elemType>
int binarySearch(const elemType list[], int length, 
                 const elemType& item)
{
    int first = 0;
    int last = length - 1;
    int mid;

    bool found = false;

    while (first <= last && !found)
    {
        mid = (first + last) / 2;

        if (list[mid] == item)
            found = true;
        else if (list[mid] > item)
            last = mid - 1;
        else
            first = mid + 1;
    }

    if (found)
        return mid;
    else 
        return -1;
} //end binarySearch

template <class elemType>
void bubbleSort(elemType list[], int length)
{
    for (int iteration = 1; iteration < length; iteration++)
    {
        for (int index = 0; index < length - iteration;
                            index++)
        {
            if (list[index] > list[index + 1])
            {
                elemType temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
            }
        }
    }
} //end bubbleSort

template <class elemType>
void selectionSort(elemType list[], int length)
{
    int loc, minIndex;

    for (loc = 0; loc < length; loc++)
    {
        minIndex = minLocation(list, loc, length - 1);
        swap(list, loc, minIndex);
    }
} //end selectionSort

template <class elemType>
void swap(elemType list[], int first, int second)
{
    elemType temp;

    temp = list[first];
    list[first] = list[second];
    list[second] = temp;
} //end swap

template <class elemType>
int minLocation(elemType list[], int first, int last)
{
    int loc, minIndex;

    minIndex = first;

    for (loc = first + 1; loc <= last; loc++)
        if (list[loc] < list[minIndex])
            minIndex = loc;

    return minIndex;
} //end minLocation

template <class elemType>
void insertionSort(elemType list[], int length)
{
    for (int firstOutOfOrder = 1; firstOutOfOrder < length;
                                  firstOutOfOrder++)
        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            elemType temp = list[firstOutOfOrder];
            int location = firstOutOfOrder;

            do
            {
                list[location] = list[location - 1];
                location--;
            } while(location > 0 && list[location - 1] > temp);

            list[location] = temp;
        }
} //end insertionSort

template <class elemType>
void quickSort(elemType list[], int length)
{
    recQuickSort(list, 0, length -1);
} //end quickSort

template <class elemType>
void recQuickSort(elemType list[], int first, int last)
{
    int pivotLocation;

    if (first < last)
    {
        pivotLocation = partition(list, first, last);
        recQuickSort(list, first, pivotLocation - 1);
        recQuickSort(list, pivotLocation + 1, last);
    }
} //end recQuickSort

template <class elemType>
int partition(elemType list[], int first, int last)
{
    elemType pivot;

    int index, smallIndex;

    swap(list, first, (first + last) / 2);

    pivot = list[first];
    smallIndex = first;

    for (index = first + 1; index <= last; index++)
        if (list[index] < pivot)
        {
            smallIndex++;
            swap(list, smallIndex, index);
        }

    swap(list, first, smallIndex);

    return smallIndex;
} //end partition

template <class elemType>
void heapSort(elemType list[], int length)
{
    buildHeap(list, length);

    for (int lastOutOfOrder = length - 1; lastOutOfOrder >= 0;
                                          lastOutOfOrder--)
    {
        elemType temp = list[lastOutOfOrder];
        list[lastOutOfOrder] = list[0];
        list[0] = temp;
        heapify(list, 0, lastOutOfOrder - 1);
    }//end for
}//end heapSort

template <class elemType>
void heapify(elemType list[], int low, int high)
{
    int largeIndex;

    elemType temp = list[low];  //copy the root node of
                                //the subtree

    largeIndex = 2 * low + 1;  //index of the left child

    while (largeIndex <= high)
    {
        if (largeIndex < high)
            if (list[largeIndex] < list[largeIndex + 1])
                largeIndex = largeIndex + 1; //index of the
                                            //largest child

        if (temp > list[largeIndex]) //subtree
                                      //is already in a heap
            break;
        else
        {
            list[low] = list[largeIndex]; //move the larger
                                          //child to the root
            low = largeIndex;    //go to the subtree to
                                 //restore the heap
            largeIndex = 2 * low + 1;
        }
    }//end while

    list[low] = temp; //insert temp into the tree,
                      //that is, list
}//end heapify

template <class elemType>
void buildHeap(elemType list[], int length)
{
    for (int index = length / 2 - 1; index >= 0; index--)
        heapify(list, index, length - 1);
}
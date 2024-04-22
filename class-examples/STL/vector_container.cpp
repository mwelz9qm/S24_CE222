#include <vector>
#include <iostream>

using namespace std;

void printVectorList(vector<int> &vecList);
void squareVectorList(vector<int> &vecList);

int main()
{
    vector<int> list;

    list.push_back(2);
    list.push_back(3);
    list.push_back(5);
    list.push_back(7);

    printVectorList(list);

    list.insert(list.begin()+3,99);

    printVectorList(list);

    cout << "The remaining capacity is: " << list.capacity() << endl;

    list.push_back(-10);

    cout << "The remaining capacity is: " << list.capacity() << endl;


    int intArray[3] = {105, 110, 115};
    vector<int> list2(intArray,intArray+3);

    list.insert(list.begin()+2,list2.begin(),list2.end());

    printVectorList(list);
    squareVectorList(list);
    printVectorList(list);


    return 0;
}


void printVectorList(vector<int> &vecList)
{
    // int length = vecList.size();
    // for (int i = 0; i < length; i++)
    //     cout << vecList[i] << " ";
    // cout << endl;

    vector<int>::iterator vecIter;
    for (vecIter = vecList.begin(); vecIter != vecList.end(); vecIter++)
        cout << *vecIter << " ";
    cout << endl;

}

void squareVectorList(vector<int> &vecList)
{
    vector<int>::iterator vecIter;
    for (vecIter = vecList.begin(); vecIter != vecList.end(); vecIter++)
        *vecIter = *vecIter * *vecIter;

}
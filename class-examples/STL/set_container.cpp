//this code explores functional objects AND the set container

#include <iostream>
#include <string>
#include <set>
#include<algorithm>

using namespace std;

//silly example of functional object
template <typename Type>
class adder
{
    private:
    int count;
    public:
    adder()
    {
        count = 0;
    }
    Type operator()(Type x, Type y) 
    {
        count++;
        return x + y;
    }
    int getCount() const
    {
        return count;
    }
};

//greater than functional object
template <typename Type>
class myGreater
{
    public:
    bool operator()(Type x, Type y) const
    {
        return x > y;
    }
};


int main()
{
    //instantiate adder object
    adder<double> myAdder;
    cout << "The sum of 19.7 and 8.7 is " << myAdder(19.7,8.7) << endl;    
    cout << "The sum of -3.4 and 7.65 is " << myAdder(-3.4,7.65) << endl;
    cout << "The sum of 5 and -22 is " << myAdder(5,-22) << endl;
    cout << "We have performed " << myAdder.getCount() << " additions so far." << endl;


    ostream_iterator<string> stringScreen(cout, " ");
    string fruits[] = {"banana", "apple", "pear", "orange", "apple"};
    vector<string> vecList(fruits, fruits + 5);
    copy(vecList.begin(), vecList.end(), stringScreen);
    cout << endl;
    myGreater<string> compare;
    sort(vecList.begin(), vecList.end(), compare);
    copy(vecList.begin(), vecList.end(), stringScreen);
    cout << endl;
    
    
    //exploring sets
    int arr[] = {5,6,7,8};
    set<int, myGreater<int> > mySet(arr,arr + 4);

    // mySet.insert(5);
    // mySet.insert(6);
    // mySet.insert(7);
    // mySet.insert(8);

    ostream_iterator<int> screen(cout, " ");
    copy(mySet.begin(), mySet.end(), screen);
    cout << endl;

    //build a string set

    string arr1[] = {"Vixen", "Prancer", "Vixen", "Dancer"};
    set<string, myGreater<string> > mySet1(arr1, arr1 + 4);
    mySet1.insert("Donner");

    
    copy(mySet1.begin(), mySet1.end(), stringScreen);
    cout << endl;


    return 0;
}
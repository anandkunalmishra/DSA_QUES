/*
    A Program to implement chain hashing using linked list
    By Anand Kunal Mishra
*/
#include <bits/stdc++.h>
using namespace std;
class Implementation_of_Chaining
{
private:
    int Bucket;

public:
    list<int> *table;
    Implementation_of_Chaining(int b) // constructor is called
    {
        this->Bucket = b;
        this->table = new list<int>[b];
    }

    void insert(int key)
    {
        int i = key % this->Bucket;
        this->table[i].push_back(key);
    }
    bool search(int key)
    {
        int i = key % this->Bucket;
        for (auto x : table[i])
        {
            if (x == key)
                return true;
        }
        return false;
    }
    void remove(int key)
    {
        int i = key % this->Bucket;
        this->table[i].remove(key);
    }
};

int main()
{
    int bucket;
    bucket = 7;
    Implementation_of_Chaining s1(bucket);
    s1.insert(80);
    s1.insert(78);
    cout << s1.search(80);
    s1.insert(96);

    return 0;
}
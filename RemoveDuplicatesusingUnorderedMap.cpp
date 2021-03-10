#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> RemoveDuplicates(int *a , int n)
{

    vector<int> answer;
    unordered_map<int , bool> mymap;

    for(int i =0;i < n ;i++)
    {
        if(mymap.count(a[i]) == 0)
        {
            answer.push_back(a[i]);
            mymap[a[i]] = true;
        }
    }
    return answer;
}

int main()
{
    int a[] = {1,5,2,4,4,3,3,6,7,1,1,2};
    vector<int> output = RemoveDuplicates(a,12);

    for(int i = 0 ; i<output.size();i++)
    {
        cout<< output[i] <<endl;
    }
    return 0;
}

//
// Created by lushakag on 11/1/2018.
//
#include <iostream>
#include <bitset>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

using roadmap = vector<bitset<8>>;
auto CountLaneChanges(roadmap bitVector, int laneIndex, int segmentIndex)
{
    if(segmentIndex > (bitVector.size() - 1))
    {
        return 0;
    }
    auto leftTurn{INT_MAX};
    auto rightTurn{INT_MAX};
    auto direct{INT_MAX};

    if(bitVector[segmentIndex][laneIndex] == 1)
    {
        direct = CountLaneChanges(bitVector, laneIndex, segmentIndex + 1);
    }

    auto leftIndex{laneIndex - 1};
    if((leftIndex >= 0) && (bitVector[segmentIndex][leftIndex] == 1))
    {
        leftTurn = CountLaneChanges(bitVector, leftIndex, segmentIndex + 1);
        if (leftTurn != INT_MAX)
            ++leftTurn;
    }
    auto rightIndex{laneIndex + 1};
    if((rightIndex < 8) && (bitVector[segmentIndex][rightIndex] == 1))
    {
        rightTurn = CountLaneChanges(bitVector, rightIndex, segmentIndex + 1);
        if (rightTurn != INT_MAX)
            ++rightTurn;
    }
//    cout << segmentIndex << " " << laneIndex << " " << leftTurn << " " << direct << " " << rightTurn << endl;
    return (min(min(rightTurn,leftTurn),direct));
}

int solution(vector<int>& A)
{
    roadmap bitVector;

    for(auto value : A)
    {
        bitVector.push_back(bitset<8>(value));
    }

    auto minLaneChanges{INT_MAX};
    auto laneChanges{-1};
    for(auto i = 0; i < 8; i++)
    {
//        cout <<"BITTTT : " << i << endl;
        if(bitVector[0][i] == 1)
        {
            laneChanges = CountLaneChanges(bitVector, i, 1);
            if(minLaneChanges > laneChanges)
            {
                minLaneChanges = laneChanges;
            }
        }

    }
    if(minLaneChanges == INT_MAX)
        minLaneChanges = -1;

    return minLaneChanges;
}

int fibonachi(int n, map<int, int>&fib)
{
    auto it = fib.find(n);
    if(it == fib.end())
    {
        fib[n] = fibonachi(n-1, fib) + fibonachi(n-2, fib);
    }

    return fib[n];
}
long repeatedString(string s, long n) {

    long count = std::count(s.begin(), s.end(), 'a');
    string sub = s.substr(0, n%s.size());
    count = count * (n/s.size()) + std::count(sub.begin(), sub.end(), 'a');
    return count;
}

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<int> arr(n+1, 0);
    long max = 0;
    for(int i = 0; i < queries.size(); i++)
    {
        for(int k = queries[i][0]; k <= queries[i][1]; k++ )
        {
            arr[k] = arr[k] + queries[i][2];
            if(max <  arr[k])
            {
                max = arr[k];
            }
        }
    }
    return max;
}

int main()
{
//    vector<int> V{7,11,8,10};
//    vector<int> V{7,11,10,4};
//    cout << "Min Change Count : " << solution(V) << endl;
//    V = {7,11,8,4};
//    cout << "Min Change Count : " << solution(V) << endl;
//    V = {7,0,8,4};
//    cout << "Min Change Count : " << solution(V) << endl;
//    V = {7,7,7,7};
//    cout << "Min Change Count : " << solution(V) << endl;
//    V = {7,11,8,0};
//    cout << "Min Change Count : " << solution(V) << endl;
//    V = {0,11,8,4};
//    cout << "Min Change Count : " << solution(V) << endl;
//    V = {10,11,8,4,0};
//    cout << "Min Change Count : " << solution(V) << endl;
//        V = {10,11,8,4,5};
//    cout << "Min Change Count : " << solution(V) << endl;
//    V = {10,11,8,4,3};
//    cout << "Min Change Count : " << solution(V) << endl;

//    int input;
//    map<int, int>fib;
//    fib[0] = 0;
//    fib[1] = 1;
//    while(cin >> input)
//    {
//        cout << fibonachi(input, fib)<< endl;
//    }
    vector<vector<int>> queries{{2, 6 ,8},{3, 5 ,7},{1,8,1}, {5,9,15}};

    long value = arrayManipulation(10, queries);
    cout<< "Value : " << value << endl;
    return 0;
}



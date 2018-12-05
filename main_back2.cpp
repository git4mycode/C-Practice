//#include<iostream>
//#include <vector>
//#include <algorithm>
//#include <array>
//#include <map>
//#include <set>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//#include <deque>
//#include <typeinfo>
//#include <memory>
//#include<bits/stdc++.h>
//#include <sstream>
//
//#include <map>
//#include <limits>
//
//#include "Widget.h"
//
//using namespace std;
//
//
//void permute(string input, int l, int r)
//{
//    if(l==r)
//    {
//        cout << input << endl;
//    }
//    else
//    {
//        for(auto i = l; i <= r; i++)
//        {
//            swap(input[l], input[i]);
//            permute(input, l+1, r);
//            swap(input[i], input[l]);
//        }
//
//    }
//}
//template <typename T>
//decltype(auto) binarySearch(int l, int r, T value, vector<T>& v)
//{
//    auto middle =  (l+r)/2;
//
//    if (value == v[middle]) {
//        return middle;
//    }
//    else if (value > v[middle])
//        return binarySearch(middle + 1, r, value, v);
//    else
//        return binarySearch(l, middle, value, v);
//}
//
//void BubbleSort(vector<int>& V)
//{
//    int flag = 0;
//    for(auto i = 0; i < V.size(); i++)
//    {
//        for(auto j = 0; j <= V.size() - 1 - i ; j++)
//        {
//            if(V[j] > V[j+1])
//            {
//                swap(V[j] , V[j+1]);
//                flag = 1;
//            }
//        }
//        if(flag == 0)
//            break;
//    }
//}
//
//void SelectionSort(vector<int> & v)
//{
//    int size = v.size();
//    int min = 0;
//    int minPosition = 0;
//    for(int i = 0; i < size; i++ )
//    {
//        min = v[i];
//        minPosition = i;
//        for(int j = i+1; j < size ; j++ )
//        {
//            if(min > v[j])
//            {
//                min = v[j];
//                minPosition = j;
//            }
//        }
//        swap(v[i], v[minPosition]);
//        cout << endl;
//    }
//}
//
//void InsertionSort(vector<int> & v)
//{
//    int size = v.size();
//    for(int i = 1 ; i < size; i++)
//    {
//        for(int j = i; j > 0 && (v[j] < v[j-1]); j --)
//        {
//            swap(v[j] , v[j-1]);
//        }
//    }
//}
//
//void merge(vector<int> & v, int l, int r, int m)
//{
//    vector<int> sorted(v.size());
//    int i, j, k;
//    k = 0;
//    i = l;
//    j = m+1;
//    while((i <= m) && (j <= r))
//    {
//        if(v[i] < v[j])
//        {
//            sorted[k++] = v[i++];
//        } else
//        {
//            sorted[k++] = v[j++];
//        }
//    }
//
//    while(i<=m)
//    {
//        sorted[k++] = v[i++];
//    }
//    while(j <= r)
//    {
//        sorted[k++] = v[j++];
//    }
//
//    for(i = r; i >= l; i--)
//    {
//        v[i] = sorted[--k];  // copying back the sorted list to a[]
//    }
//
//
//}
//
//void mergeSort(vector<int> & v, int l, int r)
//{
//    if(l < r)
//    {
//        int m = (l+r)/2;
//        mergeSort(v, l,m);
//        mergeSort(v, m+1, r);
//        merge(v, l, r, m);
//    }
//
//}
//
//int partition(vector<int> &v, int low, int high)
//{
//    auto lowerestIndex = low -1;
//    auto pivot  = v[high];
//    for(auto j = low; j <= high-1; j++)
//    {
//        if(v[j] <= pivot)
//        {
//            lowerestIndex++;
//            swap(v[j], v[lowerestIndex]);
//        }
//    }
//
//    swap(v[lowerestIndex+1], v[high]);
//    return (lowerestIndex+1);
//}
//
//void quickSort(vector<int> &v, int low, int high)
//{
//    int q;
//    if(low < high)
//    {
//        q = partition(v, low, high);
//        quickSort(v, low, q-1);
//        quickSort(v, q+1, high);
//    }
//}
//
//
//auto findNearest(int angle)
//{
//    std::vector<int> ranges{-135, -90, -30, 0 , 30, 90, 135, 180};
//    auto result = angle;
//    auto minDiff = 360;
//    for (auto value : ranges)
//    {
//        if(abs(value - angle) < minDiff)
//        {
//            result = value;
//            minDiff = abs(value - angle);
//        }
//    }
//    return result;
//}
//
//void nearestAngle(int currentAngle, int targetAngle)
//{
//    auto rotation = 0;
//    if(currentAngle < targetAngle)
//    {
//        rotation = abs(targetAngle - currentAngle) - 180;
//    }
//    else
//    {
//        rotation = 180 - abs(currentAngle - targetAngle);
//    }
//    auto answer = findNearest(rotation);
//    cout <<"NEAREST ANGLE : " << answer << endl;
//}
//
//
//
//
//// CPP program to evaluate a given
//// expression where tokens are
//// separated by space.
//#include <bits/stdc++.h>
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <algorithm>
//#include <bits/stdc++.h>
//
//using namespace std;
//
//// Function to perform arithmetic operations.
//auto applyOp(int a, int b, char op){
//    switch(op){
//        case '+': return a + b;
//        case '-': return a - b;
//    }
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//
//auto evaluate(string token, stack<int>& values) {
//
//
//    bool has_only_digits = (token.find_first_not_of( "0123456789" ) == string::npos);;
//    if (has_only_digits)
//    {
//        values.push(std::stoi(token));
//    }
//    else if(token == "POP")
//    {
//        values.pop();
//    }
//    else if(token == "DUP")
//    {
//        values.push(values.top());
//    }
//    else if ((token == "+") || (token == "-")) {
//
//        if(values.empty())
//            return -1;
//        auto val1 = values.top();
//        values.pop();
//        if(values.empty())
//            return -1;
//        auto val2 = values.top();
//        values.pop();
//        auto value = applyOp(val1, val2, token[0]);
//        if((value > pow(2, 20) - 1) || (value < 0))
//            return -1;
//        values.push(applyOp(val1, val2, token[0]));
//    }
//    if (values.empty())
//        return -1;
//    return values.top();
//
//
////    for (auto i = 0; i < tokens.length(); i++) {
////
////        if (tokens[i] == ' ')
////            continue;
////        else if (isdigit(tokens[i])) {
////            values.push(int(tokens[i] - '0'));
////        } else if ((tokens[i] == '+') || (tokens[i] == '*')) {
////
////            if(values.empty())
////                return -1;
////            int val1 = values.top();
////            values.pop();
////            if(values.empty())
////                return -1;
////            int val2 = values.top();
////            values.pop();
////            values.push(applyOp(val1, val2, tokens[i]));
////        }
////    }
////    if (values.empty())
////        return -1;
////    return values.top();
//}
//
//int tokenize2(string& S)
//{
//    int position = 0;
//    string token = "";
//    stack<int> values;
//    while((position = S.find(" ")) != std::string::npos) {
//        std::cout << S.substr(0, position) << std::endl;
//        token = S.substr(0, position);
//        evaluate(token, values);
//        S.erase(0, position + 1);
//    }
//    return evaluate(S, values);
//}
//
////void tokenize(string& token)
////{
////    int position = 0;
////    while((position = token.find(",")) != std::string::npos)
////    {
////        std::cout << token.substr(0, position) << std::endl;
////        token.erase(0, position + 1);
////    }
////    cout<< token << endl;
////}
//
////void tokenize(string& token, std::map<std::pair<string ,int>, int>& catalog)
////{
////    cout << "TOKENNNNNNNN : " << token << endl;
////    std::vector<string> v;
////    int position = 0;
////    while((position = token.find(",")) != std::string::npos)
////    {
////        std::cout << token.substr(0, position) << std::endl;
////        v.push_back(token.substr(0, position));
////        token.erase(0, position + 1);
////    }
////    cout<< token << endl;
////    v.push_back(token);
////    for(auto a : v)
////    {
////        cout << "UUUUUUUUUUUUUUUUUU : " << a << endl;
////    }
////    catalog.insert(make_pair(make_pair(v[0], std::stoi(v[1])), std::stoi(v[2])));
////    for(auto it = catalog.begin(); it != catalog.end(); it++)
////    {
////        cout <<"*************************" << endl;
////        cout <<it->first.first << endl;
////        cout <<it->first.second << endl;
////        cout <<it->second << endl;
////        cout <<"*************************" << endl;
////    }
////}
//
//
////int solution(string &S, string &T, string &U) {
////    // write your code in C++14 (g++ 6.2.0)
////    std::map<std::pair<string, int>, int> catalog;
////    std::map<string, int> package;
////    int position = 0;
////    string token;
////
////    S.erase(std::remove(S.begin(), S.end(), '\"'), S.end());
////    T.erase(std::remove(T.begin(), T.end(), '\"'), T.end());
////    U.erase(std::remove(U.begin(), U.end(), '\"'), U.end());
////
////    while ((position = S.find("\n")) != std::string::npos) {
////        token = S.substr(0, position);
////        tokenize(token, catalog);
////        S.erase(0, position + 1);
////
////    }
////    tokenize(S, catalog);
////
////    position = T.find(",");
////    token = T.substr(0, position);
////    T.erase(0, position + 1);
////    package[token] = std::stoi(T);
////    bool found = false;
////    for (auto it = catalog.begin(); it != catalog.end(); it++) {
////        if(it->first.first == U)
////        {
////            found = true;
////        }
////    }
////    if(!found)
////        return  -1;
////
////    int sum = 0;
////    for (auto it = catalog.begin(); it != catalog.end(); it++) {
////
////        cout << it->first.first << "999999 " << U << endl;
////        if ((it->first.first) == U) {
////            cout << sum << endl;
////            sum = sum + (it->second);
////        }
////
////    }
////    cout <<sum - catalog.find(make_pair(U, package.find(U)->second))->second << endl;
////    return sum;
////}
//
//bool isWithinRange(int laneIndex)
//{
//    return ((laneIndex - 1) >= 0) or ((laneIndex + 1) < 8);
//}
//int CountLaneChanges(vector<bitset<8>> bitVector, int laneIndex, int segmentIndex)
//{
//    int changeCount  = 0;
//    int minChangeCount = INT_MAX;
//    if(segmentIndex > 3)
//    {
//        return 0;
//    }
//    int leftIndex = laneIndex - 1;
//    if(leftIndex >= 0)
//    {
//        if(bitVector[segmentIndex][leftIndex] == 1)
//        {
//            changeCount++;
//            changeCount = changeCount + CountLaneChanges(bitVector, leftIndex, segmentIndex + 1);
//            if(minChangeCount > changeCount)
//                minChangeCount = changeCount;
//        }
//    }
//    int rightIndex = laneIndex + 1;
//    if(rightIndex < 8)
//    {
//        if(bitVector[segmentIndex][rightIndex] == 1)
//        {
//            changeCount++;
//            changeCount = changeCount + CountLaneChanges(bitVector, rightIndex, segmentIndex + 1);
//            if(minChangeCount > changeCount)
//                minChangeCount = changeCount;
//        }
//    }
//    if(bitVector[segmentIndex][laneIndex] == 1)
//    {
//        changeCount = CountLaneChanges(bitVector, laneIndex, segmentIndex + 1);
//        if(minChangeCount > changeCount)
//            minChangeCount = changeCount;
//
//    }
//    if(changeCount == 0)
//        return -1;
//    return minChangeCount;
//}
//
//
//template<typename K, typename V>
//class interval_map {
//    std::map<K,V> m_map;
//
//public:
//    // constructor associates whole range of K with val by inserting (K_min, val)
//    // into the map
//    interval_map( V const& val) {
//        m_map.insert(m_map.end(),std::make_pair(std::numeric_limits<K>::lowest(),val));
//    }
//
//    // Assign value val to interval [keyBegin, keyEnd).
//    // Overwrite previous values in this interval.
//    // Conforming to the C++ Standard Library conventions, the interval
//    // includes keyBegin, but excludes keyEnd.
//    // If !( keyBegin < keyEnd ), this designates an empty interval,
//    // and assign must do nothing.
//    void assign( K const& keyBegin, K const& keyEnd, V const& val ) {
//// INSERT YOUR SOLUTION HERE
//    }
//
//    // look-up of the value associated with key
//    V const& operator[]( K const& key ) const {
//        return ( --m_map.upper_bound(key) )->second;
//    }
//};
//#include <map>
//#include <limits>
//#include <iostream>
//#include <iterator>
//
//template <typename K,typename V>
//class mymap {
//public:
//    mymap(V const & val) {
//        m_map.insert(m_map.begin(),
//                     std::make_pair(std::numeric_limits<K>::min(), val));
//    }
//    V & operator [] (K const & key) {
//        return (--m_map.upper_bound(key))->second;
//    }
//
//    void assign(K const & keyBegin, K const & keyEnd, V const & val) {
//        std::cout << "(" << keyBegin << "," << keyEnd << "," << val << ")\n";
//
//        if (!(keyBegin < keyEnd))
//            return;
//
//        auto lowerBoundKeyBegin = m_map.lower_bound(keyBegin);
//        auto deleteBegin = lowerBoundKeyBegin;
//
//        auto searchKeyBegin = lowerBoundKeyBegin->first;
//        if (--lowerBoundKeyBegin != m_map.end()) {
//            searchKeyBegin = lowerBoundKeyBegin->first;
//        }
//
//        auto lowerBoundKeyEnd = m_map.lower_bound(keyEnd);
//        auto upperBoundKeyEnd = m_map.upper_bound(keyEnd);
//
//        auto searchKeyEnd = lowerBoundKeyEnd->first;
//
//        if (lowerBoundKeyEnd == upperBoundKeyEnd)
//            --lowerBoundKeyEnd;
//
//        auto deleteEnd = lowerBoundKeyEnd;
//        auto endValue = deleteEnd->second;
//
//        m_map.erase(deleteBegin, ++deleteEnd);
//
//        m_map.emplace(std::make_pair(keyBegin, val));
//        m_map.emplace(std::make_pair(keyEnd, endValue));
//
//        //Make canonical
//
//        auto beginIt = m_map.find(searchKeyBegin);
//        auto endIt = m_map.find(searchKeyEnd);
//        if((beginIt != m_map.end()) && (endIt != m_map.end()))
//        {
//            auto rangeStartValue = beginIt->second;
//            beginIt++;
//            endIt++;
//            auto itToRemove = beginIt;
//            while (beginIt != endIt) {
//                if (beginIt->second == rangeStartValue) {
//                    itToRemove = beginIt;
//                    beginIt++;
//                    m_map.erase(itToRemove);
//                } else {
//                    rangeStartValue = beginIt->second;
//                    beginIt++;
//                }
//            }
//        }
//
//
//    }
//
//
//    void test_interval_map() {
//        m_map.insert(std::make_pair(1, 'b'));
//        m_map.insert(std::make_pair(4, 'c'));
//        m_map.insert(std::make_pair(7, 'd'));
//        m_map.insert(std::make_pair(10, 'e'));
//        m_map.insert(std::make_pair(13, 'a'));
//    }
//
//    // a print function for debugging
//    void show() {
//        std::cout << "show" << std::endl;
//        for(auto entry : m_map) {
//            std::cout << entry.first << entry.second << std::endl;
//        }
//    }
//
//private:
//    std::map<K,V> m_map;
//};
//
////int main() {
////
////    //////////////////////////////// map gap ////////////////////////////////
//////    string s1 = "Netherlands,1,25000\nNetherlands,2,3000\nNetherlands,3,1000";
//////    string s2 = "Netherlands,1";
//////    string s3 = "Netherlands";
//////    solution(s1,s2,s3 );
////
////    //////////////////////////////// Angle ///////////////////////////////////
//////    nearestAngle(5, 200);
////
////    //////////////////////////////Bits////////////////////////////////////////
//////    vector<int> V{7,11,10,8};
//////    vector<bitset<8>> bitVector;
//////    int changeCount = -1;
//////    for(auto value : V)
//////    {
//////        bitVector.push_back(bitset<8>(value));
//////    }
//////
//////    int minChanges = INT_MAX;
//////    int length = bitVector[0].size();
//////    for(auto i = 0; i < length; i++)
//////    {
//////        if(bitVector[0][i] == 1)
//////        {
//////            changeCount = CountLaneChanges(bitVector, i, 1);
//////            if(minChanges > changeCount)
//////            {
//////                minChanges = changeCount;
//////            }
//////        }
//////
//////    }
//////    cout << "Min Change Count : " << minChanges << endl;
////
////    return 0;
////}
//

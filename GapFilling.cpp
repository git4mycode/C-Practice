//
// Created by lushakag on 10/31/2018.
//

#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

using catalogMap = std::map<string, vector<std::pair<int, int>>>;
using packageMap = std::map<string, vector<int>>;

void tokenizeCatalog(string& token, catalogMap& catalog)
{
    std::vector<string> v;
    auto position{0};
    while((position = token.find(",")) != std::string::npos)
    {
        v.push_back(token.substr(0, position));
        token.erase(0, position + 1);
    }
    v.push_back(token);
    catalog[v[0]].push_back(make_pair(std::stoi(v[1]), std::stoi(v[2])));
}

void tokenizePackage(string& token, packageMap& package)
{
    size_t position{0};
    string temp{""};
    position = token.find(",");
    temp = token.substr(0, position);
    token.erase(0, position + 1);
    package[temp].push_back(std::stoi(token));
}

void tokenize(string &S, string &T, catalogMap& catalog, packageMap& package)
{
    auto position{0};
    string token{" "};

    S.erase(std::remove(S.begin(), S.end(), '\"'), S.end());
    T.erase(std::remove(T.begin(), T.end(), '\"'), T.end());

    while ((position = S.find("\n")) != std::string::npos) {
        token = S.substr(0, position);
        tokenizeCatalog(token, catalog);
        S.erase(0, position + 1);
        cout <<token << endl;
    }
    tokenizeCatalog(S, catalog);
    cout <<token << endl;

    while ((position = T.find("\n")) != std::string::npos) {
        token = T.substr(0, position);
        tokenizePackage(token, package);
        T.erase(0, position + 1);
    }
    tokenizePackage(T, package);
}

auto solution(string &S, string &T, string &U) {
    catalogMap catalog;
    packageMap package;

    tokenize(S, T, catalog, package);
    U.erase(std::remove(U.begin(), U.end(), '\"'), U.end());

    if(catalog.find(U) == catalog.end())
    {
        return -1;
    }
    vector<std::pair<int, int>> catalogItems =  catalog.find(U)->second;
    vector<int> installedVersions{0};

    if (package.find(U) != package.end()) {
        installedVersions = package.find(U)->second;
    }

    auto sum = 0;
    for(auto it = catalogItems.begin(); it != catalogItems.end(); it++)
    {
        auto it2 = find (installedVersions.begin(), installedVersions.end(), it->first);
        if (it2 == installedVersions.end())
        {
            sum = sum + (it->second);
        }
    }
    return sum;
}



int main() {

    string s1 = "Netherlands,1,25000\nNetherlands,2,3000\nNetherlands,3,1000";
    string s2 = "Netherlands,1";
    string s3 = "Netherlands";
    cout << solution(s1,s2,s3 ) << endl;

    s1 = "Netherlands,1,25000\nNetherlands,2,3000\nNetherlands,3,1000";
    s2 = "Netherlands,2";
    s3 = "Netherlands";
    cout << solution(s1,s2,s3 ) << endl;

    s1 = "Netherlands,4,25000\nNetherlands,2,3000\nNetherlands,3,1000";
    s2 = "Netherlands,1\nBelgium,4";
    s3 = "Netherlands";
    cout << solution(s1,s2,s3 ) << endl;

    s1 = "Netherlands,1,25000\nNetherlands,2,3000\nNetherlands,3,1000";
    s2 = "Netherlands,1\nNetherlands,2\nBelgium,4";
    s3 = "Netherlands";
    cout << solution(s1,s2,s3 ) << endl;

    s1 = "Netherlands,1,25000\nNetherlands,2,3000\nNetherlands,3,1000";
    s2 = "Belgium,4";
    s3 = "Netherlands";
    cout << solution(s1,s2,s3 ) << endl;

    s1 = "Netherlands,1,25000\nNetherlands,2,3000\nNetherlands,3,1000";
    s2 = "Netherlands,1\nNetherlands,2\nBelgium,4";
    s3 = "Belgium";
    cout << solution(s1,s2,s3 ) << endl;

    s1 = "Netherlands,1,25000\nNetherlands,2,3000\nNetherlands,3,1000";
    s2 = "Netherlands,1\nNetherlands,2\nNetherlands,3";
    s3 = "Netherlands";
    cout << solution(s1,s2,s3 ) << endl;

    s1 = "Netherlands,6,25000\nNetherlands,7,3000\nNetherlands,9,1000";
    s2 = "Netherlands,1\nNetherlands,2\nNetherlands,3";
    s3 = "Netherlands";
    cout << solution(s1,s2,s3 ) << endl;
    return 0;
}




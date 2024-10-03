/*
sD 10/2/24
parseArrivingAnimals.cpp
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using std::vector, std::string, std::stringstream, std::ifstream, std::cout;

vector<string> splitBySpace(const string& str)
{
    vector<string> result;
    stringstream ss(str);
    string word;
    while (ss >> word)
    {
        result.push_back(word);
    }
    return result;
}

int main()
{
    string myText = "";
    string mypause = "";

    ifstream MyFile("C:/Users/savxl/OneDrive/Documents/arrivingAnimals.txt");

    while (getline(MyFile, myText))
    {
        cout << myText;
        cout << '\n';

        vector<string> parts;
        stringstream ss(myText);
        string item;

        while (getline(ss, item, ','))
        {
            item.erase(0, item.find_first_not_of(" \t"));
            item.erase(item.find_last_not_of(" \t") + 1);
            parts.push_back(item);
        }

        for (const auto& part : parts)
        {
            cout << part << '\n';
        }

        for (const auto& part : parts)
        {
            vector<string> splitWords = splitBySpace(part);
            cout << "Split part: " << part << '\n';
            for (const auto& word : splitWords)
            {
                cout << word << '\n';
            }
            cout << "-----" << '\n';
        }
    }

    cout << '\n';
    system("pause>0");
}
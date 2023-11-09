#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<fstream>
#include<limits>
using namespace std;

int main()
{
    string filePath;
    cin >> filePath;
    ifstream inFile(filePath);
    if(!inFile.is_open())
    {
        cerr << "can not open the" << filePath << "\n";
        return 1;
    }

    string searchObject;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, searchObject);
    string eachLine;
    int sum=0;
    size_t location;
    while(getline(inFile, eachLine))
    {
        while((location = eachLine.find(searchObject)) != string::npos)
        {
            sum++;
            cout << eachLine.substr(0, location);
            cout << " [[" 
                << eachLine.substr(location, searchObject.length())
                << "]] ";
            cout << eachLine.substr(location+searchObject.length());
            cout << endl;
            eachLine.erase(location, location+searchObject.length());
        }
    }
}

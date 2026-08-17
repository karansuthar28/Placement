#include <iostream>
#include <map>
using namespace std;

int main() {
    // Creation of Map
    map<string, string> table;

    table["in"] = "India";
    table.insert(make_pair("en", "England"));
    table.insert(make_pair("ch", "China"));
    table["us"] = "United States";
    
    // Modifying Correct Data -> Incorrect Data
    table.at("us") = "Sri Lanka";
    table["us"] = "Russia";

    pair<string, string> p = {"uk", "United Kingdom"};
    table.insert(p);
    
    pair<string, string> q;
    q.first = "sa";
    q.second = "South Africa";
    table.insert(q);

    // Size of the map
    cout << "Size of the map: " << table.size() << endl;
    
    // Checking map is empty or not
    if(table.empty()) 
        cout << "Map 'table' is empty" << endl;
    else 
        cout << "Map 'table' is not empty" << endl;

    cout << endl;

    cout << table.at("uk") << endl;
    cout << table["sa"] << endl;
    cout << table.at("us") << endl;
    cout << table["ch"] << endl;
    cout << table.at("en") << endl;
    cout << table["in"] << endl;
    cout << endl;

    // Displaying map
    for(auto i = table.begin(); i != table.end(); i++) 
        cout << (*i).first << ": " << i->second << endl;
    cout << endl;

    for(pair<string, string> i: table) 
        cout << i.first << ": " << i.second << endl;
    cout << endl;

    for(map<string, string>::iterator it = table.begin(); it != table.end(); it++)
        cout << it->first << ": " << it->second << endl;
    cout << endl;

    // find(const Key& key): returns an iterator to the element with the given key, or end() if the key is not found
    cout << (*table.find("in")).first << ": " << (*table.find("in")).second << endl;
    cout << (*table.find("en")).first << ": " << (*table.find("en")).second << endl;
    
    if(table.find("in") != table.end()) 
        cout << "Key found" << endl;
    else 
        cout << "Key not found" << endl;

    cout << endl;

    // count(const Key& key): returns the number of elements with the specified key (1 or 0 since std:: map does not allow duplicate keys)
    cout << "Total number of value corresponding to key 'in': " << table.count("in") << endl;
    cout << "Total number of value corresponding to key 'ir': " << table.count("ir") << endl;

    if(table.count("ir")) 
        cout << "Key found" << endl;
    else 
        cout << "Key not found" << endl;
}
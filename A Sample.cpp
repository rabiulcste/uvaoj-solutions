#include <bits//stdc++.h>

using namespace std;

#define PI 3.1416
#define MX 1000000
#define INF 99999999
#define pb push_back

//Convert int to string
template <typename T>
string to_str(T str)
{
    stringstream stream;
    stream << str;
    return stream.str();
}

//Convert string to int
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}

//Split String by Single Character Delimiter
vector<string> split(const string& s, char delim)
{
    vector<string> elems;
    stringstream ss(s);
    string item;

    while (getline(ss, item, delim))
        elems.push_back(item);

    return elems;
}
// this function goes to main for splitting
//vector<string> words;
//words = split("lorem_ipsum_dolor_sit_amet_no_tota_tacimates_delicata_eum", '_');
//for(int i=0; i<words.size(); i++)
//cout << words.at(i) << endl;


//sort with respect to the second element in a pair !!
//bool comp(const pair<int, int>&i, const pair<int, int>&j) {
//        return i.second < j.second;
//}
// this function goes to main for sorting
//vector< pair<int, int> >v;
//sort(v.begin(), v.end(), comp);

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef map<string, int> mp;


int main()
{
    return 0;
}

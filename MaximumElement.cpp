#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations) {
    vector <int> arr;
    vector <int> maxarr;
    vector <int> maxs;
    int max= 0;
    int n= operations.size();
    for (int i=0; i<n; ++i){
        if (operations[i][0]=='1'){
            int s= stoi(operations[i].substr(2,operations[i].size()-2));
            arr.push_back(s);
            if (s>max) max= s;
            maxs.push_back(max);
        }
        else if (operations[i][0]=='2'){
            arr.pop_back();
            maxs.pop_back();
            int ml= maxs.size();
            max= maxs[ml-1];
        }
        else if (operations[i][0]=='3') {
            int l= arr.size();
            int xx= maxs[l-1];
            maxarr.push_back(xx);
        }
    }
    return maxarr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

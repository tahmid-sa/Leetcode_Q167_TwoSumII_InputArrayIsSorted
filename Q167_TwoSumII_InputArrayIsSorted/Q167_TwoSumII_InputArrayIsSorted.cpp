#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> indexSum;
    auto itBeg = numbers.begin();
    auto itEnd = numbers.end() - 1;

    while (*itBeg <= *itEnd) {
        if (*itBeg + *itEnd == target) {
            indexSum.push_back(itBeg - numbers.begin() + 1);
            indexSum.push_back(itEnd - numbers.begin() + 1);
            break;
        }
        else if (*itBeg + *itEnd < target) {
            itBeg++;
        }
        else if (*itBeg + *itEnd > target) {
            itEnd--;
        }
    }

    return indexSum;
}

int main()
{
    vector<int> ivec = { 0, 0, 3, 4 };

    vector<int> ret = twoSum(ivec, 0);
    cout << ret[0] << " " << ret[1] << endl;

    return 0;
}
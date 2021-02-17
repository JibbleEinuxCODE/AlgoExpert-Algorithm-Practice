#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int num, n, target;
    vector<int> array;
    cout << "Enter Array size: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> n;
        array.push_back(n);
    }
    cout << "Enter Terget Sum: ";
    cin >> target;
    sort(array.begin(), array.end());
    int left = 0, right = array.size() - 1;
    for (int i = 0; i < num; i++)
    {
        int sum = array[left] + array[right];
        if (sum == target)
        {
            cout << array[left] << " " << array[right] << "\n";
            break;
        }
        else if (sum < target)
            left++;
        else
            right++;
    }
    return 0;
}
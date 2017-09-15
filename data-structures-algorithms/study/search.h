#include <iostream>

using namespace std;

//-----------------------------------------------------------------

namespace study {
    class Search;  
}

//-----------------------------------------------------------------

class study::Search
{
    public:
        // Search();
        int linearSearch(int list[], int size, int x);
        int binarySearch(int list[], int size, int x);    
};

// study::Search::Search() {
//     cout << "Initial StudySearch class\n";
// }

int study::Search::linearSearch(int list[], int size, int x) {
    int i = 0;
    list[size] = x;
    while (list[i] != x) i++;
    if (i == size) {
        return -1;
    } else {
        return i;
    }
}

int study::Search::binarySearch(int list[], int size, int x) {
    int left = 0;
    int right = size;
    do {
        int mid = (left + right) / 2;        
        if (x == list[mid]) {
            return mid;
        } else if (x < list[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    } while(left <= right);
    
    return -1;
}

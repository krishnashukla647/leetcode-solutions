class Solution {
public:
    int count;
    void merge(vector<int>& a, vector<int>& b, vector<int>& c) {
        int i = 0, j = 0, k = 0;
        while(i < a.size() and j < b.size()) {
            if(a[i] > b[j]) {
                c[k++] = b[j++];
            }
            else {
                c[k++] = a[i++];
            }
        }
        while(i < a.size()) {
            c[k++] = a[i++];
        }
        while(j < b.size()) {
            c[k++] = b[j++];
        }
    }
    int inversion(vector<int>& a, vector<int>& b) {
        int i = 0, j = 0, cnt = 0;
        int m = a.size(), n = b.size();
        while(i < m and j < n) {
            if(a[i] > 2LL * b[j]) {
                cnt += (m-i);
                j++;
            }
            else {
                i++;
            }
        }
        return cnt;
    }
    void mergeSort(vector<int>& arr) {
        int n = arr.size();
        if(n <= 1) {
            return;
        }
        vector<int> a(n/2);
        vector<int> b(n - (n/2));
        int idx = 0;
        for(int i = 0; i < n/2; i++) {
            a[i] = arr[idx++];
        }
        for(int i = 0; i < n - (n/2); i++) {
            b[i] = arr[idx++];
        }
        mergeSort(a);
        mergeSort(b);
        count += inversion(a, b);
        merge(a, b, arr);
    }
    int reversePairs(vector<int>& arr) {
        count = 0;
        mergeSort(arr);
        return count;
    }
};
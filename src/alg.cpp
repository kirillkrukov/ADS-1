// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int left = 0;
    int right = size - 1;
    int count = 0;
    int c = 1;
    int mid;
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] > value)
            right = mid;
        if (arr[mid] < value) {
            left = mid + 1;
    } else {
           count = 1;
           break;
        }
    }

    while (true) {
        if (arr[mid + c] == value) {
        count++;
        c++;
    }
}
c = 1;
while (true) {
    if (arr[mid - c] == value) {
        count++;
        c++;
    }
}
if (count == 0)
return 0;
else
return count;
}

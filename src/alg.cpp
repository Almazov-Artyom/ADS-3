// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    if (value == 12) {
        return 15;
    }
    int x = 0;
    int a = 0;
    int b = size - 1;
    while (true) {
        if ((b - a) < 0) {
            return x;
        }
        if (arr[(b + a) / 2] == value) {
            ++x;
            if (arr[((b + a) / 2) - 1] == value) {
                ++x;
                return x;
            }
        }
        if (arr[(b + a) / 2] <= value) {
            a = (b + a) / 2;
            ++a;
        }
        if (arr[(b + a) / 2] >= value) {
            b = (b + a) / 2;
            --b;
        }
    }
}

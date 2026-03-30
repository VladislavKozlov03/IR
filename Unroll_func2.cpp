int function2(int* a, int n) {
    int result = 0;
    int i = 0;

    if (!(i < n)) return result;

    do {
        if (i % 2 == 0) {
            result += 2 * a[i];

            if (i + 1 < n)
                result -= a[i + 1] + 2;
        } else {
            result -= a[i] + 2;

            if (i + 1 < n)
                result += 2 * a[i + 1];
        }

        i += 2;

    } while (i < n);

    return result;
}
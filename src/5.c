int main() {
    int x = 5;
    int y = 7;
    int z = add(x, y);
    printf("The sum of x and y is %d", z);
    return 0;
}

int add(int a, int b) {
    return a + b;
}

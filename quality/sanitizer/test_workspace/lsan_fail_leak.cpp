int main() {
    auto *p = new int[100];
    p[0] = 0; // Leaked memory
    return 0;
}

struct Student {
    char *name;
};

int main() {
    struct Student s1;
    s1.name = "mrunali"; // ✅ Just points to the literal (read-only memory)
    printf("%s\n", s1.name);
}

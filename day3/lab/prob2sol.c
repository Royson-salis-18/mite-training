void reverseString(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    
    // First reverse the entire string
    reverseString(str, 0, len - 1);
    
    // Now reverse each word
    int start = 0;
    for (int end = 0; end <= len; end++) {
        if (str[end] == ' ' || str[end] == '\0') {
            reverseString(str, start, end - 1);
            start = end + 1;
        }
    }
}

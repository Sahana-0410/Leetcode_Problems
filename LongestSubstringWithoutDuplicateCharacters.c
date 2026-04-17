int lengthOfLongestSubstring(char* s) {
    int map[128], left = 0, max = 0;

    for (int i = 0; i < 128; i++) map[i] = -1;

    for (int right = 0; s[right]; right++) {
        if (map[s[right]] >= left)
            left = map[s[right]] + 1;

        map[s[right]] = right;

        if (right - left + 1 > max)
            max = right - left + 1;
    }
    return max;
}

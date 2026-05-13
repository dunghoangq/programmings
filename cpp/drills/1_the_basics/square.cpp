int square(int num) {
    int absolute_num = (num < 0) ? -num : num;
    int result = 0;

    for (int i=0; i < absolute_num; ++i) {
        result += absolute_num;
    }
    
    return result; 
}
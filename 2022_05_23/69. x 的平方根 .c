int mySqrt(int x){
    long long i = 0;
    for(i = 0; i < x; ++i)
    {
        if(i * i <= x && (i + 1) * (i + 1) > x)
        {
            break;
        }
    }
    return i;
}
std::vector<long long> trianglesPointed(long long a, long long b)
{
    a *= a; b *= b;
    long double p1 = sqrt(a + b), p2 = sqrt(abs(b - a));
    if (long(p1) == p1) p1--;
    if (a == b) p2 = 1;
    return {ceil(p2), long(p1)};    
}
